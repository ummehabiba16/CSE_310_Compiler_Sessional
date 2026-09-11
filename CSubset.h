#pragma once
#include "CSubsetBaseVisitor.h"
#include "2205134_symbol_table.h"
// #include "2205134_AuxInfo.h"

using namespace std;

int errCount = 0;
int nextLocalOffset = -4;
int nextParamOffset = 8;
bool addPrint = false;
bool firstFuncDef = true;
int labelCount = 0;
string currentFuncName = "main";

extern ofstream logFile;
extern ofstream errorFile;
extern ofstream asmFile; // #
extern ofstream asmTempFile;

string printFunction = "\n\n; ---- OUTDEC: print integer in EAX as decimal, followed by newline ----\nOUTDEC:\n\tPUSH EBX\n\tPUSH ECX\n\tPUSH EDX\n\tPUSH ESI\n\tOR   EAX, EAX\n\tJGE  OUTDEC_POSITIVE\n\tNEG  EAX\n\tPUSH EAX\n\tSUB  ESP, 4\n\tMOV  byte [ESP], '-'\n\tMOV  EAX, 4\n\tMOV  EBX, 1\n\tMOV  ECX, ESP\n\tMOV  EDX, 1\n\tINT  0x80\n\tADD  ESP, 4\n\tPOP  EAX\nOUTDEC_POSITIVE:\n\tXOR  ECX, ECX\n\tMOV  EBX, 10\nOUTDEC_DIGIT_LOOP:\n\tXOR  EDX, EDX\n\tDIV  EBX\n\tADD  DL, 30h\n\tPUSH EDX\n\tINC  ECX\n\tTEST EAX, EAX\n\tJNZ  OUTDEC_DIGIT_LOOP\n\tMOV  ESI, ECX\n\tMOV  EBX, 1\n\tMOV  EDX, 1\nOUTDEC_PRINT_LOOP:\n\tTEST ESI, ESI\n\tJZ   OUTDEC_NEWLINE\n\tMOV  EAX, 4\n\tMOV  ECX, ESP\n\tINT  0x80\n\tADD  ESP, 4\n\tDEC  ESI\n\tJMP  OUTDEC_PRINT_LOOP\nOUTDEC_NEWLINE:\n\tSUB  ESP, 4\n\tMOV  byte [ESP], 10\n\tMOV  EAX, 4\n\tMOV  ECX, ESP\n\tINT  0x80\n\tADD  ESP, 4\n\tPOP  ESI\n\tPOP  EDX\n\tPOP  ECX\n\tPOP  EBX\n\tRET";

void logRule(antlr4::ParserRuleContext *ctx, string rule)
{
  logFile << "Line " << ctx->getStart()->getLine() << ": " << rule << "\n\n";
  // logFile<<ctx->getText()<<"\n\n";
  // thanks to claude
  std::string matchedText = ctx->getStart()->getInputStream()->getText(
      antlr4::misc::Interval(ctx->getStart()->getStartIndex(), ctx->getStop()->getStopIndex()));
  logFile << matchedText << "\n\n";
}

void logRule(antlr4::ParserRuleContext *ctx, string rule, string matchedText)
{
  logFile << "Line " << ctx->getStart()->getLine() << ": " << rule << "\n\n";
  // logFile<<ctx->getText()<<"\n\n";
  logFile << matchedText << "\n\n";
}

void logError(antlr4::ParserRuleContext *ctx, string error)
{
  errCount++;
  errorFile << "Error at line " << ctx->getStart()->getLine() << ": " << error << "\n\n";
  logFile << "Error at line " << ctx->getStart()->getLine() << ": " << error << "\n\n";
}

void copyFromFile(ofstream &temp, ofstream &original)
{
  temp.close();
  ifstream tempIn("2205134Temp.asm");
  original << tempIn.rdbuf();
  tempIn.close();
}

class ParamInfo
{
public:
  DataType dataType;
  bool hasId;
  ParamInfo(DataType dt, bool hasId)
  {
    this->dataType = dt;
    this->hasId = hasId;
  }
};

// string intFloatCheck(string t1, string t2)
// {
//   if ((t1 == string("int") && t2 == string("int")) || (t1 == string("float") && t2 == string("float")))
//   {
//     // no casting needed
//     return t1;
//   }
//   else if ((t1 == string("int") && t2 == string("float")) || (t1 == string("float") && t2 == string("int")))
//   {
//     // operand cast to float from int
//     return string("float");
//   }
//   return string("");
// }

DataType intFloatCheck(DataType t1, DataType t2)
{
  if (t1 == DataType::ERROR || t2 == DataType::ERROR)
  {
    return DataType::ERROR;
  }
  if (t1 == t2)
  {
    if (t1 == DataType::INT || t1 == DataType::FLOAT)
    {
      return t1;
    }
  }
  else
  {
    if ((t1 == DataType::INT && t2 == DataType::FLOAT) || (t1 == DataType::FLOAT && t2 == DataType::INT))
    {
      return DataType::FLOAT;
    }
  }
  return DataType::ERROR;
}

DataType intFloatAssignCheck(DataType t1, DataType t2)
{
  if (t1 == DataType::ERROR || t2 == DataType::ERROR)
  {
    return DataType::ERROR;
  }
  if (t1 == t2)
  {
    if (t1 == DataType::INT || t1 == DataType::FLOAT)
    {
      // no casting needed
      return t1;
    }
  }
  else if (t1 == DataType::FLOAT && t2 == DataType::INT)
  {
    // operand cast to float from int
    return DataType::FLOAT;
  }
  // according to error2.txt, this is not allowed
  //  else if (t1 == DataType::INT && t2 == DataType::FLOAT)
  //  {
  //    return DataType::INT;
  //  }
  return DataType::ERROR;
}

// string intFloatAssignCheck(string t1, string t2){
//   if ((t1 == string("int") && t2 == string("int")) || (t1 == string("float") && t2 == string("float")))
//   {
//     // no casting needed
//     return t1;
//   }
//   else if (t1 == string("float") && t2 == string("int"))
//   {
//     // operand cast to float from int
//     return string("float");
//   }
//   else if(t1 == string("int") && t2 == string("float")){
//     return string("int");
//   }
//   return string("");
// }

class CSubset : public CSubsetBaseVisitor
{

private:
  SymbolTable *symbolTable;

public:
  CSubset()
  {
    this->symbolTable = new SymbolTable(30);
  }
  // # phase 1
  any visitStart(CSubsetParser::StartContext *ctx) override
  {
    // #
    asmFile << "format ELF executable 3\n";
    asmFile << "entry main\n"; //??
    asmFile << "segment readable writeable\n";

    visit(ctx->program());
    logFile << "Line " << ctx->getStart()->getLine() << ": start : program\n\n";
    symbolTable->printAllScopeTableNonEmpty();
    logFile << "\n";
    logFile << "Total lines: " << ctx->getStop()->getLine() << "\n";
    logFile << "Total errors: " << errCount << "\n";
    // #
    if (addPrint)
    {
      asmFile << printFunction;
    }
    return nullptr;
  }

