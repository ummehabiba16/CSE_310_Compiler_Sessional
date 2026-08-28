
// Generated from CSubset.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CSubsetParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CSubsetParser.
 */
class  CSubsetVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CSubsetParser.
   */
    virtual std::any visitStart(CSubsetParser::StartContext *context) = 0;

    virtual std::any visitProgramUnit(CSubsetParser::ProgramUnitContext *context) = 0;

    virtual std::any visitProgramAgain(CSubsetParser::ProgramAgainContext *context) = 0;

    virtual std::any visitUnitVarDeclaration(CSubsetParser::UnitVarDeclarationContext *context) = 0;

    virtual std::any visitUnitFuncDeclaration(CSubsetParser::UnitFuncDeclarationContext *context) = 0;

    virtual std::any visitUnitFuncDefinition(CSubsetParser::UnitFuncDefinitionContext *context) = 0;

    virtual std::any visitFuncDeclarationWParameters(CSubsetParser::FuncDeclarationWParametersContext *context) = 0;

    virtual std::any visitFuncDeclarationWoParameters(CSubsetParser::FuncDeclarationWoParametersContext *context) = 0;

    virtual std::any visitFuncDefWParameters(CSubsetParser::FuncDefWParametersContext *context) = 0;

    virtual std::any visitFuncDefWoParameters(CSubsetParser::FuncDefWoParametersContext *context) = 0;

    virtual std::any visitSingleParameterWoId(CSubsetParser::SingleParameterWoIdContext *context) = 0;

    virtual std::any visitSingleParameterWId(CSubsetParser::SingleParameterWIdContext *context) = 0;

    virtual std::any visitStrayTokenParameterList(CSubsetParser::StrayTokenParameterListContext *context) = 0;

    virtual std::any visitMultipleParametersWoId(CSubsetParser::MultipleParametersWoIdContext *context) = 0;

    virtual std::any visitMultipleParametersWId(CSubsetParser::MultipleParametersWIdContext *context) = 0;

    virtual std::any visitCompoundStmtNonEmpty(CSubsetParser::CompoundStmtNonEmptyContext *context) = 0;

    virtual std::any visitCompoundStmtEmpty(CSubsetParser::CompoundStmtEmptyContext *context) = 0;

    virtual std::any visitVarDeclaration(CSubsetParser::VarDeclarationContext *context) = 0;

    virtual std::any visitTypeSpecifierInt(CSubsetParser::TypeSpecifierIntContext *context) = 0;

    virtual std::any visitTypeSpecifierFloat(CSubsetParser::TypeSpecifierFloatContext *context) = 0;

    virtual std::any visitTypeSpecifierVoid(CSubsetParser::TypeSpecifierVoidContext *context) = 0;

    virtual std::any visitDeclarationListMultipleArr(CSubsetParser::DeclarationListMultipleArrContext *context) = 0;

    virtual std::any visitDeclarationListSingleArr(CSubsetParser::DeclarationListSingleArrContext *context) = 0;

    virtual std::any visitDeclarationListSingleId(CSubsetParser::DeclarationListSingleIdContext *context) = 0;

    virtual std::any visitStrayTokenDeclarationList(CSubsetParser::StrayTokenDeclarationListContext *context) = 0;

    virtual std::any visitDeclarationListMultipleVar(CSubsetParser::DeclarationListMultipleVarContext *context) = 0;

    virtual std::any visitDeclarationListMultipleArrError(CSubsetParser::DeclarationListMultipleArrErrorContext *context) = 0;

    virtual std::any visitDeclarationListSingleArrError(CSubsetParser::DeclarationListSingleArrErrorContext *context) = 0;

    virtual std::any visitMultipleStatements(CSubsetParser::MultipleStatementsContext *context) = 0;

    virtual std::any visitSingleStatement(CSubsetParser::SingleStatementContext *context) = 0;

    virtual std::any visitStatementVarDeclaration(CSubsetParser::StatementVarDeclarationContext *context) = 0;

    virtual std::any visitStatementExpressionStmt(CSubsetParser::StatementExpressionStmtContext *context) = 0;

    virtual std::any visitStatementCompoundStmt(CSubsetParser::StatementCompoundStmtContext *context) = 0;

    virtual std::any visitStatementFor(CSubsetParser::StatementForContext *context) = 0;

    virtual std::any visitStatementIf(CSubsetParser::StatementIfContext *context) = 0;

    virtual std::any visitStatementIfElse(CSubsetParser::StatementIfElseContext *context) = 0;

    virtual std::any visitStatementWhile(CSubsetParser::StatementWhileContext *context) = 0;

    virtual std::any visitStatementPrintln(CSubsetParser::StatementPrintlnContext *context) = 0;

    virtual std::any visitStatementReturn(CSubsetParser::StatementReturnContext *context) = 0;

    virtual std::any visitExpressionStmtEmpty(CSubsetParser::ExpressionStmtEmptyContext *context) = 0;

    virtual std::any visitExpressionStmtExpression(CSubsetParser::ExpressionStmtExpressionContext *context) = 0;

    virtual std::any visitExpressionMissingSemicolon(CSubsetParser::ExpressionMissingSemicolonContext *context) = 0;

    virtual std::any visitVariableId(CSubsetParser::VariableIdContext *context) = 0;

    virtual std::any visitVariableArr(CSubsetParser::VariableArrContext *context) = 0;

    virtual std::any visitExpressionLogicExpression(CSubsetParser::ExpressionLogicExpressionContext *context) = 0;

    virtual std::any visitExpressionVarAssignLogic(CSubsetParser::ExpressionVarAssignLogicContext *context) = 0;

    virtual std::any visitLogicExprRelExpr(CSubsetParser::LogicExprRelExprContext *context) = 0;

    virtual std::any visitLogicExprWLogicOp(CSubsetParser::LogicExprWLogicOpContext *context) = 0;

    virtual std::any visitRelExprSimpleExpr(CSubsetParser::RelExprSimpleExprContext *context) = 0;

    virtual std::any visitRelExprWRelOp(CSubsetParser::RelExprWRelOpContext *context) = 0;

    virtual std::any visitSimpleExprTerm(CSubsetParser::SimpleExprTermContext *context) = 0;

    virtual std::any visitStraySimpleExpr(CSubsetParser::StraySimpleExprContext *context) = 0;

    virtual std::any visitSimpleExprAdd(CSubsetParser::SimpleExprAddContext *context) = 0;

    virtual std::any visitTermUnaryExpr(CSubsetParser::TermUnaryExprContext *context) = 0;

    virtual std::any visitTermMul(CSubsetParser::TermMulContext *context) = 0;

    virtual std::any visitUnaryExprAdd(CSubsetParser::UnaryExprAddContext *context) = 0;

    virtual std::any visitUnaryExprNot(CSubsetParser::UnaryExprNotContext *context) = 0;

    virtual std::any visitUnaryExprFactor(CSubsetParser::UnaryExprFactorContext *context) = 0;

    virtual std::any visitFactorVar(CSubsetParser::FactorVarContext *context) = 0;

    virtual std::any visitFactorArgList(CSubsetParser::FactorArgListContext *context) = 0;

    virtual std::any visitFactorExpr(CSubsetParser::FactorExprContext *context) = 0;

    virtual std::any visitFactorConstInt(CSubsetParser::FactorConstIntContext *context) = 0;

    virtual std::any visitFactorConstFloat(CSubsetParser::FactorConstFloatContext *context) = 0;

    virtual std::any visitFactorIncOp(CSubsetParser::FactorIncOpContext *context) = 0;

    virtual std::any visitFactorDecOp(CSubsetParser::FactorDecOpContext *context) = 0;

    virtual std::any visitArgumentListMultipleArgs(CSubsetParser::ArgumentListMultipleArgsContext *context) = 0;

    virtual std::any visitArgumentListNoArgs(CSubsetParser::ArgumentListNoArgsContext *context) = 0;

    virtual std::any visitArgumentsLogicExpr(CSubsetParser::ArgumentsLogicExprContext *context) = 0;

    virtual std::any visitArgumentsCommaLogicExpr(CSubsetParser::ArgumentsCommaLogicExprContext *context) = 0;


};

