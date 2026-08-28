grammar CSubset;
import Lexer;

start : program ;       

program
    : program unit      #programAgain
    | unit              #programUnit
    ;

unit
    : var_declaration   #unitVarDeclaration
    | func_declaration  #unitFuncDeclaration
    | func_definition   #unitFuncDefinition
    ;

func_declaration
    : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON  #funcDeclarationWParameters
    | type_specifier ID LPAREN RPAREN SEMICOLON    #funcDeclarationWoParameters
    ;

func_definition
    : type_specifier ID LPAREN parameter_list RPAREN compound_statement #funcDefWParameters
    | type_specifier ID LPAREN RPAREN compound_statement    #funcDefWoParameters
    ;

parameter_list
    : parameter_list COMMA type_specifier ID    #multipleParametersWId
    | parameter_list COMMA type_specifier   #multipleParametersWoId
    | type_specifier ID     #singleParameterWId
    | type_specifier        #singleParameterWoId
    | type_specifier .      #strayTokenParameterList
    ;

compound_statement
    : LCURL statements RCURL  #compoundStmtNonEmpty
    | LCURL RCURL             #compoundStmtEmpty
    ;

var_declaration
    : type_specifier declaration_list SEMICOLON  #varDeclaration
    ;
type_specifier
    : INT       #typeSpecifierInt
    | FLOAT     #typeSpecifierFloat
    | VOID      #typeSpecifierVoid
    ;

declaration_list
    : declaration_list COMMA ID         #declarationListMultipleVar
    | declaration_list COMMA ID LTHIRD CONST_INT RTHIRD    #declarationListMultipleArr
    | ID                                #declarationListSingleId
    | ID LTHIRD CONST_INT RTHIRD        #declarationListSingleArr
    | declaration_list COMMA ID LTHIRD CONST_FLOAT RTHIRD    #declarationListMultipleArrError
    | ID LTHIRD CONST_FLOAT RTHIRD        #declarationListSingleArrError
    | I1=ID . I2=ID                            #strayTokenDeclarationList
    ;

statements
    : statement                         #singleStatement
    | statements statement              #multipleStatements
    ;

statement
    : var_declaration                   #statementVarDeclaration
    | expression_statement              #statementExpressionStmt
    | compound_statement                #statementCompoundStmt
    | FOR LPAREN e1=expression_statement e2=expression_statement expression RPAREN statement  #statementFor
    | IF LPAREN expression RPAREN statement     #statementIf
    | IF LPAREN expression RPAREN s1=statement ELSE s2=statement      #statementIfElse
    | WHILE LPAREN expression RPAREN statement      #statementWhile
    | PRINTLN LPAREN ID RPAREN SEMICOLON            #statementPrintln
    | RETURN expression SEMICOLON                   #statementReturn
    ;

expression_statement
    : SEMICOLON                             #expressionStmtEmpty
    | expression SEMICOLON                  #expressionStmtExpression
    | expression                            #expressionMissingSemicolon
    ;

variable
    : ID                                   #variableId
    | ID LTHIRD expression RTHIRD   #variableArr
    ;

expression
    : logic_expression                      #expressionLogicExpression
    | variable ASSIGNOP logic_expression    #expressionVarAssignLogic
    ;

logic_expression
    : rel_expression                        #logicExprRelExpr
    | r1=rel_expression LOGICOP r2=rel_expression    #logicExprWLogicOp
    ;

rel_expression
    : simple_expression     #relExprSimpleExpr
    | s1=simple_expression RELOP s2=simple_expression #relExprWRelOp
    ;

simple_expression
    : term              #simpleExprTerm
    | simple_expression ADDOP term  #simpleExprAdd
    | term ADDOP stray=(ASSIGNOP|RELOP|MULOP|LOGICOP) #straySimpleExpr
    ;

term
    : unary_expression      #termUnaryExpr
    | term MULOP unary_expression    #termMul
    ;

unary_expression
    : ADDOP unary_expression    #unaryExprAdd
    | NOT unary_expression      #unaryExprNot
    | factor                    #unaryExprFactor
    ;

factor
    : variable                          #factorVar
    | ID LPAREN argument_list RPAREN    #factorArgList
    | LPAREN expression RPAREN          #factorExpr
    | CONST_INT                         #factorConstInt
    | CONST_FLOAT                       #factorConstFloat
    | variable INCOP                    #factorIncOp
    | variable DECOP                    #factorDecOp
    ;

argument_list
    : arguments                     #argumentListMultipleArgs
    |                               #argumentListNoArgs
    ;

arguments
    : arguments COMMA logic_expression  #argumentsCommaLogicExpr
    | logic_expression                  #argumentsLogicExpr
    ;