  // # phase 1
  any visitProgramUnit(CSubsetParser::ProgramUnitContext *ctx) override
  {
    visit(ctx->unit());
    logRule(ctx, "program : unit");
    return nullptr;
  }

  // # phase 1
  any visitProgramAgain(CSubsetParser::ProgramAgainContext *ctx) override
  {
    visit(ctx->program());
    visit(ctx->unit());
    logRule(ctx, "program : program unit");
    return nullptr; //?
  }

  // # phase 1
  any visitUnitVarDeclaration(CSubsetParser::UnitVarDeclarationContext *ctx) override
  {
    visit(ctx->var_declaration());
    logRule(ctx, "unit : var_declaration");
    return nullptr;
  }

  any visitUnitFuncDeclaration(CSubsetParser::UnitFuncDeclarationContext *ctx) override
  {
    visit(ctx->func_declaration());
    logRule(ctx, "unit : func_declaration");
    return nullptr;
  }

  // # phase 1
  any visitUnitFuncDefinition(CSubsetParser::UnitFuncDefinitionContext *ctx) override
  {
    if(firstFuncDef){
      asmFile << "segment readable executable\n";
      firstFuncDef = false;
    }
    visit(ctx->func_definition());
    logRule(ctx, "unit : func_definition");
    return nullptr;
  }

  any visitFuncDeclarationWParameters(CSubsetParser::FuncDeclarationWParametersContext *ctx) override
  {
    visit(ctx->type_specifier());
    string retType = ctx->type_specifier()->getText();
    SymbolInfo *symbol = new SymbolInfo(ctx->ID()->getText(), "ID", retType);
    if (!symbolTable->insert(symbol))
    {
      logError(ctx, "Function already declared");
      return nullptr;
    }
    symbolTable->enterScope();
    vector<ParamInfo> parameters = any_cast<vector<ParamInfo>>(visit(ctx->parameter_list()));
    AuxInfo *funcInfo = symbol->getAuxInfo();
    vector<DataType> dataTypes;
    for (int i = 0; i < parameters.size(); i++)
    {
      dataTypes.push_back(parameters[i].dataType);
    }
    funcInfo->setArgTypes(dataTypes);
    symbolTable->exitScope(false); // for function declaration, don't print scope tables
    logRule(ctx, "func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON");
    return nullptr;
  }

  any visitFuncDeclarationWoParameters(CSubsetParser::FuncDeclarationWoParametersContext *ctx) override
  {
    visit(ctx->type_specifier());
    string retType = ctx->type_specifier()->getText();
    SymbolInfo *symbol = new SymbolInfo(ctx->ID()->getText(), "ID", retType);
    if (!symbolTable->insert(symbol))
    {
      logError(ctx, "Function already declared");
      return nullptr;
    }
    symbolTable->enterScope();
    vector<DataType> parameters;
    AuxInfo *funcInfo = symbol->getAuxInfo();
    funcInfo->setArgTypes(parameters);
    symbolTable->exitScope(false);
    logRule(ctx, "func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON");
    return nullptr;
  }

  any visitFuncDefWParameters(CSubsetParser::FuncDefWParametersContext *ctx) override
  {
    visit(ctx->type_specifier());
    string retType = ctx->type_specifier()->getText();
    string funcName = ctx->ID()->getText();
    // #
    currentFuncName = funcName;
    nextLocalOffset = -4; // initialize for all function
    nextParamOffset = 8;
    asmFile << funcName << ":\n";
    asmFile << "\tPUSH EBP\n\tMOV EBP, ESP\n";
    SymbolInfo *symbol = new SymbolInfo(funcName, "ID", retType);
    bool declared = false;
    SymbolInfo *found = symbolTable->lookUp(funcName);
    if (found != NULL && found->getAuxInfo()->getArgCount() == -1)
    {
      // declared before, but not function
      string err = "Multiple declaration of " + funcName;
      logError(ctx, err);
    }
    else if (found != NULL)
    {
      // is declared beforehand
      declared = true;
      if (found->getAuxInfo()->getDataType() != stringToType(retType))
      {
        string err = "Return type mismatch with function declaration in function " + funcName;
        logError(ctx, err);
        // return nullptr;
      }
    }
    else
    {
      symbolTable->insert(symbol);
    }
    symbolTable->enterScope();
    vector<ParamInfo> parameters = any_cast<vector<ParamInfo>>(visit(ctx->parameter_list()));
    AuxInfo *funcInfo = symbol->getAuxInfo();
    vector<DataType> argTypes;
    for (int i = 0; i < parameters.size(); i++)
    {
      argTypes.push_back(parameters[i].dataType);
      if (!parameters[i].hasId)
      {
        string err = to_string(i + 1) + "th parameter's name not given in function definition of " + funcName;
        logError(ctx, err);
      }
    }
    funcInfo->setArgTypes(argTypes);

    if (declared)
    {
      vector<DataType> declaredTypes = found->getAuxInfo()->getArgTypes();

      if (parameters.size() != declaredTypes.size())
      {
        string err = "Total number of arguments mismatch with declaration in function " + funcName;
        logError(ctx, err);
      }
      else
      {
        for (int i = 0; i < declaredTypes.size(); i++)
        {
          if (parameters[i].dataType != declaredTypes[i])
          {
            string err = "Parameter " + to_string(i + 1) + " does not match with declaration ";
            logError(ctx, err);
            // return nullptr; //
          }
        }
      }
    }
    visit(ctx->compound_statement());
    // #
    asmFile << funcName << "_exit:\n";
    
    if(currentFuncName == "main"){
      //restoring EBP, ESP redundant
      asmFile << "\n\tMOV EAX, 1    ; syscall number: sys_exit";
      asmFile << "\n\tXOR EBX, EBX  ; exit code 0 (success)";
      asmFile << "\n\tINT 0x80";
    }
    else{
      asmFile << "\n\tADD ESP, " << ((-4) - nextLocalOffset);
      asmFile << "\n\tPOP EBP";
      asmFile << "\n\tRET "<<(nextParamOffset - 8)<<"\n";
    }

    symbolTable->exitScope();
    logRule(ctx, "func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement");
    return nullptr;
  }

