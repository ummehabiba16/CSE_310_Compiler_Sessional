
// Generated from CSubset.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CSubsetVisitor.h"


/**
 * This class provides an empty implementation of CSubsetVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CSubsetBaseVisitor : public CSubsetVisitor {
public:

  virtual std::any visitStart(CSubsetParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgramUnit(CSubsetParser::ProgramUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgramAgain(CSubsetParser::ProgramAgainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitVarDeclaration(CSubsetParser::UnitVarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitFuncDeclaration(CSubsetParser::UnitFuncDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitFuncDefinition(CSubsetParser::UnitFuncDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDeclarationWParameters(CSubsetParser::FuncDeclarationWParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDeclarationWoParameters(CSubsetParser::FuncDeclarationWoParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDefWParameters(CSubsetParser::FuncDefWParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDefWoParameters(CSubsetParser::FuncDefWoParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleParameterWoId(CSubsetParser::SingleParameterWoIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleParameterWId(CSubsetParser::SingleParameterWIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStrayTokenParameterList(CSubsetParser::StrayTokenParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultipleParametersWoId(CSubsetParser::MultipleParametersWoIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultipleParametersWId(CSubsetParser::MultipleParametersWIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStmtNonEmpty(CSubsetParser::CompoundStmtNonEmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStmtEmpty(CSubsetParser::CompoundStmtEmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclaration(CSubsetParser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifierInt(CSubsetParser::TypeSpecifierIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifierFloat(CSubsetParser::TypeSpecifierFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifierVoid(CSubsetParser::TypeSpecifierVoidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationListMultipleArr(CSubsetParser::DeclarationListMultipleArrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationListSingleArr(CSubsetParser::DeclarationListSingleArrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationListSingleId(CSubsetParser::DeclarationListSingleIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStrayTokenDeclarationList(CSubsetParser::StrayTokenDeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationListMultipleVar(CSubsetParser::DeclarationListMultipleVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationListMultipleArrError(CSubsetParser::DeclarationListMultipleArrErrorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationListSingleArrError(CSubsetParser::DeclarationListSingleArrErrorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultipleStatements(CSubsetParser::MultipleStatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleStatement(CSubsetParser::SingleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementVarDeclaration(CSubsetParser::StatementVarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementExpressionStmt(CSubsetParser::StatementExpressionStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementCompoundStmt(CSubsetParser::StatementCompoundStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementFor(CSubsetParser::StatementForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementIf(CSubsetParser::StatementIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementIfElse(CSubsetParser::StatementIfElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementWhile(CSubsetParser::StatementWhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementPrintln(CSubsetParser::StatementPrintlnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementReturn(CSubsetParser::StatementReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStmtEmpty(CSubsetParser::ExpressionStmtEmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStmtExpression(CSubsetParser::ExpressionStmtExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionMissingSemicolon(CSubsetParser::ExpressionMissingSemicolonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableId(CSubsetParser::VariableIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableArr(CSubsetParser::VariableArrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionLogicExpression(CSubsetParser::ExpressionLogicExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionVarAssignLogic(CSubsetParser::ExpressionVarAssignLogicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicExprRelExpr(CSubsetParser::LogicExprRelExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicExprWLogicOp(CSubsetParser::LogicExprWLogicOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelExprSimpleExpr(CSubsetParser::RelExprSimpleExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelExprWRelOp(CSubsetParser::RelExprWRelOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleExprTerm(CSubsetParser::SimpleExprTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStraySimpleExpr(CSubsetParser::StraySimpleExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleExprAdd(CSubsetParser::SimpleExprAddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermUnaryExpr(CSubsetParser::TermUnaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermMul(CSubsetParser::TermMulContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExprAdd(CSubsetParser::UnaryExprAddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExprNot(CSubsetParser::UnaryExprNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExprFactor(CSubsetParser::UnaryExprFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorVar(CSubsetParser::FactorVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorArgList(CSubsetParser::FactorArgListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorExpr(CSubsetParser::FactorExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorConstInt(CSubsetParser::FactorConstIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorConstFloat(CSubsetParser::FactorConstFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorIncOp(CSubsetParser::FactorIncOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorDecOp(CSubsetParser::FactorDecOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentListMultipleArgs(CSubsetParser::ArgumentListMultipleArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentListNoArgs(CSubsetParser::ArgumentListNoArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentsLogicExpr(CSubsetParser::ArgumentsLogicExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentsCommaLogicExpr(CSubsetParser::ArgumentsCommaLogicExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

