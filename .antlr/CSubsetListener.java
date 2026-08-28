// Generated from /Users/agl/3-1/CSE 310/SyntaxSemanticAnalysis/2205134/CSubset.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link CSubsetParser}.
 */
public interface CSubsetListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link CSubsetParser#start}.
	 * @param ctx the parse tree
	 */
	void enterStart(CSubsetParser.StartContext ctx);
	/**
	 * Exit a parse tree produced by {@link CSubsetParser#start}.
	 * @param ctx the parse tree
	 */
	void exitStart(CSubsetParser.StartContext ctx);
	/**
	 * Enter a parse tree produced by the {@code programUnit}
	 * labeled alternative in {@link CSubsetParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgramUnit(CSubsetParser.ProgramUnitContext ctx);
	/**
	 * Exit a parse tree produced by the {@code programUnit}
	 * labeled alternative in {@link CSubsetParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgramUnit(CSubsetParser.ProgramUnitContext ctx);
	/**
	 * Enter a parse tree produced by the {@code programAgain}
	 * labeled alternative in {@link CSubsetParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgramAgain(CSubsetParser.ProgramAgainContext ctx);
	/**
	 * Exit a parse tree produced by the {@code programAgain}
	 * labeled alternative in {@link CSubsetParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgramAgain(CSubsetParser.ProgramAgainContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unitVarDeclaration}
	 * labeled alternative in {@link CSubsetParser#unit}.
	 * @param ctx the parse tree
	 */
	void enterUnitVarDeclaration(CSubsetParser.UnitVarDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code unitVarDeclaration}
	 * labeled alternative in {@link CSubsetParser#unit}.
	 * @param ctx the parse tree
	 */
	void exitUnitVarDeclaration(CSubsetParser.UnitVarDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unitFuncDeclaration}
	 * labeled alternative in {@link CSubsetParser#unit}.
	 * @param ctx the parse tree
	 */
	void enterUnitFuncDeclaration(CSubsetParser.UnitFuncDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code unitFuncDeclaration}
	 * labeled alternative in {@link CSubsetParser#unit}.
	 * @param ctx the parse tree
	 */
	void exitUnitFuncDeclaration(CSubsetParser.UnitFuncDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unitFuncDefinition}
	 * labeled alternative in {@link CSubsetParser#unit}.
	 * @param ctx the parse tree
	 */
	void enterUnitFuncDefinition(CSubsetParser.UnitFuncDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code unitFuncDefinition}
	 * labeled alternative in {@link CSubsetParser#unit}.
	 * @param ctx the parse tree
	 */
	void exitUnitFuncDefinition(CSubsetParser.UnitFuncDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code funcDeclarationWParameters}
	 * labeled alternative in {@link CSubsetParser#func_declaration}.
	 * @param ctx the parse tree
	 */
	void enterFuncDeclarationWParameters(CSubsetParser.FuncDeclarationWParametersContext ctx);
	/**
	 * Exit a parse tree produced by the {@code funcDeclarationWParameters}
	 * labeled alternative in {@link CSubsetParser#func_declaration}.
	 * @param ctx the parse tree
	 */
	void exitFuncDeclarationWParameters(CSubsetParser.FuncDeclarationWParametersContext ctx);
	/**
	 * Enter a parse tree produced by the {@code funcDeclarationWoParameters}
	 * labeled alternative in {@link CSubsetParser#func_declaration}.
	 * @param ctx the parse tree
	 */
	void enterFuncDeclarationWoParameters(CSubsetParser.FuncDeclarationWoParametersContext ctx);
	/**
	 * Exit a parse tree produced by the {@code funcDeclarationWoParameters}
	 * labeled alternative in {@link CSubsetParser#func_declaration}.
	 * @param ctx the parse tree
	 */
	void exitFuncDeclarationWoParameters(CSubsetParser.FuncDeclarationWoParametersContext ctx);
	/**
	 * Enter a parse tree produced by the {@code funcDefWParameters}
	 * labeled alternative in {@link CSubsetParser#func_definition}.
	 * @param ctx the parse tree
	 */
	void enterFuncDefWParameters(CSubsetParser.FuncDefWParametersContext ctx);
	/**
	 * Exit a parse tree produced by the {@code funcDefWParameters}
	 * labeled alternative in {@link CSubsetParser#func_definition}.
	 * @param ctx the parse tree
	 */
	void exitFuncDefWParameters(CSubsetParser.FuncDefWParametersContext ctx);
	/**
	 * Enter a parse tree produced by the {@code funcDefWoParameters}
	 * labeled alternative in {@link CSubsetParser#func_definition}.
	 * @param ctx the parse tree
	 */
	void enterFuncDefWoParameters(CSubsetParser.FuncDefWoParametersContext ctx);
	/**
	 * Exit a parse tree produced by the {@code funcDefWoParameters}
	 * labeled alternative in {@link CSubsetParser#func_definition}.
	 * @param ctx the parse tree
	 */
	void exitFuncDefWoParameters(CSubsetParser.FuncDefWoParametersContext ctx);
	/**
	 * Enter a parse tree produced by the {@code singleParameterWoId}
	 * labeled alternative in {@link CSubsetParser#parameter_list}.
	 * @param ctx the parse tree
	 */
	void enterSingleParameterWoId(CSubsetParser.SingleParameterWoIdContext ctx);
	/**
	 * Exit a parse tree produced by the {@code singleParameterWoId}
	 * labeled alternative in {@link CSubsetParser#parameter_list}.
	 * @param ctx the parse tree
	 */
	void exitSingleParameterWoId(CSubsetParser.SingleParameterWoIdContext ctx);
	/**
	 * Enter a parse tree produced by the {@code singleParameterWId}
	 * labeled alternative in {@link CSubsetParser#parameter_list}.
	 * @param ctx the parse tree
	 */
	void enterSingleParameterWId(CSubsetParser.SingleParameterWIdContext ctx);
	/**
	 * Exit a parse tree produced by the {@code singleParameterWId}
	 * labeled alternative in {@link CSubsetParser#parameter_list}.
	 * @param ctx the parse tree
	 */
	void exitSingleParameterWId(CSubsetParser.SingleParameterWIdContext ctx);
	/**
	 * Enter a parse tree produced by the {@code strayTokenParameterList}
	 * labeled alternative in {@link CSubsetParser#parameter_list}.
	 * @param ctx the parse tree
	 */
	void enterStrayTokenParameterList(CSubsetParser.StrayTokenParameterListContext ctx);
	/**
	 * Exit a parse tree produced by the {@code strayTokenParameterList}
	 * labeled alternative in {@link CSubsetParser#parameter_list}.
	 * @param ctx the parse tree
	 */
	void exitStrayTokenParameterList(CSubsetParser.StrayTokenParameterListContext ctx);
	/**
	 * Enter a parse tree produced by the {@code multipleParametersWoId}
	 * labeled alternative in {@link CSubsetParser#parameter_list}.
	 * @param ctx the parse tree
	 */
	void enterMultipleParametersWoId(CSubsetParser.MultipleParametersWoIdContext ctx);
	/**
	 * Exit a parse tree produced by the {@code multipleParametersWoId}
	 * labeled alternative in {@link CSubsetParser#parameter_list}.
	 * @param ctx the parse tree
	 */
	void exitMultipleParametersWoId(CSubsetParser.MultipleParametersWoIdContext ctx);
	/**
	 * Enter a parse tree produced by the {@code multipleParametersWId}
	 * labeled alternative in {@link CSubsetParser#parameter_list}.
	 * @param ctx the parse tree
	 */
	void enterMultipleParametersWId(CSubsetParser.MultipleParametersWIdContext ctx);
	/**
	 * Exit a parse tree produced by the {@code multipleParametersWId}
	 * labeled alternative in {@link CSubsetParser#parameter_list}.
	 * @param ctx the parse tree
	 */
	void exitMultipleParametersWId(CSubsetParser.MultipleParametersWIdContext ctx);
	/**
	 * Enter a parse tree produced by the {@code compoundStmtNonEmpty}
	 * labeled alternative in {@link CSubsetParser#compound_statement}.
	 * @param ctx the parse tree
	 */
	void enterCompoundStmtNonEmpty(CSubsetParser.CompoundStmtNonEmptyContext ctx);
	/**
	 * Exit a parse tree produced by the {@code compoundStmtNonEmpty}
	 * labeled alternative in {@link CSubsetParser#compound_statement}.
	 * @param ctx the parse tree
	 */
	void exitCompoundStmtNonEmpty(CSubsetParser.CompoundStmtNonEmptyContext ctx);
	/**
	 * Enter a parse tree produced by the {@code compoundStmtEmpty}
	 * labeled alternative in {@link CSubsetParser#compound_statement}.
	 * @param ctx the parse tree
	 */
	void enterCompoundStmtEmpty(CSubsetParser.CompoundStmtEmptyContext ctx);
	/**
	 * Exit a parse tree produced by the {@code compoundStmtEmpty}
	 * labeled alternative in {@link CSubsetParser#compound_statement}.
	 * @param ctx the parse tree
	 */
	void exitCompoundStmtEmpty(CSubsetParser.CompoundStmtEmptyContext ctx);
	/**
	 * Enter a parse tree produced by the {@code varDeclaration}
	 * labeled alternative in {@link CSubsetParser#var_declaration}.
	 * @param ctx the parse tree
	 */
	void enterVarDeclaration(CSubsetParser.VarDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code varDeclaration}
	 * labeled alternative in {@link CSubsetParser#var_declaration}.
	 * @param ctx the parse tree
	 */
	void exitVarDeclaration(CSubsetParser.VarDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code typeSpecifierInt}
	 * labeled alternative in {@link CSubsetParser#type_specifier}.
	 * @param ctx the parse tree
	 */
	void enterTypeSpecifierInt(CSubsetParser.TypeSpecifierIntContext ctx);
	/**
	 * Exit a parse tree produced by the {@code typeSpecifierInt}
	 * labeled alternative in {@link CSubsetParser#type_specifier}.
	 * @param ctx the parse tree
	 */
	void exitTypeSpecifierInt(CSubsetParser.TypeSpecifierIntContext ctx);
	/**
	 * Enter a parse tree produced by the {@code typeSpecifierFloat}
	 * labeled alternative in {@link CSubsetParser#type_specifier}.
	 * @param ctx the parse tree
	 */
	void enterTypeSpecifierFloat(CSubsetParser.TypeSpecifierFloatContext ctx);
	/**
	 * Exit a parse tree produced by the {@code typeSpecifierFloat}
	 * labeled alternative in {@link CSubsetParser#type_specifier}.
	 * @param ctx the parse tree
	 */
	void exitTypeSpecifierFloat(CSubsetParser.TypeSpecifierFloatContext ctx);
	/**
	 * Enter a parse tree produced by the {@code typeSpecifierVoid}
	 * labeled alternative in {@link CSubsetParser#type_specifier}.
	 * @param ctx the parse tree
	 */
	void enterTypeSpecifierVoid(CSubsetParser.TypeSpecifierVoidContext ctx);
	/**
	 * Exit a parse tree produced by the {@code typeSpecifierVoid}
	 * labeled alternative in {@link CSubsetParser#type_specifier}.
	 * @param ctx the parse tree
	 */
	void exitTypeSpecifierVoid(CSubsetParser.TypeSpecifierVoidContext ctx);
	/**
	 * Enter a parse tree produced by the {@code declarationListMultipleArr}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationListMultipleArr(CSubsetParser.DeclarationListMultipleArrContext ctx);
	/**
	 * Exit a parse tree produced by the {@code declarationListMultipleArr}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationListMultipleArr(CSubsetParser.DeclarationListMultipleArrContext ctx);
	/**
	 * Enter a parse tree produced by the {@code declarationListSingleArr}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationListSingleArr(CSubsetParser.DeclarationListSingleArrContext ctx);
	/**
	 * Exit a parse tree produced by the {@code declarationListSingleArr}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationListSingleArr(CSubsetParser.DeclarationListSingleArrContext ctx);
	/**
	 * Enter a parse tree produced by the {@code declarationListSingleId}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationListSingleId(CSubsetParser.DeclarationListSingleIdContext ctx);
	/**
	 * Exit a parse tree produced by the {@code declarationListSingleId}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationListSingleId(CSubsetParser.DeclarationListSingleIdContext ctx);
	/**
	 * Enter a parse tree produced by the {@code strayTokenDeclarationList}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void enterStrayTokenDeclarationList(CSubsetParser.StrayTokenDeclarationListContext ctx);
	/**
	 * Exit a parse tree produced by the {@code strayTokenDeclarationList}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void exitStrayTokenDeclarationList(CSubsetParser.StrayTokenDeclarationListContext ctx);
	/**
	 * Enter a parse tree produced by the {@code declarationListMultipleVar}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationListMultipleVar(CSubsetParser.DeclarationListMultipleVarContext ctx);
	/**
	 * Exit a parse tree produced by the {@code declarationListMultipleVar}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationListMultipleVar(CSubsetParser.DeclarationListMultipleVarContext ctx);
	/**
	 * Enter a parse tree produced by the {@code declarationListMultipleArrError}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationListMultipleArrError(CSubsetParser.DeclarationListMultipleArrErrorContext ctx);
	/**
	 * Exit a parse tree produced by the {@code declarationListMultipleArrError}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationListMultipleArrError(CSubsetParser.DeclarationListMultipleArrErrorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code declarationListSingleArrError}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationListSingleArrError(CSubsetParser.DeclarationListSingleArrErrorContext ctx);
	/**
	 * Exit a parse tree produced by the {@code declarationListSingleArrError}
	 * labeled alternative in {@link CSubsetParser#declaration_list}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationListSingleArrError(CSubsetParser.DeclarationListSingleArrErrorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code multipleStatements}
	 * labeled alternative in {@link CSubsetParser#statements}.
	 * @param ctx the parse tree
	 */
	void enterMultipleStatements(CSubsetParser.MultipleStatementsContext ctx);
	/**
	 * Exit a parse tree produced by the {@code multipleStatements}
	 * labeled alternative in {@link CSubsetParser#statements}.
	 * @param ctx the parse tree
	 */
	void exitMultipleStatements(CSubsetParser.MultipleStatementsContext ctx);
	/**
	 * Enter a parse tree produced by the {@code singleStatement}
	 * labeled alternative in {@link CSubsetParser#statements}.
	 * @param ctx the parse tree
	 */
	void enterSingleStatement(CSubsetParser.SingleStatementContext ctx);
	/**
	 * Exit a parse tree produced by the {@code singleStatement}
	 * labeled alternative in {@link CSubsetParser#statements}.
	 * @param ctx the parse tree
	 */
	void exitSingleStatement(CSubsetParser.SingleStatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code statementVarDeclaration}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatementVarDeclaration(CSubsetParser.StatementVarDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code statementVarDeclaration}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatementVarDeclaration(CSubsetParser.StatementVarDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code statementExpressionStmt}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatementExpressionStmt(CSubsetParser.StatementExpressionStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code statementExpressionStmt}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatementExpressionStmt(CSubsetParser.StatementExpressionStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code statementCompoundStmt}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatementCompoundStmt(CSubsetParser.StatementCompoundStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code statementCompoundStmt}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatementCompoundStmt(CSubsetParser.StatementCompoundStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code statementFor}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatementFor(CSubsetParser.StatementForContext ctx);
	/**
	 * Exit a parse tree produced by the {@code statementFor}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatementFor(CSubsetParser.StatementForContext ctx);
	/**
	 * Enter a parse tree produced by the {@code statementIf}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatementIf(CSubsetParser.StatementIfContext ctx);
	/**
	 * Exit a parse tree produced by the {@code statementIf}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatementIf(CSubsetParser.StatementIfContext ctx);
	/**
	 * Enter a parse tree produced by the {@code statementIfElse}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatementIfElse(CSubsetParser.StatementIfElseContext ctx);
	/**
	 * Exit a parse tree produced by the {@code statementIfElse}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatementIfElse(CSubsetParser.StatementIfElseContext ctx);
	/**
	 * Enter a parse tree produced by the {@code statementWhile}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatementWhile(CSubsetParser.StatementWhileContext ctx);
	/**
	 * Exit a parse tree produced by the {@code statementWhile}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatementWhile(CSubsetParser.StatementWhileContext ctx);
	/**
	 * Enter a parse tree produced by the {@code statementPrintln}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatementPrintln(CSubsetParser.StatementPrintlnContext ctx);
	/**
	 * Exit a parse tree produced by the {@code statementPrintln}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatementPrintln(CSubsetParser.StatementPrintlnContext ctx);
	/**
	 * Enter a parse tree produced by the {@code statementReturn}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatementReturn(CSubsetParser.StatementReturnContext ctx);
	/**
	 * Exit a parse tree produced by the {@code statementReturn}
	 * labeled alternative in {@link CSubsetParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatementReturn(CSubsetParser.StatementReturnContext ctx);
	/**
	 * Enter a parse tree produced by the {@code expressionStmtEmpty}
	 * labeled alternative in {@link CSubsetParser#expression_statement}.
	 * @param ctx the parse tree
	 */
	void enterExpressionStmtEmpty(CSubsetParser.ExpressionStmtEmptyContext ctx);
	/**
	 * Exit a parse tree produced by the {@code expressionStmtEmpty}
	 * labeled alternative in {@link CSubsetParser#expression_statement}.
	 * @param ctx the parse tree
	 */
	void exitExpressionStmtEmpty(CSubsetParser.ExpressionStmtEmptyContext ctx);
	/**
	 * Enter a parse tree produced by the {@code expressionStmtExpression}
	 * labeled alternative in {@link CSubsetParser#expression_statement}.
	 * @param ctx the parse tree
	 */
	void enterExpressionStmtExpression(CSubsetParser.ExpressionStmtExpressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code expressionStmtExpression}
	 * labeled alternative in {@link CSubsetParser#expression_statement}.
	 * @param ctx the parse tree
	 */
	void exitExpressionStmtExpression(CSubsetParser.ExpressionStmtExpressionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code expressionMissingSemicolon}
	 * labeled alternative in {@link CSubsetParser#expression_statement}.
	 * @param ctx the parse tree
	 */
	void enterExpressionMissingSemicolon(CSubsetParser.ExpressionMissingSemicolonContext ctx);
	/**
	 * Exit a parse tree produced by the {@code expressionMissingSemicolon}
	 * labeled alternative in {@link CSubsetParser#expression_statement}.
	 * @param ctx the parse tree
	 */
	void exitExpressionMissingSemicolon(CSubsetParser.ExpressionMissingSemicolonContext ctx);
	/**
	 * Enter a parse tree produced by the {@code variableId}
	 * labeled alternative in {@link CSubsetParser#variable}.
	 * @param ctx the parse tree
	 */
	void enterVariableId(CSubsetParser.VariableIdContext ctx);
	/**
	 * Exit a parse tree produced by the {@code variableId}
	 * labeled alternative in {@link CSubsetParser#variable}.
	 * @param ctx the parse tree
	 */
	void exitVariableId(CSubsetParser.VariableIdContext ctx);
	/**
	 * Enter a parse tree produced by the {@code variableArr}
	 * labeled alternative in {@link CSubsetParser#variable}.
	 * @param ctx the parse tree
	 */
	void enterVariableArr(CSubsetParser.VariableArrContext ctx);
	/**
	 * Exit a parse tree produced by the {@code variableArr}
	 * labeled alternative in {@link CSubsetParser#variable}.
	 * @param ctx the parse tree
	 */
	void exitVariableArr(CSubsetParser.VariableArrContext ctx);
	/**
	 * Enter a parse tree produced by the {@code expressionLogicExpression}
	 * labeled alternative in {@link CSubsetParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpressionLogicExpression(CSubsetParser.ExpressionLogicExpressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code expressionLogicExpression}
	 * labeled alternative in {@link CSubsetParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpressionLogicExpression(CSubsetParser.ExpressionLogicExpressionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code expressionVarAssignLogic}
	 * labeled alternative in {@link CSubsetParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpressionVarAssignLogic(CSubsetParser.ExpressionVarAssignLogicContext ctx);
	/**
	 * Exit a parse tree produced by the {@code expressionVarAssignLogic}
	 * labeled alternative in {@link CSubsetParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpressionVarAssignLogic(CSubsetParser.ExpressionVarAssignLogicContext ctx);
	/**
	 * Enter a parse tree produced by the {@code logicExprRelExpr}
	 * labeled alternative in {@link CSubsetParser#logic_expression}.
	 * @param ctx the parse tree
	 */
	void enterLogicExprRelExpr(CSubsetParser.LogicExprRelExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code logicExprRelExpr}
	 * labeled alternative in {@link CSubsetParser#logic_expression}.
	 * @param ctx the parse tree
	 */
	void exitLogicExprRelExpr(CSubsetParser.LogicExprRelExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code logicExprWLogicOp}
	 * labeled alternative in {@link CSubsetParser#logic_expression}.
	 * @param ctx the parse tree
	 */
	void enterLogicExprWLogicOp(CSubsetParser.LogicExprWLogicOpContext ctx);
	/**
	 * Exit a parse tree produced by the {@code logicExprWLogicOp}
	 * labeled alternative in {@link CSubsetParser#logic_expression}.
	 * @param ctx the parse tree
	 */
	void exitLogicExprWLogicOp(CSubsetParser.LogicExprWLogicOpContext ctx);
	/**
	 * Enter a parse tree produced by the {@code relExprSimpleExpr}
	 * labeled alternative in {@link CSubsetParser#rel_expression}.
	 * @param ctx the parse tree
	 */
	void enterRelExprSimpleExpr(CSubsetParser.RelExprSimpleExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code relExprSimpleExpr}
	 * labeled alternative in {@link CSubsetParser#rel_expression}.
	 * @param ctx the parse tree
	 */
	void exitRelExprSimpleExpr(CSubsetParser.RelExprSimpleExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code relExprWRelOp}
	 * labeled alternative in {@link CSubsetParser#rel_expression}.
	 * @param ctx the parse tree
	 */
	void enterRelExprWRelOp(CSubsetParser.RelExprWRelOpContext ctx);
	/**
	 * Exit a parse tree produced by the {@code relExprWRelOp}
	 * labeled alternative in {@link CSubsetParser#rel_expression}.
	 * @param ctx the parse tree
	 */
	void exitRelExprWRelOp(CSubsetParser.RelExprWRelOpContext ctx);
	/**
	 * Enter a parse tree produced by the {@code simpleExprTerm}
	 * labeled alternative in {@link CSubsetParser#simple_expression}.
	 * @param ctx the parse tree
	 */
	void enterSimpleExprTerm(CSubsetParser.SimpleExprTermContext ctx);
	/**
	 * Exit a parse tree produced by the {@code simpleExprTerm}
	 * labeled alternative in {@link CSubsetParser#simple_expression}.
	 * @param ctx the parse tree
	 */
	void exitSimpleExprTerm(CSubsetParser.SimpleExprTermContext ctx);
	/**
	 * Enter a parse tree produced by the {@code straySimpleExpr}
	 * labeled alternative in {@link CSubsetParser#simple_expression}.
	 * @param ctx the parse tree
	 */
	void enterStraySimpleExpr(CSubsetParser.StraySimpleExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code straySimpleExpr}
	 * labeled alternative in {@link CSubsetParser#simple_expression}.
	 * @param ctx the parse tree
	 */
	void exitStraySimpleExpr(CSubsetParser.StraySimpleExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code simpleExprAdd}
	 * labeled alternative in {@link CSubsetParser#simple_expression}.
	 * @param ctx the parse tree
	 */
	void enterSimpleExprAdd(CSubsetParser.SimpleExprAddContext ctx);
	/**
	 * Exit a parse tree produced by the {@code simpleExprAdd}
	 * labeled alternative in {@link CSubsetParser#simple_expression}.
	 * @param ctx the parse tree
	 */
	void exitSimpleExprAdd(CSubsetParser.SimpleExprAddContext ctx);
	/**
	 * Enter a parse tree produced by the {@code termUnaryExpr}
	 * labeled alternative in {@link CSubsetParser#term}.
	 * @param ctx the parse tree
	 */
	void enterTermUnaryExpr(CSubsetParser.TermUnaryExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code termUnaryExpr}
	 * labeled alternative in {@link CSubsetParser#term}.
	 * @param ctx the parse tree
	 */
	void exitTermUnaryExpr(CSubsetParser.TermUnaryExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code termMul}
	 * labeled alternative in {@link CSubsetParser#term}.
	 * @param ctx the parse tree
	 */
	void enterTermMul(CSubsetParser.TermMulContext ctx);
	/**
	 * Exit a parse tree produced by the {@code termMul}
	 * labeled alternative in {@link CSubsetParser#term}.
	 * @param ctx the parse tree
	 */
	void exitTermMul(CSubsetParser.TermMulContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unaryExprAdd}
	 * labeled alternative in {@link CSubsetParser#unary_expression}.
	 * @param ctx the parse tree
	 */
	void enterUnaryExprAdd(CSubsetParser.UnaryExprAddContext ctx);
	/**
	 * Exit a parse tree produced by the {@code unaryExprAdd}
	 * labeled alternative in {@link CSubsetParser#unary_expression}.
	 * @param ctx the parse tree
	 */
	void exitUnaryExprAdd(CSubsetParser.UnaryExprAddContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unaryExprNot}
	 * labeled alternative in {@link CSubsetParser#unary_expression}.
	 * @param ctx the parse tree
	 */
	void enterUnaryExprNot(CSubsetParser.UnaryExprNotContext ctx);
	/**
	 * Exit a parse tree produced by the {@code unaryExprNot}
	 * labeled alternative in {@link CSubsetParser#unary_expression}.
	 * @param ctx the parse tree
	 */
	void exitUnaryExprNot(CSubsetParser.UnaryExprNotContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unaryExprFactor}
	 * labeled alternative in {@link CSubsetParser#unary_expression}.
	 * @param ctx the parse tree
	 */
	void enterUnaryExprFactor(CSubsetParser.UnaryExprFactorContext ctx);
	/**
	 * Exit a parse tree produced by the {@code unaryExprFactor}
	 * labeled alternative in {@link CSubsetParser#unary_expression}.
	 * @param ctx the parse tree
	 */
	void exitUnaryExprFactor(CSubsetParser.UnaryExprFactorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code factorVar}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactorVar(CSubsetParser.FactorVarContext ctx);
	/**
	 * Exit a parse tree produced by the {@code factorVar}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactorVar(CSubsetParser.FactorVarContext ctx);
	/**
	 * Enter a parse tree produced by the {@code factorArgList}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactorArgList(CSubsetParser.FactorArgListContext ctx);
	/**
	 * Exit a parse tree produced by the {@code factorArgList}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactorArgList(CSubsetParser.FactorArgListContext ctx);
	/**
	 * Enter a parse tree produced by the {@code factorExpr}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactorExpr(CSubsetParser.FactorExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code factorExpr}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactorExpr(CSubsetParser.FactorExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code factorConstInt}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactorConstInt(CSubsetParser.FactorConstIntContext ctx);
	/**
	 * Exit a parse tree produced by the {@code factorConstInt}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactorConstInt(CSubsetParser.FactorConstIntContext ctx);
	/**
	 * Enter a parse tree produced by the {@code factorConstFloat}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactorConstFloat(CSubsetParser.FactorConstFloatContext ctx);
	/**
	 * Exit a parse tree produced by the {@code factorConstFloat}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactorConstFloat(CSubsetParser.FactorConstFloatContext ctx);
	/**
	 * Enter a parse tree produced by the {@code factorIncOp}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactorIncOp(CSubsetParser.FactorIncOpContext ctx);
	/**
	 * Exit a parse tree produced by the {@code factorIncOp}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactorIncOp(CSubsetParser.FactorIncOpContext ctx);
	/**
	 * Enter a parse tree produced by the {@code factorDecOp}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactorDecOp(CSubsetParser.FactorDecOpContext ctx);
	/**
	 * Exit a parse tree produced by the {@code factorDecOp}
	 * labeled alternative in {@link CSubsetParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactorDecOp(CSubsetParser.FactorDecOpContext ctx);
	/**
	 * Enter a parse tree produced by the {@code argumentListMultipleArgs}
	 * labeled alternative in {@link CSubsetParser#argument_list}.
	 * @param ctx the parse tree
	 */
	void enterArgumentListMultipleArgs(CSubsetParser.ArgumentListMultipleArgsContext ctx);
	/**
	 * Exit a parse tree produced by the {@code argumentListMultipleArgs}
	 * labeled alternative in {@link CSubsetParser#argument_list}.
	 * @param ctx the parse tree
	 */
	void exitArgumentListMultipleArgs(CSubsetParser.ArgumentListMultipleArgsContext ctx);
	/**
	 * Enter a parse tree produced by the {@code argumentListNoArgs}
	 * labeled alternative in {@link CSubsetParser#argument_list}.
	 * @param ctx the parse tree
	 */
	void enterArgumentListNoArgs(CSubsetParser.ArgumentListNoArgsContext ctx);
	/**
	 * Exit a parse tree produced by the {@code argumentListNoArgs}
	 * labeled alternative in {@link CSubsetParser#argument_list}.
	 * @param ctx the parse tree
	 */
	void exitArgumentListNoArgs(CSubsetParser.ArgumentListNoArgsContext ctx);
	/**
	 * Enter a parse tree produced by the {@code argumentsLogicExpr}
	 * labeled alternative in {@link CSubsetParser#arguments}.
	 * @param ctx the parse tree
	 */
	void enterArgumentsLogicExpr(CSubsetParser.ArgumentsLogicExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code argumentsLogicExpr}
	 * labeled alternative in {@link CSubsetParser#arguments}.
	 * @param ctx the parse tree
	 */
	void exitArgumentsLogicExpr(CSubsetParser.ArgumentsLogicExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code argumentsCommaLogicExpr}
	 * labeled alternative in {@link CSubsetParser#arguments}.
	 * @param ctx the parse tree
	 */
	void enterArgumentsCommaLogicExpr(CSubsetParser.ArgumentsCommaLogicExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code argumentsCommaLogicExpr}
	 * labeled alternative in {@link CSubsetParser#arguments}.
	 * @param ctx the parse tree
	 */
	void exitArgumentsCommaLogicExpr(CSubsetParser.ArgumentsCommaLogicExprContext ctx);
}