  // # phase 1
  any visitFuncDefWoParameters(CSubsetParser::FuncDefWoParametersContext *ctx) override
  {
    visit(ctx->type_specifier());
    string retType = ctx->type_specifier()->getText();
    string funcName = ctx->ID()->getText();
    // #
    currentFuncName = funcName;
    nextLocalOffset = -4; // initialize for all function
    asmFile << funcName << ":\n";
    asmFile << "\tPUSH EBP\n\tMOV EBP, ESP\n";
    SymbolInfo *symbol = new SymbolInfo(funcName, "ID", retType);
    SymbolInfo *found = symbolTable->lookUp(funcName);

    bool declared = false;
    if (found != NULL && found->getAuxInfo()->getArgCount() == -1)
    {
      // declared before, but not function
      string err = "Multiple declaration of " + funcName;
      logError(ctx, err);
    }
    else if (found != NULL)
    {
      // is declared beforehand
      declared = true;
      if (found->getAuxInfo()->getDataType() != stringToType(retType))
      {
        string err = "Return type mismatch with function declaration in function " + funcName;
        logError(ctx, err);
        // return nullptr;
      }
    }
    else
    {
      symbolTable->insert(symbol);
    }
    symbolTable->enterScope();
    vector<DataType> parameters;
    AuxInfo *funcInfo = symbol->getAuxInfo();
    funcInfo->setArgTypes(parameters);
    if (declared)
    {
      vector<DataType> declaredTypes = found->getAuxInfo()->getArgTypes();
      if (!declaredTypes.empty())
      {
        string err = "Previous declaration of " + funcName + " has parameters ";
        logError(ctx, err);
        // return nullptr;
      }
    }
    visit(ctx->compound_statement());
    // #
    asmFile << funcName << "_exit:\n";
    if(currentFuncName == "main"){
      asmFile << "\n\tMOV EAX, 1    ; syscall number: sys_exit";
      asmFile << "\n\tXOR EBX, EBX  ; exit code 0 (success)";
      asmFile << "\n\tINT 0x80\n\n";
    }
    else{
      asmFile << "\n\tADD ESP, " << ((-4) - nextLocalOffset);
      asmFile << "\n\tPOP EBP";
      asmFile << "\n\tRET\n\n";
    }
    
    symbolTable->exitScope();
    logRule(ctx, "func_definition : type_specifier ID LPAREN RPAREN compound_statement");
    return nullptr;
  }

  any visitStrayTokenParameterList(CSubsetParser::StrayTokenParameterListContext *ctx) override
  {
    visit(ctx->type_specifier());
    string type = ctx->type_specifier()->getText();
    vector<ParamInfo> types;
    types.push_back(ParamInfo(stringToType(type), false));
    logRule(ctx->type_specifier(), "parameter_list : type_specifier"); // sample output shows int only instead of int-, sending ctx->type_specifier(), now getText() will be called on that
    string err = "syntax error, unexpected token(s) '" + ctx->getStop()->getText() + "' before ')'";
    logError(ctx, err);
    return types;
    // parameter_list : type_specifier .
  }

  any visitSingleParameterWoId(CSubsetParser::SingleParameterWoIdContext *ctx) override
  {
    //for a function defintion, it must have id. otherwise an error will be produced.
    visit(ctx->type_specifier());
    string type = ctx->type_specifier()->getText();
    vector<ParamInfo> types;
    types.push_back(ParamInfo(stringToType(type), false));
    logRule(ctx, "parameter_list : type_specifier");
    return types;
  }

  any visitSingleParameterWId(CSubsetParser::SingleParameterWIdContext *ctx) override
  {
    visit(ctx->type_specifier());
    visit(ctx->ID());
    string type = ctx->type_specifier()->getText();
    string name = ctx->ID()->getText();
    SymbolInfo *symbol = new SymbolInfo(name, "ID", type);
    vector<ParamInfo> types;
    if (!symbolTable->insert(symbol))
    {
      string err = "Multiple declaration of " + name + " in parameter";
      logError(ctx, err);
      // return types;
    }
    //#
    symbol->getAuxInfo()->setOffset(nextParamOffset);
    nextParamOffset+=4;
    types.push_back(ParamInfo(stringToType(type), true));
    logRule(ctx, "parameter_list : type_specifier ID");
    return types;
  }

  any visitMultipleParametersWoId(CSubsetParser::MultipleParametersWoIdContext *ctx) override
  {
    vector<ParamInfo> types = any_cast<vector<ParamInfo>>(visit(ctx->parameter_list()));
    visit(ctx->type_specifier());
    string type = ctx->type_specifier()->getText();
    types.push_back(ParamInfo(stringToType(type), false));
    logRule(ctx, "parameter_list : parameter_list COMMA type_specifier");
    return types;
  }

  any visitMultipleParametersWId(CSubsetParser::MultipleParametersWIdContext *ctx) override
  {
    vector<ParamInfo> types = any_cast<vector<ParamInfo>>(visit(ctx->parameter_list()));
    visit(ctx->type_specifier());
    string type = ctx->type_specifier()->getText();
    types.push_back(ParamInfo(stringToType(type), true));

    string name = ctx->ID()->getText();
    SymbolInfo *symbol = new SymbolInfo(name, "ID", type);
    if (!symbolTable->insert(symbol))
    {
      string err = "Multiple declaration of " + name + " in parameter";
      logError(ctx, err);
    }
    //#
    symbol->getAuxInfo()->setOffset(nextParamOffset);
    nextParamOffset+=4;

    logRule(ctx, "parameter_list : parameter_list COMMA type_specifier ID");
    return types;
  }

  // whichever calls compound_statement must call enter scope and exit scope before and after.
  // it is not done inside compound_statement, since for functionDeclaration scope is entered at LPAREN before LCURL

  // # phase 1
  any visitCompoundStmtNonEmpty(CSubsetParser::CompoundStmtNonEmptyContext *ctx) override
  {
    visit(ctx->statements());
    logRule(ctx, "compound_statement : LCURL statements RCURL");
    return nullptr;
  }

  // # phase 1
  any visitCompoundStmtEmpty(CSubsetParser::CompoundStmtEmptyContext *ctx) override
  {
    logRule(ctx, "compound_statement : LCURL RCURL");
    return nullptr;
  }

  // # phase 1
  any visitVarDeclaration(CSubsetParser::VarDeclarationContext *ctx) override
  {
    visit(ctx->type_specifier());
    string type = ctx->type_specifier()->getText();
    vector<SymbolInfo *> symbols = any_cast<vector<SymbolInfo *>>(visit(ctx->declaration_list()));
    if (stringToType(type) == DataType::VOID)
    {
      logError(ctx, "Variable type cannot be void");
      // avoid subsequent errors
    }
    else
    {
      for (int i = 0; i < symbols.size(); i++)
      {
        SymbolInfo *symbolInfo = symbols[i];
        symbolInfo->getAuxInfo()->setDataType(type);
        if (!symbolTable->insert(symbolInfo))
        {
          string s = "Multiple declaration of " + symbolInfo->getName();
          logError(ctx, s);
        }
      }
    }
    logRule(ctx, "var_declaration : type_specifier declaration_list SEMICOLON");
    return nullptr;
  }

  // # phase 1
  any visitTypeSpecifierInt(CSubsetParser::TypeSpecifierIntContext *ctx) override
  {
    logRule(ctx, "type_specifier : INT");
    return DataType::INT;
  }

  any visitTypeSpecifierFloat(CSubsetParser::TypeSpecifierFloatContext *ctx) override
  {
    logRule(ctx, "type_specifier : FLOAT");
    return DataType::FLOAT;
  }

  // # phase 1
  any visitTypeSpecifierVoid(CSubsetParser::TypeSpecifierVoidContext *ctx) override
  {
    logRule(ctx, "type_specifier : VOID");
    return DataType::VOID;
  }

  any visitDeclarationListMultipleArr(CSubsetParser::DeclarationListMultipleArrContext *ctx) override
  {
    vector<SymbolInfo *> symbols = any_cast<vector<SymbolInfo *>>(visit(ctx->declaration_list()));
    string name = ctx->ID()->getText();
    int arraySize = stoi(ctx->CONST_INT()->getText());
    SymbolInfo *symbol = new SymbolInfo(name, "ID", arraySize);
    symbols.push_back(symbol);
    // #
    if (symbolTable->isRootScope())
    {
      asmFile << "\t" << name << " dd " << arraySize << " dup(0)\n";
      symbol->getAuxInfo()->setGlobal(true);
    }
    else
    {
      // local array
      int space = arraySize * 4;
      asmFile << "\tSUB ESP, " << space <<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
      symbol->getAuxInfo()->setOffset(nextLocalOffset);
      nextLocalOffset -= space;
    }
    logRule(ctx, "declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD");
    return symbols;
  }

  any visitDeclarationListSingleArr(CSubsetParser::DeclarationListSingleArrContext *ctx) override
  {
    vector<SymbolInfo *> symbols;
    string name = ctx->ID()->getText();
    int arraySize = stoi(ctx->CONST_INT()->getText());
    SymbolInfo *symbol = new SymbolInfo(name, "ID", arraySize);
    symbols.push_back(symbol);
    // #
    if (symbolTable->isRootScope())
    {
      asmFile << "\t" << name << " dd " << arraySize << " dup(0)\n";
      symbol->getAuxInfo()->setGlobal(true);
    }
    else
    {
      // local array
      int space = arraySize * 4;
      asmFile << "\tSUB ESP, " << space << "\n";
      symbol->getAuxInfo()->setOffset(nextLocalOffset);
      nextLocalOffset -= space;
    }
    logRule(ctx, "declaration_list : ID LTHIRD CONST_INT RTHIRD");
    return symbols;
  }

  any visitDeclarationListMultipleArrError(CSubsetParser::DeclarationListMultipleArrErrorContext *ctx) override
  {
    vector<SymbolInfo *> symbols = any_cast<vector<SymbolInfo *>>(visit(ctx->declaration_list()));
    // string name = ctx->ID()->getText();
    // names.push_back(name); //not inserting in symbol table
    logError(ctx, "Expression inside third brackets not an integer");
    // logRule(ctx, "declaration_list : declaration_list COMMA ID LTHIRD CONST_FLOAT RTHIRD");
    return symbols;
  }

  any visitDeclarationListSingleArrError(CSubsetParser::DeclarationListSingleArrErrorContext *ctx) override
  {
    vector<SymbolInfo *> symbols;
    // string name = ctx->ID()->getText();
    logError(ctx, "Expression inside third brackets not an integer");
    // logRule(ctx, "declaration_list: ID LTHIRD CONST_FLOAT RTHIRD");
    return symbols;
  }
  any visitStrayTokenDeclarationList(CSubsetParser::StrayTokenDeclarationListContext *ctx) override
  {
    vector<SymbolInfo *> symbols;
    SymbolInfo *symbol = new SymbolInfo(ctx->I1->getText(), "ID");
    symbols.push_back(symbol);
    string err = "syntax error, unexpected token(s) '" + ctx->children[1]->getText() + " " + ctx->I2->getText() + "' in declaration list"; // thanks to claude
    logRule(ctx, "declaration_list : ID", ctx->I1->getText());
    logError(ctx, err);
    // ID . ID
    return symbols;
  }

  // # phase 1
  any visitDeclarationListSingleId(CSubsetParser::DeclarationListSingleIdContext *ctx) override
  {
    vector<SymbolInfo *> symbols;
    string name = ctx->ID()->getText();
    SymbolInfo *symbol = new SymbolInfo(name, "ID");
    symbols.push_back(symbol);
    // #
    if (symbolTable->isRootScope())
    {
      asmFile << "\t" << name << " dd 1 dup(0)\n";
      symbol->getAuxInfo()->setGlobal(true);
    }
    else
    {
      // local
      asmFile << "\tSUB ESP, 4\n";
      symbol->getAuxInfo()->setOffset(nextLocalOffset);
      nextLocalOffset -= 4;
    }
    logRule(ctx, "declaration_list : ID");
    return symbols;
  }

  // # phase 1
  any visitDeclarationListMultipleVar(CSubsetParser::DeclarationListMultipleVarContext *ctx) override
  {
    vector<SymbolInfo *> symbols = any_cast<vector<SymbolInfo *>>(visit(ctx->declaration_list()));
    string name = ctx->ID()->getText();
    SymbolInfo *symbol = new SymbolInfo(name, "ID");
    symbols.push_back(symbol);

    if (symbolTable->isRootScope())
    {
      // # global
      asmFile << "\t" << name << " dd 1 dup(0)\n";
      symbol->getAuxInfo()->setGlobal(true);
    }
    else
    {
      // # local
      asmFile << "\tSUB ESP, 4"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
      symbol->getAuxInfo()->setOffset(nextLocalOffset);
      nextLocalOffset -= 4;
    }
    logRule(ctx, "declaration_list : declaration_list COMMA ID");
    return symbols;
  }

  // # phase 1
  any visitMultipleStatements(CSubsetParser::MultipleStatementsContext *ctx) override
  {
    visit(ctx->statements());
    visit(ctx->statement());
    logRule(ctx, "statements : statements statement");
    return nullptr;
  }

  // # phase 1
  any visitSingleStatement(CSubsetParser::SingleStatementContext *ctx) override
  {
    visit(ctx->statement());
    logRule(ctx, "statements : statement");
    return nullptr;
  }

  // # phase 1
  any visitStatementVarDeclaration(CSubsetParser::StatementVarDeclarationContext *ctx) override
  {
    visit(ctx->var_declaration());
    logRule(ctx, "statement : var_declaration");
    return nullptr;
  }

  // # phase 1
  any visitStatementExpressionStmt(CSubsetParser::StatementExpressionStmtContext *ctx) override
  {
    visit(ctx->expression_statement());
    logRule(ctx, "statement : expression_statement");
    return nullptr;
  }

  // # phase 1
  any visitStatementCompoundStmt(CSubsetParser::StatementCompoundStmtContext *ctx) override
  {
    symbolTable->enterScope();
    visit(ctx->compound_statement());
    symbolTable->exitScope();
    logRule(ctx, "statement : compound_statement");
    return nullptr;
  }

  any visitStatementFor(CSubsetParser::StatementForContext *ctx) override
  {

    // symbolTable->enterScope(); // allowing (int i = 0; ) // current grammar does not support variable declaration here
    visit(ctx->e1);
    int loop_start = labelCount++;
    asmFile << "L" << loop_start << ":\n";
    visit(ctx->e2);
    // EAX contains expr value
    //asmFile << "\tPOP EAX\n"; //expression statement already popped in EAX
    asmFile << "\tTEST EAX, EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    int loop_end = labelCount++;
    asmFile << "\tJE L" << loop_end << "\n";
    // loop body
    visit(ctx->statement());

    visit(ctx->expression());
    asmFile<<"\tPOP EAX\n"; //the value of i++ not needed, just pop to clean the stack
    asmFile << "\tJMP L" << loop_start << "\n";
    asmFile << "\tL" << loop_end << ":\n";
    // symbolTable->exitScope();
    logRule(ctx, "statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement");
    return nullptr;
  }

  any visitStatementIf(CSubsetParser::StatementIfContext *ctx) override
  {
    visit(ctx->expression());
    // have the value in EAX
    asmFile << "\tPOP EAX\n";
    asmFile << "\tTEST EAX, EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    int end_label = labelCount++;
    asmFile << "\tJE L" << end_label << "\n"; // JE actually checks ZF == 1
    visit(ctx->statement());
    asmFile << "L" << end_label << ":\n";
    logRule(ctx, "statement : IF LPAREN expression RPAREN statement");
    return nullptr;
  }

  any visitStatementIfElse(CSubsetParser::StatementIfElseContext *ctx) override
  {
    visit(ctx->expression());
    // have the value in EAX
    asmFile << "\tPOP EAX\n";
    asmFile << "\tTEST EAX, EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    int else_label = labelCount++;
    int end_label = labelCount++;
    asmFile << "\tJE L" << else_label << "\n"; // JE actually checks ZF == 1
    // if-body
    visit(ctx->s1);
    asmFile << "\tJMP L" << end_label << "\n";
    // else-body
    asmFile << "L" << else_label << ":\n";
    visit(ctx->s2);

    asmFile << "L" << end_label << ":\n";
    logRule(ctx, "statement : IF LPAREN expression RPAREN statement ELSE statement");
    return nullptr;
  }

  any visitStatementWhile(CSubsetParser::StatementWhileContext *ctx) override
  {
    int loop_start = labelCount++;
    asmFile << "L" << loop_start << ":\n";
    visit(ctx->expression());
    // value of expr in EAX
    asmFile << "\tPOP EAX\n";
    asmFile << "\tTest EAX, EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    int loop_end = labelCount++;
    asmFile << "\tJE L" << loop_end << "\n";
    // loop body
    visit(ctx->statement());
    asmFile << "\tJMP L" << loop_start << "\n";
    asmFile << "L" << loop_end << ":\n";
    logRule(ctx, "statement : WHILE LPAREN expression RPAREN statement");
    return nullptr;
  }

  // # phase 1
  any visitStatementPrintln(CSubsetParser::StatementPrintlnContext *ctx) override
  {
    // #
    string name = ctx->ID()->getText();

    addPrint = true;
    if (!symbolTable->lookUp(name))
    {
      logError(ctx, "Undeclared variable " + name);
    }
    else
    {
      SymbolInfo *found = symbolTable->lookUp(name);
      if (found->getAuxInfo()->getGlobal())
      {
        asmFile << "\tMOV EAX, [" << name << "]"<< "\t\t; print " << name <<"\n";
      }
      else
      {
        SymbolInfo *found = symbolTable->lookUp(name);
        int offset = found->getAuxInfo()->getOffset();
        asmFile << "\tMOV EAX, [EBP" << offset << "]\t\t; print " << name << "\n";
      }
      asmFile << "\tCALL OUTDEC\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    }
    logRule(ctx, "statement : PRINTLN LPAREN ID RPAREN SEMICOLON");
    return nullptr;
  }

  // # phase 1
  any visitStatementReturn(CSubsetParser::StatementReturnContext *ctx) override
  {
    visit(ctx->expression());
    // #
    asmFile << "\tPOP EAX\n"; //get the value pushed by expression
    //now the return value is in EAX
    asmFile << "\tJMP " << currentFuncName << "_exit"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    logRule(ctx, "statement : RETURN expression SEMICOLON");
    return nullptr;
  }

  // # phase 1
  any visitExpressionStmtEmpty(CSubsetParser::ExpressionStmtEmptyContext *ctx) override
  {
    logRule(ctx, "expression_statement : SEMICOLON");
    return nullptr;
  }

  // # phase 1
  any visitExpressionStmtExpression(CSubsetParser::ExpressionStmtExpressionContext *ctx) override
  {
    visit(ctx->expression());
    asmFile<<"\tPOP EAX\n"; //** */
    logRule(ctx, "expression_statement : expression SEMICOLON");
    return nullptr;
  }

  any visitExpressionMissingSemicolon(CSubsetParser::ExpressionMissingSemicolonContext *ctx) override
  {
    visit(ctx->expression());
    string err = "syntax error, missing ';' after expression '" + ctx->expression()->getText() + "'";
    logError(ctx, err);
    logRule(ctx, "expression_statement : expression (missing SEMICOLON)");
    return nullptr;
  }

  // # phase 1
  any visitVariableId(CSubsetParser::VariableIdContext *ctx) override
  {
    string varName = ctx->ID()->getText();
    SymbolInfo *found = symbolTable->lookUp(varName);
    AuxInfo *r;
    if (found == NULL)
    {
      string err = "Undeclared variable " + varName;
      logError(ctx, err);
      r = new AuxInfo();
    }
    else
    {
      r = found->getAuxInfo();
    }
    // # global
    if (r->getGlobal())
    {
      // asmFile << "[" << varName << "]";
      string var = "[" + varName + "]";
      r->setVariable(var);
    }
    else
    {
      // local
      // asmFile << "[EBP" << r->getOffset() << "]";
      string var;
      if(r->getOffset() < 0){
        var = "[EBP" + to_string(r->getOffset()) + "]";
      }
      else{
        var = "[EBP+" + to_string(r->getOffset()) + "]";
      }
      r->setVariable(var);
    }
    logRule(ctx, "variable : ID");
    return r;
  }

  any visitVariableArr(CSubsetParser::VariableArrContext *ctx) override
  {
    string varName = ctx->ID()->getText();
    SymbolInfo *found = symbolTable->lookUp(varName);
    AuxInfo *r;
    if (found == NULL)
    {
      string err = "Undeclared variable " + varName;
      logError(ctx, err);
      r = new AuxInfo();
    }
    else
    {
      AuxInfo *auxInfo = found->getAuxInfo();
      r = new AuxInfo(auxInfo->getDataType());
      if (!auxInfo->getIsArray())
      {
        string err = varName + " not an array";
        logError(ctx, err);
        // return auxInfo;
      }
      else
      {
        AuxInfo *auxInfo2 = any_cast<AuxInfo *>(visit(ctx->expression()));
        if (auxInfo2->getDataType() != DataType::INT)
        {
          logError(ctx, "Expression inside third brackets not an integer");
          // return auxInfo;
        }
      }
      asmFile << "\tPOP EAX\n"; // expression value in eax
      asmFile << "\tMOV EBX,4"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
      asmFile << "\tMUL EBX\n";
      // # global
      if (auxInfo->getGlobal())
      {

        asmFile << "\tMOV EBX, EAX\n";
        // asmFile<<"\t["<<varName<<"+ EBX]";
        string var = "[" + varName + "+EBX]";
        r->setVariable(var);
      }
      else
      {
        // local
        // add the base offset distance
        asmFile << "\tNEG EAX\n";
        asmFile << "\tADD EAX, " << auxInfo->getOffset() << "\n";
        asmFile << "\tMOV ESI, EAX\n";
        string var = "[EBP+ESI]";
        r->setVariable(var);
      }
    }

    logRule(ctx, "variable : ID LTHIRD expression RTHIRD");

    return r;
  }

  // # phase 1
  any visitExpressionLogicExpression(CSubsetParser::ExpressionLogicExpressionContext *ctx) override
  {
    AuxInfo *auxInfo = any_cast<AuxInfo *>(visit(ctx->logic_expression()));
    logRule(ctx, "expression : logic expression");
    return auxInfo;
  }

  // # phase 1
  any visitExpressionVarAssignLogic(CSubsetParser::ExpressionVarAssignLogicContext *ctx) override
  {
    // #
    AuxInfo *a2 = any_cast<AuxInfo *>(visit(ctx->logic_expression()));
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->variable()));
    asmFile << "\tPOP EAX\n";
    asmFile << "\tMOV " << a1->getVariable() << ", EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    asmFile << "\tPUSH EAX\n";
    // string name = ctx->variable()->getText();
    // string type = symbolTable->getDataType(name);

    // to avoid further checking
    if (a2->getDataType() == DataType::VOID)
    {
      logError(ctx, "Void function used in expression");
    }
    else if (a1->getDataType() == DataType::ERROR || a2->getDataType() == DataType::ERROR)
    {
      a1 = new AuxInfo(DataType::ERROR);
    }
    else
    {

      if (a1->getIsArray())
      {
        string err = "Type mismatch, " + ctx->variable()->getText() + " is an array";
        logError(ctx, err);
        // return a1;
      }
      else
      {
        DataType r = intFloatAssignCheck(a1->getDataType(), a2->getDataType());
        if (r == DataType::ERROR)
        { //?
          string err = "Type Mismatch";
          logError(ctx, err);
          // return a1;
        }
      }
    }
    logRule(ctx, "expression : variable ASSIGNOP logic_expression");
    return a1;
  }

  // # phase 1
  any visitLogicExprRelExpr(CSubsetParser::LogicExprRelExprContext *ctx) override
  {
    AuxInfo *auxInfo = any_cast<AuxInfo *>(visit(ctx->rel_expression()));
    logRule(ctx, "logic_expression : rel_expression");
    return auxInfo;
  }

  // # phase 1
  any visitLogicExprWLogicOp(CSubsetParser::LogicExprWLogicOpContext *ctx) override
  {
    // Evaluate left operand
    AuxInfo *t1 = any_cast<AuxInfo *>(visit(ctx->r1));
    asmFile << "\tPOP EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    asmFile << "\tTEST EAX, EAX\n";
    string logicop = ctx->LOGICOP()->getText();
    int skip_label = labelCount++;
    if (logicop == "&&")
    {
      asmFile << "\tJE L" << skip_label << "\n";
    }
    else if (logicop == "||")
    {
      asmFile << "\tJNE L" << skip_label << "\n";
    }
    // evaluate right operand
    AuxInfo *t2 = any_cast<AuxInfo *>(visit(ctx->r2));
    asmFile << "\tPOP EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    asmFile << "\tTEST EAX, EAX \t\t\t; line "<<ctx->getStart()->getLine() << "\n";
    if (logicop == "&&")
    {
      asmFile << "\tJE L" << skip_label << "\n";
    }
    else if (logicop == "||")
    {
      asmFile << "\tJNE L" << skip_label << "\n";
    }

    int next_label = labelCount++;

    if (logicop == "&&")
    {
      asmFile << "\tMOV EAX, 1\n";
      // asmFile<<"L"<<next_label<<":\n";
      // asmFile << "\tTEST EAX, EAX\n";
      // int end_label = labelCount++;
      // asmFile << "\tJE L"<<end_label<<"\n";
      // asmFile<<"L"<<end_label<<":\n";
    }
    else if (logicop == "||")
    {
      asmFile << "\tMOV EAX, 0\n";
      // asmFile<<"L"<<next_label<<":\n";
    }
    asmFile << "\tJMP L" << next_label << "\n";
    asmFile << "L" << skip_label << ":\n";
    if (logicop == "&&")
    {
      asmFile << "\tMOV EAX, 0\n";
      // asmFile<<"L"<<next_label<<":\n";
      // asmFile << "\tTEST EAX, EAX\n";
      // int end_label = labelCount++;
      // asmFile << "\tJE L"<<end_label<<"\n";
      // asmFile<<"L"<<end_label<<":\n";
    }
    else if (logicop == "||")
    {
      asmFile << "\tMOV EAX, 1\n";
      // asmFile<<"L"<<next_label<<":\n";
    }
    asmFile << "L" << next_label << ":\n";

    asmFile << "\tPUSH EAX\n";
    AuxInfo *r = new AuxInfo(DataType::INT);
    if (t1->getDataType() != DataType::INT || t2->getDataType() != DataType::INT)
    {
      string err = ctx->LOGICOP()->getText() + " is not defined for these operands ";
      logError(ctx, err);
    }
    logRule(ctx, "logic_expression : rel_expression LOGICOP rel_expression");

    return r; // logicop always int
  }

  // # phase 1
  any visitRelExprSimpleExpr(CSubsetParser::RelExprSimpleExprContext *ctx) override
  {
    AuxInfo *auxInfo = any_cast<AuxInfo *>(visit(ctx->simple_expression()));
    logRule(ctx, "rel_expression : simple_expression");
    return auxInfo;
  }

  // # phase 1
  any visitRelExprWRelOp(CSubsetParser::RelExprWRelOpContext *ctx) override
  {
    AuxInfo *a2 = any_cast<AuxInfo *>(visit(ctx->s2));
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->s1));

    AuxInfo *r = new AuxInfo(DataType::INT);

    // #
    asmFile << "\tPOP EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    asmFile << "\tPOP EBX\n";

    asmFile << "\tCMP EAX, EBX\n";
    string relop = ctx->RELOP()->getText();
    string jmpInstr;
    if (relop == "==")
    {
      jmpInstr = "JE";
    }
    else if (relop == "!=")
    {
      jmpInstr = "JNE";
    }
    else if (relop == "<")
    {
      jmpInstr = "JL";
    }
    else if (relop == "<=")
    {
      jmpInstr = "JLE";
    }
    else if (relop == ">")
    {
      jmpInstr = "JG";
    }
    else if (relop == ">=")
    {
      jmpInstr = "JGE";
    }
    int true_label = labelCount++;
    asmFile << "\t" << jmpInstr << " L" << true_label << "\n";
    asmFile << "\tMOV EAX, 0\n";
    int end_label = labelCount++;
    asmFile << "\tJMP L" << end_label << "\n";
    asmFile << "L" << true_label << ":\n";
    asmFile << "\tMOV EAX, 1\n";
    asmFile << "L" << end_label << ":\n";

    asmFile << "\tPUSH EAX\n";
    // to avoid further checking
    if (a1->getDataType() == DataType::ERROR || a2->getDataType() == DataType::ERROR)
    {
      r = new AuxInfo(DataType::ERROR);
    }
    else
    {
      DataType t = intFloatCheck(a1->getDataType(), a2->getDataType());
      if (t == DataType::ERROR)
      {
        logError(ctx, "type mismatch");
        // r = new AuxInfo(DataType::ERROR);
      }
    }
    logRule(ctx, "rel_expression : simple_expression RELOP simple_expression");
    return r; // result always int ?? if mismatch?
  }

  any visitStraySimpleExpr(CSubsetParser::StraySimpleExprContext *ctx) override
  {
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->term()));
    logRule(ctx, "simple_expression : term"); // term ADDOP stray=(ASSIGNOP|RELOP|MULOP|LOGICOP) #straySimpleExpr
    string err = "syntax error, invalid operand '" + ctx->stray->getText() + "' after '+'";
    logError(ctx->term(), err);
    return a1;
  }
  // # phase 1
  any visitSimpleExprTerm(CSubsetParser::SimpleExprTermContext *ctx) override
  {
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->term()));
    logRule(ctx, "simple_expression : term");
    return a1;
  }

  // # phase 1
  any visitSimpleExprAdd(CSubsetParser::SimpleExprAddContext *ctx) override
  {
    AuxInfo *a2 = any_cast<AuxInfo *>(visit(ctx->term()));
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->simple_expression()));
    AuxInfo *r;
    // #
    asmFile << "\tPOP EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    asmFile << "\tPOP EBX\n";
    if (ctx->ADDOP()->getText() == "+")
    {
      asmFile << "\tADD EAX, EBX\n";
    }
    else
    {
      asmFile << "\tSUB EAX, EBX\n";
    }

    asmFile << "\tPUSH EAX\n";

    if (a1->getDataType() == DataType::ERROR || a2->getDataType() == DataType::ERROR)
    {
      r = new AuxInfo(DataType::ERROR);
    }
    else
    {
      DataType t = intFloatCheck(a1->getDataType(), a2->getDataType());
      r = new AuxInfo(t);
      if (t == DataType::ERROR)
      {
        logError(ctx, "type mismatch");
      }
    }
    logRule(ctx, "simple_expression : simple_expression ADDOP term");
    return r;
  }

  // # phase 1
  any visitTermUnaryExpr(CSubsetParser::TermUnaryExprContext *ctx) override
  {
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->unary_expression()));
    logRule(ctx, "term : unary_expression");
    return a1;
  }

  // # phase 1
  any visitTermMul(CSubsetParser::TermMulContext *ctx) override
  {
    // #
    AuxInfo *a2 = any_cast<AuxInfo *>(visit(ctx->unary_expression()));
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->term()));
    asmFile << "\tPOP EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    asmFile << "\tPOP EBX\n";
    if (ctx->MULOP()->getText() == "*")
    {
      asmFile << "\tMUL EBX\n";
    }
    else
    {
      //%
      asmFile << "\tXOR EDX, EDX\n";
      asmFile << "\tDIV EBX\n";
      asmFile << "\tMOV EAX, EDX\n";
    }
    asmFile << "\tPUSH EAX\n";
    AuxInfo *r = new AuxInfo(DataType::ERROR);
    if ((a1->getDataType() == DataType::VOID) || (a2->getDataType() == DataType::VOID))
    {
      logError(ctx, "Void function used in expression");
    }
    else if (ctx->MULOP()->getText() == "%" && (a1->getDataType() != DataType::INT || a2->getDataType() != DataType::INT))
    {
      logError(ctx, "Non-Integer operand on modulus operator");
    }
    else if (ctx->MULOP()->getText() == "%" && (ctx->unary_expression()->getText() == "0"))
    {
      logError(ctx, "Modulus by Zero");
    }
    else if (a1->getDataType() == DataType::ERROR || a2->getDataType() == DataType::ERROR)
    {
      r = new AuxInfo(DataType::ERROR);
    }
    else
    {
      DataType t = intFloatCheck(a1->getDataType(), a2->getDataType());
      r = new AuxInfo(t);
      if (t == DataType::ERROR)
      {
        logError(ctx, "type mismatch");
      }
    }
    logRule(ctx, "term : term MULOP unary_expression");
    return r;
  }

  // # phase 1
  any visitUnaryExprAdd(CSubsetParser::UnaryExprAddContext *ctx) override
  {
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->unary_expression()));
    // #
    asmFile << "\tPOP EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    if (ctx->ADDOP()->getText() == "-")
    {
      asmFile << "\tNEG EAX\n";
    }
    asmFile << "\tPUSH EAX\n";
    if (a1->getDataType() == DataType::VOID)
    {
      logError(ctx, "Void function used in expression");
      a1 = new AuxInfo(DataType::ERROR);
    }
    else if (a1->getDataType() != DataType::INT && a1->getDataType() != DataType::FLOAT)
    {
      logError(ctx, "invalid operand for unary operation");
    }
    logRule(ctx, "unary_expression : ADDOP unary_expression");
    return a1;
  }

  // # phase 1
  any visitUnaryExprNot(CSubsetParser::UnaryExprNotContext *ctx) override
  {
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->unary_expression()));
    asmFile << "\tPOP EAX"<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    asmFile << "\tTEST EAX, EAX\n";
    int label_not_true = labelCount++;
    asmFile << "\tJNE L" << label_not_true << "\n";
    asmFile << "\tMOV EAX, 1\n";
    int label_not_end = labelCount++;
    asmFile << "\tJMP L" << label_not_end << "\n";
    asmFile << "L" << label_not_true << ":\n";
    asmFile << "\t MOV EAX, 0\n";
    asmFile << "L" << label_not_end << ":\n";

    asmFile << "\tPUSH EAX\n";
    // asmFile << "\tNOT EAX\n";
    // asmFile << "\tPUSH EAX\n";

    AuxInfo *r;
    if (a1->getDataType() == DataType::VOID)
    {
      logError(ctx, "Void function used in expression");
      r = new AuxInfo(DataType::ERROR);
    }
    else if (a1->getDataType() != DataType::INT && a1->getDataType() != DataType::FLOAT)
    {
      logError(ctx, "invalid operand for unary operation");
      // r = a1; ??
    }
    logRule(ctx, "unary_expression : NOT unary expression");
    r = new AuxInfo(DataType::INT);
    return r; // boolean like always int
  }

  // # phase 1
  any visitUnaryExprFactor(CSubsetParser::UnaryExprFactorContext *ctx) override
  {
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->factor()));
    asmFile << "\tPUSH EAX\n";
    logRule(ctx, "unary_expression : factor");
    return a1;
  }

  // # phase 1
  any visitFactorVar(CSubsetParser::FactorVarContext *ctx) override
  {
    // #
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->variable()));
    asmFile << "\tMOV EAX," << a1->getVariable() <<"\t\t\t; line "<<ctx->getStart()->getLine()<< "\n";
    logRule(ctx, "factor : variable");
    return a1;
  }

  any visitFactorArgList(CSubsetParser::FactorArgListContext *ctx) override
  {
    string funcName = ctx->ID()->getText();
    SymbolInfo *found = symbolTable->lookUp(funcName);
    if (found == NULL)
    {
      string err = "Undeclared function " + funcName;
      logError(ctx, err);
      AuxInfo *r = new AuxInfo();
      return r;
    }
    AuxInfo *a1 = found->getAuxInfo();
    // if (a1->getDataType() == DataType::VOID)
    // {
    //   logError(ctx, "Void function used in expression");
    //   return new AuxInfo();
    // }
    // vector<AuxInfo*> args = any_cast<vector<AuxInfo*>>(visit(ctx->argument_list()));
    vector<AuxInfo *> args = any_cast<vector<AuxInfo *>>(visit(ctx->argument_list()));
    vector<DataType> original = a1->getArgTypes();
    //#
    asmFile<<"\tCALL "<<funcName<<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n"; 
    //EAX has return value
    if (args.size() != original.size())
    {
      string err = "Total number of arguments mismatch in function " + funcName;
      logError(ctx, err);
    }
    else
    {
      string err = string("");
      for (int i = 0; i < original.size(); i++)
      {
        // if (args[i]->getIsArray() == true)
        // {
        //   string err = "Type mismatch is an array";
        //   logError(ctx, err);
        // }
        // else
        // {
        if (args[i]->getDataType() != DataType::ERROR && original[i] != args[i]->getDataType())
        {
          err += to_string(i + 1);
          err += "th argument mismatch in function ";
          err += funcName;
          logError(ctx, err);
          break;
        }
        //}
      }
    }
    logRule(ctx, "factor : ID LPAREN argument_list RPAREN");
    return a1;
  }

  // # phase 1
  any visitFactorExpr(CSubsetParser::FactorExprContext *ctx) override
  {

    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->expression()));
    asmFile << "\tPOP EAX\n";
    logRule(ctx, "factor : LPAREN expression RPAREN");
    return a1;
  }

  // # phase 1
  any visitFactorConstInt(CSubsetParser::FactorConstIntContext *ctx) override
  {
    logRule(ctx, "factor : CONST_INT");
    AuxInfo *r = new AuxInfo(DataType::INT);
    // #
    asmFile << "\tMOV EAX, ";
    asmFile << ctx->CONST_INT()->getText();
    asmFile << "\n";
    return r;
  }

  // # phase 1
  any visitFactorConstFloat(CSubsetParser::FactorConstFloatContext *ctx) override
  {
    logRule(ctx, "factor : CONST_FLOAT");
    AuxInfo *r = new AuxInfo(DataType::FLOAT);
    // #

    asmFile << "\tMOV EAX, ";
    asmFile << ctx->CONST_FLOAT()->getText();
    asmFile << "\n";

    return r;
  }

  // # phase 1
  any visitFactorIncOp(CSubsetParser::FactorIncOpContext *ctx) override
  {
    // asmFile << "\tMOV EAX, ";
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->variable()));
    string address = a1->getVariable();
    asmFile << "\tMOV EAX, " << address <<"\t\t\t; line "<<ctx->getStart()->getLine()<< "\n";
    // #
    asmFile << "\n\tPUSH EAX\n\tINC EAX\n";
    // SymbolInfo *found = symbolTable->lookUp(ctx->variable()->getText());
    // if (found->getAuxInfo()->getOffset() != 0)
    // {
    //   asmFile << "\tMOV [EBP" << a1->getOffset() << "], EAX\n";
    // }
    // else
    // {
    //   asmFile << "\tMOV [" << ctx->variable()->getText() << "], EAX\n";
    // }
    asmFile << "\tMOV " << address << ", EAX\n";
    asmFile << "\tPOP EAX\n";
    if (a1->getDataType() != DataType::INT && a1->getDataType() != DataType::FLOAT)
    {
      logError(ctx, "invalid arg to incop");
      return a1;
    }
    logRule(ctx, "factor : variable INCOP");
    return a1;
  }

  // # phase 1
  any visitFactorDecOp(CSubsetParser::FactorDecOpContext *ctx) override
  {
    // asmFile << "\tMOV EAX, ";
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->variable()));
    string address = a1->getVariable();
    asmFile << "\tMOV EAX, " << address <<"\t\t\t; line "<<ctx->getStart()->getLine()<<"\n";
    // #
    asmFile << "\n\tPUSH EAX\n\tDEC EAX\n";
    // SymbolInfo *found = symbolTable->lookUp(ctx->variable()->getText());
    // if (found->getAuxInfo()->getOffset() != 0)
    // {
    //   asmFile << "\tMOV [EBP" << a1->getOffset() << "], EAX\n";
    // }
    // else
    // {
    //   asmFile << "\tMOV [" << ctx->variable()->getText() << "], EAX\n";
    // }
    asmFile << "\tMOV " << address << ", EAX\n";
    asmFile << "\tPOP EAX\n";
    if (a1->getDataType() != DataType::INT && a1->getDataType() != DataType::FLOAT)
    {
      logError(ctx, "invalid arg to decop");
      return a1;
    }
    logRule(ctx, "factor : variable DECOP");
    return a1;
  }

  any visitArgumentListMultipleArgs(CSubsetParser::ArgumentListMultipleArgsContext *ctx) override
  {
    vector<AuxInfo *> types = any_cast<vector<AuxInfo *>>(visit(ctx->arguments()));
    logRule(ctx, "argument_list : arguments");
    return types;
  }

  any visitArgumentListNoArgs(CSubsetParser::ArgumentListNoArgsContext *ctx) override
  {
    vector<AuxInfo *> types;
    logRule(ctx, "argument_list : ");
    return types;
  }

  any visitArgumentsLogicExpr(CSubsetParser::ArgumentsLogicExprContext *ctx) override
  {
    vector<AuxInfo *> args;
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->logic_expression()));

    if (a1->getIsArray() == true)
    {
      string err = "Type mismatch, " + ctx->logic_expression()->getText() + " is an array";
      a1 = new AuxInfo(DataType::ERROR);
      logError(ctx, err);
    }
    args.push_back(a1);
    logRule(ctx, "arguments : logic_expression");
    return args;
  }

  any visitArgumentsCommaLogicExpr(CSubsetParser::ArgumentsCommaLogicExprContext *ctx) override
  {
    //# right to left push needed , visit logic_expression first
    AuxInfo *a1 = any_cast<AuxInfo *>(visit(ctx->logic_expression()));
    vector<AuxInfo *> args = any_cast<vector<AuxInfo *>>(visit(ctx->arguments()));
    if (a1->getIsArray() == true)
    {
      string err = "Type mismatch, " + ctx->logic_expression()->getText() + " is an array";
      a1 = new AuxInfo(DataType::ERROR);
      logError(ctx, err);
    }
    args.push_back(a1);
    logRule(ctx, "arguments : arguments COMMA logic_expression");
    return args;
  }
};
