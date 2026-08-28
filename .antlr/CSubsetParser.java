// Generated from /Users/agl/3-1/CSE 310/ICG/Offline3/CSubset.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class CSubsetParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		LINE_COMMENT=1, BLOCK_COMMENT=2, STRING=3, WS=4, IF=5, ELSE=6, FOR=7, 
		WHILE=8, PRINTLN=9, RETURN=10, INT=11, FLOAT=12, VOID=13, LPAREN=14, RPAREN=15, 
		LCURL=16, RCURL=17, LTHIRD=18, RTHIRD=19, SEMICOLON=20, COMMA=21, ADDOP=22, 
		MULOP=23, INCOP=24, DECOP=25, NOT=26, RELOP=27, LOGICOP=28, ASSIGNOP=29, 
		ID=30, CONST_INT=31, CONST_FLOAT=32;
	public static final int
		RULE_start = 0, RULE_program = 1, RULE_unit = 2, RULE_func_declaration = 3, 
		RULE_func_definition = 4, RULE_parameter_list = 5, RULE_compound_statement = 6, 
		RULE_var_declaration = 7, RULE_type_specifier = 8, RULE_declaration_list = 9, 
		RULE_statements = 10, RULE_statement = 11, RULE_expression_statement = 12, 
		RULE_variable = 13, RULE_expression = 14, RULE_logic_expression = 15, 
		RULE_rel_expression = 16, RULE_simple_expression = 17, RULE_term = 18, 
		RULE_unary_expression = 19, RULE_factor = 20, RULE_argument_list = 21, 
		RULE_arguments = 22;
	private static String[] makeRuleNames() {
		return new String[] {
			"start", "program", "unit", "func_declaration", "func_definition", "parameter_list", 
			"compound_statement", "var_declaration", "type_specifier", "declaration_list", 
			"statements", "statement", "expression_statement", "variable", "expression", 
			"logic_expression", "rel_expression", "simple_expression", "term", "unary_expression", 
			"factor", "argument_list", "arguments"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, "'if'", "'else'", "'for'", "'while'", "'printf'", 
			"'return'", "'int'", "'float'", "'void'", "'('", "')'", "'{'", "'}'", 
			"'['", "']'", "';'", "','", null, null, "'++'", "'--'", "'!'", null, 
			null, "'='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "LINE_COMMENT", "BLOCK_COMMENT", "STRING", "WS", "IF", "ELSE", 
			"FOR", "WHILE", "PRINTLN", "RETURN", "INT", "FLOAT", "VOID", "LPAREN", 
			"RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", 
			"ADDOP", "MULOP", "INCOP", "DECOP", "NOT", "RELOP", "LOGICOP", "ASSIGNOP", 
			"ID", "CONST_INT", "CONST_FLOAT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "CSubset.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public CSubsetParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StartContext extends ParserRuleContext {
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public StartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_start; }
	}

	public final StartContext start() throws RecognitionException {
		StartContext _localctx = new StartContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_start);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(46);
			program(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	 
		public ProgramContext() { }
		public void copyFrom(ProgramContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ProgramUnitContext extends ProgramContext {
		public UnitContext unit() {
			return getRuleContext(UnitContext.class,0);
		}
		public ProgramUnitContext(ProgramContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ProgramAgainContext extends ProgramContext {
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public UnitContext unit() {
			return getRuleContext(UnitContext.class,0);
		}
		public ProgramAgainContext(ProgramContext ctx) { copyFrom(ctx); }
	}

	public final ProgramContext program() throws RecognitionException {
		return program(0);
	}

	private ProgramContext program(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ProgramContext _localctx = new ProgramContext(_ctx, _parentState);
		ProgramContext _prevctx = _localctx;
		int _startState = 2;
		enterRecursionRule(_localctx, 2, RULE_program, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			_localctx = new ProgramUnitContext(_localctx);
			_ctx = _localctx;
			_prevctx = _localctx;

			setState(49);
			unit();
			}
			_ctx.stop = _input.LT(-1);
			setState(55);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ProgramAgainContext(new ProgramContext(_parentctx, _parentState));
					pushNewRecursionContext(_localctx, _startState, RULE_program);
					setState(51);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(52);
					unit();
					}
					} 
				}
				setState(57);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnitContext extends ParserRuleContext {
		public UnitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unit; }
	 
		public UnitContext() { }
		public void copyFrom(UnitContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class UnitFuncDefinitionContext extends UnitContext {
		public Func_definitionContext func_definition() {
			return getRuleContext(Func_definitionContext.class,0);
		}
		public UnitFuncDefinitionContext(UnitContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class UnitVarDeclarationContext extends UnitContext {
		public Var_declarationContext var_declaration() {
			return getRuleContext(Var_declarationContext.class,0);
		}
		public UnitVarDeclarationContext(UnitContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class UnitFuncDeclarationContext extends UnitContext {
		public Func_declarationContext func_declaration() {
			return getRuleContext(Func_declarationContext.class,0);
		}
		public UnitFuncDeclarationContext(UnitContext ctx) { copyFrom(ctx); }
	}

	public final UnitContext unit() throws RecognitionException {
		UnitContext _localctx = new UnitContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_unit);
		try {
			setState(61);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				_localctx = new UnitVarDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(58);
				var_declaration();
				}
				break;
			case 2:
				_localctx = new UnitFuncDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(59);
				func_declaration();
				}
				break;
			case 3:
				_localctx = new UnitFuncDefinitionContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(60);
				func_definition();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Func_declarationContext extends ParserRuleContext {
		public Func_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_declaration; }
	 
		public Func_declarationContext() { }
		public void copyFrom(Func_declarationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FuncDeclarationWoParametersContext extends Func_declarationContext {
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public TerminalNode LPAREN() { return getToken(CSubsetParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(CSubsetParser.RPAREN, 0); }
		public TerminalNode SEMICOLON() { return getToken(CSubsetParser.SEMICOLON, 0); }
		public FuncDeclarationWoParametersContext(Func_declarationContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FuncDeclarationWParametersContext extends Func_declarationContext {
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public TerminalNode LPAREN() { return getToken(CSubsetParser.LPAREN, 0); }
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(CSubsetParser.RPAREN, 0); }
		public TerminalNode SEMICOLON() { return getToken(CSubsetParser.SEMICOLON, 0); }
		public FuncDeclarationWParametersContext(Func_declarationContext ctx) { copyFrom(ctx); }
	}

	public final Func_declarationContext func_declaration() throws RecognitionException {
		Func_declarationContext _localctx = new Func_declarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_func_declaration);
		try {
			setState(76);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				_localctx = new FuncDeclarationWParametersContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(63);
				type_specifier();
				setState(64);
				match(ID);
				setState(65);
				match(LPAREN);
				setState(66);
				parameter_list(0);
				setState(67);
				match(RPAREN);
				setState(68);
				match(SEMICOLON);
				}
				break;
			case 2:
				_localctx = new FuncDeclarationWoParametersContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(70);
				type_specifier();
				setState(71);
				match(ID);
				setState(72);
				match(LPAREN);
				setState(73);
				match(RPAREN);
				setState(74);
				match(SEMICOLON);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Func_definitionContext extends ParserRuleContext {
		public Func_definitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_definition; }
	 
		public Func_definitionContext() { }
		public void copyFrom(Func_definitionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FuncDefWoParametersContext extends Func_definitionContext {
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public TerminalNode LPAREN() { return getToken(CSubsetParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(CSubsetParser.RPAREN, 0); }
		public Compound_statementContext compound_statement() {
			return getRuleContext(Compound_statementContext.class,0);
		}
		public FuncDefWoParametersContext(Func_definitionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FuncDefWParametersContext extends Func_definitionContext {
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public TerminalNode LPAREN() { return getToken(CSubsetParser.LPAREN, 0); }
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(CSubsetParser.RPAREN, 0); }
		public Compound_statementContext compound_statement() {
			return getRuleContext(Compound_statementContext.class,0);
		}
		public FuncDefWParametersContext(Func_definitionContext ctx) { copyFrom(ctx); }
	}

	public final Func_definitionContext func_definition() throws RecognitionException {
		Func_definitionContext _localctx = new Func_definitionContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_func_definition);
		try {
			setState(91);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				_localctx = new FuncDefWParametersContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(78);
				type_specifier();
				setState(79);
				match(ID);
				setState(80);
				match(LPAREN);
				setState(81);
				parameter_list(0);
				setState(82);
				match(RPAREN);
				setState(83);
				compound_statement();
				}
				break;
			case 2:
				_localctx = new FuncDefWoParametersContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(85);
				type_specifier();
				setState(86);
				match(ID);
				setState(87);
				match(LPAREN);
				setState(88);
				match(RPAREN);
				setState(89);
				compound_statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Parameter_listContext extends ParserRuleContext {
		public Parameter_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter_list; }
	 
		public Parameter_listContext() { }
		public void copyFrom(Parameter_listContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SingleParameterWoIdContext extends Parameter_listContext {
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public SingleParameterWoIdContext(Parameter_listContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SingleParameterWIdContext extends Parameter_listContext {
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public SingleParameterWIdContext(Parameter_listContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StrayTokenParameterListContext extends Parameter_listContext {
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public StrayTokenParameterListContext(Parameter_listContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class MultipleParametersWoIdContext extends Parameter_listContext {
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CSubsetParser.COMMA, 0); }
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public MultipleParametersWoIdContext(Parameter_listContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class MultipleParametersWIdContext extends Parameter_listContext {
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CSubsetParser.COMMA, 0); }
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public MultipleParametersWIdContext(Parameter_listContext ctx) { copyFrom(ctx); }
	}

	public final Parameter_listContext parameter_list() throws RecognitionException {
		return parameter_list(0);
	}

	private Parameter_listContext parameter_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Parameter_listContext _localctx = new Parameter_listContext(_ctx, _parentState);
		Parameter_listContext _prevctx = _localctx;
		int _startState = 10;
		enterRecursionRule(_localctx, 10, RULE_parameter_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(101);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				{
				_localctx = new SingleParameterWIdContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(94);
				type_specifier();
				setState(95);
				match(ID);
				}
				break;
			case 2:
				{
				_localctx = new SingleParameterWoIdContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(97);
				type_specifier();
				}
				break;
			case 3:
				{
				_localctx = new StrayTokenParameterListContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(98);
				type_specifier();
				setState(99);
				matchWildcard();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(113);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(111);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
					case 1:
						{
						_localctx = new MultipleParametersWIdContext(new Parameter_listContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_parameter_list);
						setState(103);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(104);
						match(COMMA);
						setState(105);
						type_specifier();
						setState(106);
						match(ID);
						}
						break;
					case 2:
						{
						_localctx = new MultipleParametersWoIdContext(new Parameter_listContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_parameter_list);
						setState(108);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(109);
						match(COMMA);
						setState(110);
						type_specifier();
						}
						break;
					}
					} 
				}
				setState(115);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Compound_statementContext extends ParserRuleContext {
		public Compound_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compound_statement; }
	 
		public Compound_statementContext() { }
		public void copyFrom(Compound_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class CompoundStmtEmptyContext extends Compound_statementContext {
		public TerminalNode LCURL() { return getToken(CSubsetParser.LCURL, 0); }
		public TerminalNode RCURL() { return getToken(CSubsetParser.RCURL, 0); }
		public CompoundStmtEmptyContext(Compound_statementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class CompoundStmtNonEmptyContext extends Compound_statementContext {
		public TerminalNode LCURL() { return getToken(CSubsetParser.LCURL, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public TerminalNode RCURL() { return getToken(CSubsetParser.RCURL, 0); }
		public CompoundStmtNonEmptyContext(Compound_statementContext ctx) { copyFrom(ctx); }
	}

	public final Compound_statementContext compound_statement() throws RecognitionException {
		Compound_statementContext _localctx = new Compound_statementContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_compound_statement);
		try {
			setState(122);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				_localctx = new CompoundStmtNonEmptyContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(116);
				match(LCURL);
				setState(117);
				statements(0);
				setState(118);
				match(RCURL);
				}
				break;
			case 2:
				_localctx = new CompoundStmtEmptyContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(120);
				match(LCURL);
				setState(121);
				match(RCURL);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Var_declarationContext extends ParserRuleContext {
		public Var_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_declaration; }
	 
		public Var_declarationContext() { }
		public void copyFrom(Var_declarationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class VarDeclarationContext extends Var_declarationContext {
		public Type_specifierContext type_specifier() {
			return getRuleContext(Type_specifierContext.class,0);
		}
		public Declaration_listContext declaration_list() {
			return getRuleContext(Declaration_listContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(CSubsetParser.SEMICOLON, 0); }
		public VarDeclarationContext(Var_declarationContext ctx) { copyFrom(ctx); }
	}

	public final Var_declarationContext var_declaration() throws RecognitionException {
		Var_declarationContext _localctx = new Var_declarationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_var_declaration);
		try {
			_localctx = new VarDeclarationContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(124);
			type_specifier();
			setState(125);
			declaration_list(0);
			setState(126);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Type_specifierContext extends ParserRuleContext {
		public Type_specifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_specifier; }
	 
		public Type_specifierContext() { }
		public void copyFrom(Type_specifierContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class TypeSpecifierVoidContext extends Type_specifierContext {
		public TerminalNode VOID() { return getToken(CSubsetParser.VOID, 0); }
		public TypeSpecifierVoidContext(Type_specifierContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class TypeSpecifierFloatContext extends Type_specifierContext {
		public TerminalNode FLOAT() { return getToken(CSubsetParser.FLOAT, 0); }
		public TypeSpecifierFloatContext(Type_specifierContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class TypeSpecifierIntContext extends Type_specifierContext {
		public TerminalNode INT() { return getToken(CSubsetParser.INT, 0); }
		public TypeSpecifierIntContext(Type_specifierContext ctx) { copyFrom(ctx); }
	}

	public final Type_specifierContext type_specifier() throws RecognitionException {
		Type_specifierContext _localctx = new Type_specifierContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_type_specifier);
		try {
			setState(131);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				_localctx = new TypeSpecifierIntContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(128);
				match(INT);
				}
				break;
			case FLOAT:
				_localctx = new TypeSpecifierFloatContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(129);
				match(FLOAT);
				}
				break;
			case VOID:
				_localctx = new TypeSpecifierVoidContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(130);
				match(VOID);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Declaration_listContext extends ParserRuleContext {
		public Declaration_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration_list; }
	 
		public Declaration_listContext() { }
		public void copyFrom(Declaration_listContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class DeclarationListMultipleArrContext extends Declaration_listContext {
		public Declaration_listContext declaration_list() {
			return getRuleContext(Declaration_listContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CSubsetParser.COMMA, 0); }
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public TerminalNode LTHIRD() { return getToken(CSubsetParser.LTHIRD, 0); }
		public TerminalNode CONST_INT() { return getToken(CSubsetParser.CONST_INT, 0); }
		public TerminalNode RTHIRD() { return getToken(CSubsetParser.RTHIRD, 0); }
		public DeclarationListMultipleArrContext(Declaration_listContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class DeclarationListSingleArrContext extends Declaration_listContext {
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public TerminalNode LTHIRD() { return getToken(CSubsetParser.LTHIRD, 0); }
		public TerminalNode CONST_INT() { return getToken(CSubsetParser.CONST_INT, 0); }
		public TerminalNode RTHIRD() { return getToken(CSubsetParser.RTHIRD, 0); }
		public DeclarationListSingleArrContext(Declaration_listContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class DeclarationListSingleIdContext extends Declaration_listContext {
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public DeclarationListSingleIdContext(Declaration_listContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StrayTokenDeclarationListContext extends Declaration_listContext {
		public Token I1;
		public Token I2;
		public List<TerminalNode> ID() { return getTokens(CSubsetParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(CSubsetParser.ID, i);
		}
		public StrayTokenDeclarationListContext(Declaration_listContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class DeclarationListMultipleVarContext extends Declaration_listContext {
		public Declaration_listContext declaration_list() {
			return getRuleContext(Declaration_listContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CSubsetParser.COMMA, 0); }
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public DeclarationListMultipleVarContext(Declaration_listContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class DeclarationListMultipleArrErrorContext extends Declaration_listContext {
		public Declaration_listContext declaration_list() {
			return getRuleContext(Declaration_listContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CSubsetParser.COMMA, 0); }
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public TerminalNode LTHIRD() { return getToken(CSubsetParser.LTHIRD, 0); }
		public TerminalNode CONST_FLOAT() { return getToken(CSubsetParser.CONST_FLOAT, 0); }
		public TerminalNode RTHIRD() { return getToken(CSubsetParser.RTHIRD, 0); }
		public DeclarationListMultipleArrErrorContext(Declaration_listContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class DeclarationListSingleArrErrorContext extends Declaration_listContext {
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public TerminalNode LTHIRD() { return getToken(CSubsetParser.LTHIRD, 0); }
		public TerminalNode CONST_FLOAT() { return getToken(CSubsetParser.CONST_FLOAT, 0); }
		public TerminalNode RTHIRD() { return getToken(CSubsetParser.RTHIRD, 0); }
		public DeclarationListSingleArrErrorContext(Declaration_listContext ctx) { copyFrom(ctx); }
	}

	public final Declaration_listContext declaration_list() throws RecognitionException {
		return declaration_list(0);
	}

	private Declaration_listContext declaration_list(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Declaration_listContext _localctx = new Declaration_listContext(_ctx, _parentState);
		Declaration_listContext _prevctx = _localctx;
		int _startState = 18;
		enterRecursionRule(_localctx, 18, RULE_declaration_list, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				_localctx = new DeclarationListSingleIdContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(134);
				match(ID);
				}
				break;
			case 2:
				{
				_localctx = new DeclarationListSingleArrContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(135);
				match(ID);
				setState(136);
				match(LTHIRD);
				setState(137);
				match(CONST_INT);
				setState(138);
				match(RTHIRD);
				}
				break;
			case 3:
				{
				_localctx = new DeclarationListSingleArrErrorContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(139);
				match(ID);
				setState(140);
				match(LTHIRD);
				setState(141);
				match(CONST_FLOAT);
				setState(142);
				match(RTHIRD);
				}
				break;
			case 4:
				{
				_localctx = new StrayTokenDeclarationListContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(143);
				((StrayTokenDeclarationListContext)_localctx).I1 = match(ID);
				setState(144);
				matchWildcard();
				setState(145);
				((StrayTokenDeclarationListContext)_localctx).I2 = match(ID);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(165);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(163);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
					case 1:
						{
						_localctx = new DeclarationListMultipleVarContext(new Declaration_listContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_declaration_list);
						setState(148);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(149);
						match(COMMA);
						setState(150);
						match(ID);
						}
						break;
					case 2:
						{
						_localctx = new DeclarationListMultipleArrContext(new Declaration_listContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_declaration_list);
						setState(151);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(152);
						match(COMMA);
						setState(153);
						match(ID);
						setState(154);
						match(LTHIRD);
						setState(155);
						match(CONST_INT);
						setState(156);
						match(RTHIRD);
						}
						break;
					case 3:
						{
						_localctx = new DeclarationListMultipleArrErrorContext(new Declaration_listContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_declaration_list);
						setState(157);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(158);
						match(COMMA);
						setState(159);
						match(ID);
						setState(160);
						match(LTHIRD);
						setState(161);
						match(CONST_FLOAT);
						setState(162);
						match(RTHIRD);
						}
						break;
					}
					} 
				}
				setState(167);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementsContext extends ParserRuleContext {
		public StatementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statements; }
	 
		public StatementsContext() { }
		public void copyFrom(StatementsContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class MultipleStatementsContext extends StatementsContext {
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public MultipleStatementsContext(StatementsContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SingleStatementContext extends StatementsContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public SingleStatementContext(StatementsContext ctx) { copyFrom(ctx); }
	}

	public final StatementsContext statements() throws RecognitionException {
		return statements(0);
	}

	private StatementsContext statements(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		StatementsContext _localctx = new StatementsContext(_ctx, _parentState);
		StatementsContext _prevctx = _localctx;
		int _startState = 20;
		enterRecursionRule(_localctx, 20, RULE_statements, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			_localctx = new SingleStatementContext(_localctx);
			_ctx = _localctx;
			_prevctx = _localctx;

			setState(169);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(175);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MultipleStatementsContext(new StatementsContext(_parentctx, _parentState));
					pushNewRecursionContext(_localctx, _startState, RULE_statements);
					setState(171);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(172);
					statement();
					}
					} 
				}
				setState(177);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StatementVarDeclarationContext extends StatementContext {
		public Var_declarationContext var_declaration() {
			return getRuleContext(Var_declarationContext.class,0);
		}
		public StatementVarDeclarationContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StatementPrintlnContext extends StatementContext {
		public TerminalNode PRINTLN() { return getToken(CSubsetParser.PRINTLN, 0); }
		public TerminalNode LPAREN() { return getToken(CSubsetParser.LPAREN, 0); }
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public TerminalNode RPAREN() { return getToken(CSubsetParser.RPAREN, 0); }
		public TerminalNode SEMICOLON() { return getToken(CSubsetParser.SEMICOLON, 0); }
		public StatementPrintlnContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StatementExpressionStmtContext extends StatementContext {
		public Expression_statementContext expression_statement() {
			return getRuleContext(Expression_statementContext.class,0);
		}
		public StatementExpressionStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StatementReturnContext extends StatementContext {
		public TerminalNode RETURN() { return getToken(CSubsetParser.RETURN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(CSubsetParser.SEMICOLON, 0); }
		public StatementReturnContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StatementForContext extends StatementContext {
		public Expression_statementContext e1;
		public Expression_statementContext e2;
		public TerminalNode FOR() { return getToken(CSubsetParser.FOR, 0); }
		public TerminalNode LPAREN() { return getToken(CSubsetParser.LPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(CSubsetParser.RPAREN, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public List<Expression_statementContext> expression_statement() {
			return getRuleContexts(Expression_statementContext.class);
		}
		public Expression_statementContext expression_statement(int i) {
			return getRuleContext(Expression_statementContext.class,i);
		}
		public StatementForContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StatementCompoundStmtContext extends StatementContext {
		public Compound_statementContext compound_statement() {
			return getRuleContext(Compound_statementContext.class,0);
		}
		public StatementCompoundStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StatementIfElseContext extends StatementContext {
		public StatementContext s1;
		public StatementContext s2;
		public TerminalNode IF() { return getToken(CSubsetParser.IF, 0); }
		public TerminalNode LPAREN() { return getToken(CSubsetParser.LPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(CSubsetParser.RPAREN, 0); }
		public TerminalNode ELSE() { return getToken(CSubsetParser.ELSE, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public StatementIfElseContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StatementWhileContext extends StatementContext {
		public TerminalNode WHILE() { return getToken(CSubsetParser.WHILE, 0); }
		public TerminalNode LPAREN() { return getToken(CSubsetParser.LPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(CSubsetParser.RPAREN, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public StatementWhileContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StatementIfContext extends StatementContext {
		public TerminalNode IF() { return getToken(CSubsetParser.IF, 0); }
		public TerminalNode LPAREN() { return getToken(CSubsetParser.LPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(CSubsetParser.RPAREN, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public StatementIfContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_statement);
		try {
			setState(218);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				_localctx = new StatementVarDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(178);
				var_declaration();
				}
				break;
			case 2:
				_localctx = new StatementExpressionStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(179);
				expression_statement();
				}
				break;
			case 3:
				_localctx = new StatementCompoundStmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(180);
				compound_statement();
				}
				break;
			case 4:
				_localctx = new StatementForContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(181);
				match(FOR);
				setState(182);
				match(LPAREN);
				setState(183);
				((StatementForContext)_localctx).e1 = expression_statement();
				setState(184);
				((StatementForContext)_localctx).e2 = expression_statement();
				setState(185);
				expression();
				setState(186);
				match(RPAREN);
				setState(187);
				statement();
				}
				break;
			case 5:
				_localctx = new StatementIfContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(189);
				match(IF);
				setState(190);
				match(LPAREN);
				setState(191);
				expression();
				setState(192);
				match(RPAREN);
				setState(193);
				statement();
				}
				break;
			case 6:
				_localctx = new StatementIfElseContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(195);
				match(IF);
				setState(196);
				match(LPAREN);
				setState(197);
				expression();
				setState(198);
				match(RPAREN);
				setState(199);
				((StatementIfElseContext)_localctx).s1 = statement();
				setState(200);
				match(ELSE);
				setState(201);
				((StatementIfElseContext)_localctx).s2 = statement();
				}
				break;
			case 7:
				_localctx = new StatementWhileContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(203);
				match(WHILE);
				setState(204);
				match(LPAREN);
				setState(205);
				expression();
				setState(206);
				match(RPAREN);
				setState(207);
				statement();
				}
				break;
			case 8:
				_localctx = new StatementPrintlnContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(209);
				match(PRINTLN);
				setState(210);
				match(LPAREN);
				setState(211);
				match(ID);
				setState(212);
				match(RPAREN);
				setState(213);
				match(SEMICOLON);
				}
				break;
			case 9:
				_localctx = new StatementReturnContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(214);
				match(RETURN);
				setState(215);
				expression();
				setState(216);
				match(SEMICOLON);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Expression_statementContext extends ParserRuleContext {
		public Expression_statementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression_statement; }
	 
		public Expression_statementContext() { }
		public void copyFrom(Expression_statementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionStmtEmptyContext extends Expression_statementContext {
		public TerminalNode SEMICOLON() { return getToken(CSubsetParser.SEMICOLON, 0); }
		public ExpressionStmtEmptyContext(Expression_statementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionStmtExpressionContext extends Expression_statementContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(CSubsetParser.SEMICOLON, 0); }
		public ExpressionStmtExpressionContext(Expression_statementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionMissingSemicolonContext extends Expression_statementContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExpressionMissingSemicolonContext(Expression_statementContext ctx) { copyFrom(ctx); }
	}

	public final Expression_statementContext expression_statement() throws RecognitionException {
		Expression_statementContext _localctx = new Expression_statementContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_expression_statement);
		try {
			setState(225);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				_localctx = new ExpressionStmtEmptyContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(220);
				match(SEMICOLON);
				}
				break;
			case 2:
				_localctx = new ExpressionStmtExpressionContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(221);
				expression();
				setState(222);
				match(SEMICOLON);
				}
				break;
			case 3:
				_localctx = new ExpressionMissingSemicolonContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(224);
				expression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VariableContext extends ParserRuleContext {
		public VariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable; }
	 
		public VariableContext() { }
		public void copyFrom(VariableContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class VariableIdContext extends VariableContext {
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public VariableIdContext(VariableContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class VariableArrContext extends VariableContext {
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public TerminalNode LTHIRD() { return getToken(CSubsetParser.LTHIRD, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RTHIRD() { return getToken(CSubsetParser.RTHIRD, 0); }
		public VariableArrContext(VariableContext ctx) { copyFrom(ctx); }
	}

	public final VariableContext variable() throws RecognitionException {
		VariableContext _localctx = new VariableContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_variable);
		try {
			setState(233);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				_localctx = new VariableIdContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(227);
				match(ID);
				}
				break;
			case 2:
				_localctx = new VariableArrContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(228);
				match(ID);
				setState(229);
				match(LTHIRD);
				setState(230);
				expression();
				setState(231);
				match(RTHIRD);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionContext extends ParserRuleContext {
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	 
		public ExpressionContext() { }
		public void copyFrom(ExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionVarAssignLogicContext extends ExpressionContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode ASSIGNOP() { return getToken(CSubsetParser.ASSIGNOP, 0); }
		public Logic_expressionContext logic_expression() {
			return getRuleContext(Logic_expressionContext.class,0);
		}
		public ExpressionVarAssignLogicContext(ExpressionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionLogicExpressionContext extends ExpressionContext {
		public Logic_expressionContext logic_expression() {
			return getRuleContext(Logic_expressionContext.class,0);
		}
		public ExpressionLogicExpressionContext(ExpressionContext ctx) { copyFrom(ctx); }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_expression);
		try {
			setState(240);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				_localctx = new ExpressionLogicExpressionContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(235);
				logic_expression();
				}
				break;
			case 2:
				_localctx = new ExpressionVarAssignLogicContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(236);
				variable();
				setState(237);
				match(ASSIGNOP);
				setState(238);
				logic_expression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Logic_expressionContext extends ParserRuleContext {
		public Logic_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logic_expression; }
	 
		public Logic_expressionContext() { }
		public void copyFrom(Logic_expressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class LogicExprWLogicOpContext extends Logic_expressionContext {
		public Rel_expressionContext r1;
		public Rel_expressionContext r2;
		public TerminalNode LOGICOP() { return getToken(CSubsetParser.LOGICOP, 0); }
		public List<Rel_expressionContext> rel_expression() {
			return getRuleContexts(Rel_expressionContext.class);
		}
		public Rel_expressionContext rel_expression(int i) {
			return getRuleContext(Rel_expressionContext.class,i);
		}
		public LogicExprWLogicOpContext(Logic_expressionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class LogicExprRelExprContext extends Logic_expressionContext {
		public Rel_expressionContext rel_expression() {
			return getRuleContext(Rel_expressionContext.class,0);
		}
		public LogicExprRelExprContext(Logic_expressionContext ctx) { copyFrom(ctx); }
	}

	public final Logic_expressionContext logic_expression() throws RecognitionException {
		Logic_expressionContext _localctx = new Logic_expressionContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_logic_expression);
		try {
			setState(247);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				_localctx = new LogicExprRelExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(242);
				rel_expression();
				}
				break;
			case 2:
				_localctx = new LogicExprWLogicOpContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(243);
				((LogicExprWLogicOpContext)_localctx).r1 = rel_expression();
				setState(244);
				match(LOGICOP);
				setState(245);
				((LogicExprWLogicOpContext)_localctx).r2 = rel_expression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Rel_expressionContext extends ParserRuleContext {
		public Rel_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rel_expression; }
	 
		public Rel_expressionContext() { }
		public void copyFrom(Rel_expressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class RelExprWRelOpContext extends Rel_expressionContext {
		public Simple_expressionContext s1;
		public Simple_expressionContext s2;
		public TerminalNode RELOP() { return getToken(CSubsetParser.RELOP, 0); }
		public List<Simple_expressionContext> simple_expression() {
			return getRuleContexts(Simple_expressionContext.class);
		}
		public Simple_expressionContext simple_expression(int i) {
			return getRuleContext(Simple_expressionContext.class,i);
		}
		public RelExprWRelOpContext(Rel_expressionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class RelExprSimpleExprContext extends Rel_expressionContext {
		public Simple_expressionContext simple_expression() {
			return getRuleContext(Simple_expressionContext.class,0);
		}
		public RelExprSimpleExprContext(Rel_expressionContext ctx) { copyFrom(ctx); }
	}

	public final Rel_expressionContext rel_expression() throws RecognitionException {
		Rel_expressionContext _localctx = new Rel_expressionContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_rel_expression);
		try {
			setState(254);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				_localctx = new RelExprSimpleExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(249);
				simple_expression(0);
				}
				break;
			case 2:
				_localctx = new RelExprWRelOpContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(250);
				((RelExprWRelOpContext)_localctx).s1 = simple_expression(0);
				setState(251);
				match(RELOP);
				setState(252);
				((RelExprWRelOpContext)_localctx).s2 = simple_expression(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Simple_expressionContext extends ParserRuleContext {
		public Simple_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simple_expression; }
	 
		public Simple_expressionContext() { }
		public void copyFrom(Simple_expressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SimpleExprTermContext extends Simple_expressionContext {
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public SimpleExprTermContext(Simple_expressionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StraySimpleExprContext extends Simple_expressionContext {
		public Token stray;
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public TerminalNode ADDOP() { return getToken(CSubsetParser.ADDOP, 0); }
		public TerminalNode ASSIGNOP() { return getToken(CSubsetParser.ASSIGNOP, 0); }
		public TerminalNode RELOP() { return getToken(CSubsetParser.RELOP, 0); }
		public TerminalNode MULOP() { return getToken(CSubsetParser.MULOP, 0); }
		public TerminalNode LOGICOP() { return getToken(CSubsetParser.LOGICOP, 0); }
		public StraySimpleExprContext(Simple_expressionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SimpleExprAddContext extends Simple_expressionContext {
		public Simple_expressionContext simple_expression() {
			return getRuleContext(Simple_expressionContext.class,0);
		}
		public TerminalNode ADDOP() { return getToken(CSubsetParser.ADDOP, 0); }
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public SimpleExprAddContext(Simple_expressionContext ctx) { copyFrom(ctx); }
	}

	public final Simple_expressionContext simple_expression() throws RecognitionException {
		return simple_expression(0);
	}

	private Simple_expressionContext simple_expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		Simple_expressionContext _localctx = new Simple_expressionContext(_ctx, _parentState);
		Simple_expressionContext _prevctx = _localctx;
		int _startState = 34;
		enterRecursionRule(_localctx, 34, RULE_simple_expression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(262);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				{
				_localctx = new SimpleExprTermContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(257);
				term(0);
				}
				break;
			case 2:
				{
				_localctx = new StraySimpleExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(258);
				term(0);
				setState(259);
				match(ADDOP);
				setState(260);
				((StraySimpleExprContext)_localctx).stray = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 947912704L) != 0)) ) {
					((StraySimpleExprContext)_localctx).stray = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(269);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new SimpleExprAddContext(new Simple_expressionContext(_parentctx, _parentState));
					pushNewRecursionContext(_localctx, _startState, RULE_simple_expression);
					setState(264);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(265);
					match(ADDOP);
					setState(266);
					term(0);
					}
					} 
				}
				setState(271);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TermContext extends ParserRuleContext {
		public TermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_term; }
	 
		public TermContext() { }
		public void copyFrom(TermContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class TermUnaryExprContext extends TermContext {
		public Unary_expressionContext unary_expression() {
			return getRuleContext(Unary_expressionContext.class,0);
		}
		public TermUnaryExprContext(TermContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class TermMulContext extends TermContext {
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public TerminalNode MULOP() { return getToken(CSubsetParser.MULOP, 0); }
		public Unary_expressionContext unary_expression() {
			return getRuleContext(Unary_expressionContext.class,0);
		}
		public TermMulContext(TermContext ctx) { copyFrom(ctx); }
	}

	public final TermContext term() throws RecognitionException {
		return term(0);
	}

	private TermContext term(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TermContext _localctx = new TermContext(_ctx, _parentState);
		TermContext _prevctx = _localctx;
		int _startState = 36;
		enterRecursionRule(_localctx, 36, RULE_term, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			_localctx = new TermUnaryExprContext(_localctx);
			_ctx = _localctx;
			_prevctx = _localctx;

			setState(273);
			unary_expression();
			}
			_ctx.stop = _input.LT(-1);
			setState(280);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TermMulContext(new TermContext(_parentctx, _parentState));
					pushNewRecursionContext(_localctx, _startState, RULE_term);
					setState(275);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(276);
					match(MULOP);
					setState(277);
					unary_expression();
					}
					} 
				}
				setState(282);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Unary_expressionContext extends ParserRuleContext {
		public Unary_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unary_expression; }
	 
		public Unary_expressionContext() { }
		public void copyFrom(Unary_expressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class UnaryExprFactorContext extends Unary_expressionContext {
		public FactorContext factor() {
			return getRuleContext(FactorContext.class,0);
		}
		public UnaryExprFactorContext(Unary_expressionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class UnaryExprNotContext extends Unary_expressionContext {
		public TerminalNode NOT() { return getToken(CSubsetParser.NOT, 0); }
		public Unary_expressionContext unary_expression() {
			return getRuleContext(Unary_expressionContext.class,0);
		}
		public UnaryExprNotContext(Unary_expressionContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class UnaryExprAddContext extends Unary_expressionContext {
		public TerminalNode ADDOP() { return getToken(CSubsetParser.ADDOP, 0); }
		public Unary_expressionContext unary_expression() {
			return getRuleContext(Unary_expressionContext.class,0);
		}
		public UnaryExprAddContext(Unary_expressionContext ctx) { copyFrom(ctx); }
	}

	public final Unary_expressionContext unary_expression() throws RecognitionException {
		Unary_expressionContext _localctx = new Unary_expressionContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_unary_expression);
		try {
			setState(288);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ADDOP:
				_localctx = new UnaryExprAddContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(283);
				match(ADDOP);
				setState(284);
				unary_expression();
				}
				break;
			case NOT:
				_localctx = new UnaryExprNotContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(285);
				match(NOT);
				setState(286);
				unary_expression();
				}
				break;
			case LPAREN:
			case ID:
			case CONST_INT:
			case CONST_FLOAT:
				_localctx = new UnaryExprFactorContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(287);
				factor();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FactorContext extends ParserRuleContext {
		public FactorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_factor; }
	 
		public FactorContext() { }
		public void copyFrom(FactorContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FactorConstIntContext extends FactorContext {
		public TerminalNode CONST_INT() { return getToken(CSubsetParser.CONST_INT, 0); }
		public FactorConstIntContext(FactorContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FactorIncOpContext extends FactorContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode INCOP() { return getToken(CSubsetParser.INCOP, 0); }
		public FactorIncOpContext(FactorContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FactorDecOpContext extends FactorContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode DECOP() { return getToken(CSubsetParser.DECOP, 0); }
		public FactorDecOpContext(FactorContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FactorVarContext extends FactorContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public FactorVarContext(FactorContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FactorExprContext extends FactorContext {
		public TerminalNode LPAREN() { return getToken(CSubsetParser.LPAREN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(CSubsetParser.RPAREN, 0); }
		public FactorExprContext(FactorContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FactorConstFloatContext extends FactorContext {
		public TerminalNode CONST_FLOAT() { return getToken(CSubsetParser.CONST_FLOAT, 0); }
		public FactorConstFloatContext(FactorContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FactorArgListContext extends FactorContext {
		public TerminalNode ID() { return getToken(CSubsetParser.ID, 0); }
		public TerminalNode LPAREN() { return getToken(CSubsetParser.LPAREN, 0); }
		public Argument_listContext argument_list() {
			return getRuleContext(Argument_listContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(CSubsetParser.RPAREN, 0); }
		public FactorArgListContext(FactorContext ctx) { copyFrom(ctx); }
	}

	public final FactorContext factor() throws RecognitionException {
		FactorContext _localctx = new FactorContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_factor);
		try {
			setState(308);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
			case 1:
				_localctx = new FactorVarContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(290);
				variable();
				}
				break;
			case 2:
				_localctx = new FactorArgListContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(291);
				match(ID);
				setState(292);
				match(LPAREN);
				setState(293);
				argument_list();
				setState(294);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new FactorExprContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(296);
				match(LPAREN);
				setState(297);
				expression();
				setState(298);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new FactorConstIntContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(300);
				match(CONST_INT);
				}
				break;
			case 5:
				_localctx = new FactorConstFloatContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(301);
				match(CONST_FLOAT);
				}
				break;
			case 6:
				_localctx = new FactorIncOpContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(302);
				variable();
				setState(303);
				match(INCOP);
				}
				break;
			case 7:
				_localctx = new FactorDecOpContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(305);
				variable();
				setState(306);
				match(DECOP);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Argument_listContext extends ParserRuleContext {
		public Argument_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argument_list; }
	 
		public Argument_listContext() { }
		public void copyFrom(Argument_listContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ArgumentListNoArgsContext extends Argument_listContext {
		public ArgumentListNoArgsContext(Argument_listContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ArgumentListMultipleArgsContext extends Argument_listContext {
		public ArgumentsContext arguments() {
			return getRuleContext(ArgumentsContext.class,0);
		}
		public ArgumentListMultipleArgsContext(Argument_listContext ctx) { copyFrom(ctx); }
	}

	public final Argument_listContext argument_list() throws RecognitionException {
		Argument_listContext _localctx = new Argument_listContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_argument_list);
		try {
			setState(312);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
			case ADDOP:
			case NOT:
			case ID:
			case CONST_INT:
			case CONST_FLOAT:
				_localctx = new ArgumentListMultipleArgsContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(310);
				arguments(0);
				}
				break;
			case RPAREN:
				_localctx = new ArgumentListNoArgsContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArgumentsContext extends ParserRuleContext {
		public ArgumentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arguments; }
	 
		public ArgumentsContext() { }
		public void copyFrom(ArgumentsContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ArgumentsLogicExprContext extends ArgumentsContext {
		public Logic_expressionContext logic_expression() {
			return getRuleContext(Logic_expressionContext.class,0);
		}
		public ArgumentsLogicExprContext(ArgumentsContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ArgumentsCommaLogicExprContext extends ArgumentsContext {
		public ArgumentsContext arguments() {
			return getRuleContext(ArgumentsContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CSubsetParser.COMMA, 0); }
		public Logic_expressionContext logic_expression() {
			return getRuleContext(Logic_expressionContext.class,0);
		}
		public ArgumentsCommaLogicExprContext(ArgumentsContext ctx) { copyFrom(ctx); }
	}

	public final ArgumentsContext arguments() throws RecognitionException {
		return arguments(0);
	}

	private ArgumentsContext arguments(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ArgumentsContext _localctx = new ArgumentsContext(_ctx, _parentState);
		ArgumentsContext _prevctx = _localctx;
		int _startState = 44;
		enterRecursionRule(_localctx, 44, RULE_arguments, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			_localctx = new ArgumentsLogicExprContext(_localctx);
			_ctx = _localctx;
			_prevctx = _localctx;

			setState(315);
			logic_expression();
			}
			_ctx.stop = _input.LT(-1);
			setState(322);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ArgumentsCommaLogicExprContext(new ArgumentsContext(_parentctx, _parentState));
					pushNewRecursionContext(_localctx, _startState, RULE_arguments);
					setState(317);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(318);
					match(COMMA);
					setState(319);
					logic_expression();
					}
					} 
				}
				setState(324);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 1:
			return program_sempred((ProgramContext)_localctx, predIndex);
		case 5:
			return parameter_list_sempred((Parameter_listContext)_localctx, predIndex);
		case 9:
			return declaration_list_sempred((Declaration_listContext)_localctx, predIndex);
		case 10:
			return statements_sempred((StatementsContext)_localctx, predIndex);
		case 17:
			return simple_expression_sempred((Simple_expressionContext)_localctx, predIndex);
		case 18:
			return term_sempred((TermContext)_localctx, predIndex);
		case 22:
			return arguments_sempred((ArgumentsContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean program_sempred(ProgramContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean parameter_list_sempred(Parameter_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 5);
		case 2:
			return precpred(_ctx, 4);
		}
		return true;
	}
	private boolean declaration_list_sempred(Declaration_listContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return precpred(_ctx, 7);
		case 4:
			return precpred(_ctx, 6);
		case 5:
			return precpred(_ctx, 3);
		}
		return true;
	}
	private boolean statements_sempred(StatementsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 6:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean simple_expression_sempred(Simple_expressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean term_sempred(TermContext _localctx, int predIndex) {
		switch (predIndex) {
		case 8:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean arguments_sempred(ArgumentsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 9:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001 \u0146\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u00016\b\u0001\n\u0001\f\u0001"+
		"9\t\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u0002>\b\u0002\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0003\u0003M\b\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004\\\b\u0004\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0003\u0005f\b\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0005"+
		"\u0005p\b\u0005\n\u0005\f\u0005s\t\u0005\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006{\b\u0006\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0003"+
		"\b\u0084\b\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0003\t\u0093\b\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0005\t\u00a4\b\t\n\t\f\t\u00a7\t\t"+
		"\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0005\n\u00ae\b\n\n\n\f\n\u00b1"+
		"\t\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u00db"+
		"\b\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003\f\u00e2\b\f\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0003\r\u00ea\b\r\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0003\u000e\u00f1\b\u000e"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0003\u000f"+
		"\u00f8\b\u000f\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0003\u0010\u00ff\b\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0003\u0011\u0107\b\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0005\u0011\u010c\b\u0011\n\u0011\f\u0011\u010f\t\u0011\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0005"+
		"\u0012\u0117\b\u0012\n\u0012\f\u0012\u011a\t\u0012\u0001\u0013\u0001\u0013"+
		"\u0001\u0013\u0001\u0013\u0001\u0013\u0003\u0013\u0121\b\u0013\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0003\u0014"+
		"\u0135\b\u0014\u0001\u0015\u0001\u0015\u0003\u0015\u0139\b\u0015\u0001"+
		"\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0005"+
		"\u0016\u0141\b\u0016\n\u0016\f\u0016\u0144\t\u0016\u0001\u0016\u0000\u0007"+
		"\u0002\n\u0012\u0014\"$,\u0017\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010"+
		"\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,\u0000\u0001\u0002\u0000"+
		"\u0017\u0017\u001b\u001d\u015c\u0000.\u0001\u0000\u0000\u0000\u00020\u0001"+
		"\u0000\u0000\u0000\u0004=\u0001\u0000\u0000\u0000\u0006L\u0001\u0000\u0000"+
		"\u0000\b[\u0001\u0000\u0000\u0000\ne\u0001\u0000\u0000\u0000\fz\u0001"+
		"\u0000\u0000\u0000\u000e|\u0001\u0000\u0000\u0000\u0010\u0083\u0001\u0000"+
		"\u0000\u0000\u0012\u0092\u0001\u0000\u0000\u0000\u0014\u00a8\u0001\u0000"+
		"\u0000\u0000\u0016\u00da\u0001\u0000\u0000\u0000\u0018\u00e1\u0001\u0000"+
		"\u0000\u0000\u001a\u00e9\u0001\u0000\u0000\u0000\u001c\u00f0\u0001\u0000"+
		"\u0000\u0000\u001e\u00f7\u0001\u0000\u0000\u0000 \u00fe\u0001\u0000\u0000"+
		"\u0000\"\u0106\u0001\u0000\u0000\u0000$\u0110\u0001\u0000\u0000\u0000"+
		"&\u0120\u0001\u0000\u0000\u0000(\u0134\u0001\u0000\u0000\u0000*\u0138"+
		"\u0001\u0000\u0000\u0000,\u013a\u0001\u0000\u0000\u0000./\u0003\u0002"+
		"\u0001\u0000/\u0001\u0001\u0000\u0000\u000001\u0006\u0001\uffff\uffff"+
		"\u000012\u0003\u0004\u0002\u000027\u0001\u0000\u0000\u000034\n\u0002\u0000"+
		"\u000046\u0003\u0004\u0002\u000053\u0001\u0000\u0000\u000069\u0001\u0000"+
		"\u0000\u000075\u0001\u0000\u0000\u000078\u0001\u0000\u0000\u00008\u0003"+
		"\u0001\u0000\u0000\u000097\u0001\u0000\u0000\u0000:>\u0003\u000e\u0007"+
		"\u0000;>\u0003\u0006\u0003\u0000<>\u0003\b\u0004\u0000=:\u0001\u0000\u0000"+
		"\u0000=;\u0001\u0000\u0000\u0000=<\u0001\u0000\u0000\u0000>\u0005\u0001"+
		"\u0000\u0000\u0000?@\u0003\u0010\b\u0000@A\u0005\u001e\u0000\u0000AB\u0005"+
		"\u000e\u0000\u0000BC\u0003\n\u0005\u0000CD\u0005\u000f\u0000\u0000DE\u0005"+
		"\u0014\u0000\u0000EM\u0001\u0000\u0000\u0000FG\u0003\u0010\b\u0000GH\u0005"+
		"\u001e\u0000\u0000HI\u0005\u000e\u0000\u0000IJ\u0005\u000f\u0000\u0000"+
		"JK\u0005\u0014\u0000\u0000KM\u0001\u0000\u0000\u0000L?\u0001\u0000\u0000"+
		"\u0000LF\u0001\u0000\u0000\u0000M\u0007\u0001\u0000\u0000\u0000NO\u0003"+
		"\u0010\b\u0000OP\u0005\u001e\u0000\u0000PQ\u0005\u000e\u0000\u0000QR\u0003"+
		"\n\u0005\u0000RS\u0005\u000f\u0000\u0000ST\u0003\f\u0006\u0000T\\\u0001"+
		"\u0000\u0000\u0000UV\u0003\u0010\b\u0000VW\u0005\u001e\u0000\u0000WX\u0005"+
		"\u000e\u0000\u0000XY\u0005\u000f\u0000\u0000YZ\u0003\f\u0006\u0000Z\\"+
		"\u0001\u0000\u0000\u0000[N\u0001\u0000\u0000\u0000[U\u0001\u0000\u0000"+
		"\u0000\\\t\u0001\u0000\u0000\u0000]^\u0006\u0005\uffff\uffff\u0000^_\u0003"+
		"\u0010\b\u0000_`\u0005\u001e\u0000\u0000`f\u0001\u0000\u0000\u0000af\u0003"+
		"\u0010\b\u0000bc\u0003\u0010\b\u0000cd\t\u0000\u0000\u0000df\u0001\u0000"+
		"\u0000\u0000e]\u0001\u0000\u0000\u0000ea\u0001\u0000\u0000\u0000eb\u0001"+
		"\u0000\u0000\u0000fq\u0001\u0000\u0000\u0000gh\n\u0005\u0000\u0000hi\u0005"+
		"\u0015\u0000\u0000ij\u0003\u0010\b\u0000jk\u0005\u001e\u0000\u0000kp\u0001"+
		"\u0000\u0000\u0000lm\n\u0004\u0000\u0000mn\u0005\u0015\u0000\u0000np\u0003"+
		"\u0010\b\u0000og\u0001\u0000\u0000\u0000ol\u0001\u0000\u0000\u0000ps\u0001"+
		"\u0000\u0000\u0000qo\u0001\u0000\u0000\u0000qr\u0001\u0000\u0000\u0000"+
		"r\u000b\u0001\u0000\u0000\u0000sq\u0001\u0000\u0000\u0000tu\u0005\u0010"+
		"\u0000\u0000uv\u0003\u0014\n\u0000vw\u0005\u0011\u0000\u0000w{\u0001\u0000"+
		"\u0000\u0000xy\u0005\u0010\u0000\u0000y{\u0005\u0011\u0000\u0000zt\u0001"+
		"\u0000\u0000\u0000zx\u0001\u0000\u0000\u0000{\r\u0001\u0000\u0000\u0000"+
		"|}\u0003\u0010\b\u0000}~\u0003\u0012\t\u0000~\u007f\u0005\u0014\u0000"+
		"\u0000\u007f\u000f\u0001\u0000\u0000\u0000\u0080\u0084\u0005\u000b\u0000"+
		"\u0000\u0081\u0084\u0005\f\u0000\u0000\u0082\u0084\u0005\r\u0000\u0000"+
		"\u0083\u0080\u0001\u0000\u0000\u0000\u0083\u0081\u0001\u0000\u0000\u0000"+
		"\u0083\u0082\u0001\u0000\u0000\u0000\u0084\u0011\u0001\u0000\u0000\u0000"+
		"\u0085\u0086\u0006\t\uffff\uffff\u0000\u0086\u0093\u0005\u001e\u0000\u0000"+
		"\u0087\u0088\u0005\u001e\u0000\u0000\u0088\u0089\u0005\u0012\u0000\u0000"+
		"\u0089\u008a\u0005\u001f\u0000\u0000\u008a\u0093\u0005\u0013\u0000\u0000"+
		"\u008b\u008c\u0005\u001e\u0000\u0000\u008c\u008d\u0005\u0012\u0000\u0000"+
		"\u008d\u008e\u0005 \u0000\u0000\u008e\u0093\u0005\u0013\u0000\u0000\u008f"+
		"\u0090\u0005\u001e\u0000\u0000\u0090\u0091\t\u0000\u0000\u0000\u0091\u0093"+
		"\u0005\u001e\u0000\u0000\u0092\u0085\u0001\u0000\u0000\u0000\u0092\u0087"+
		"\u0001\u0000\u0000\u0000\u0092\u008b\u0001\u0000\u0000\u0000\u0092\u008f"+
		"\u0001\u0000\u0000\u0000\u0093\u00a5\u0001\u0000\u0000\u0000\u0094\u0095"+
		"\n\u0007\u0000\u0000\u0095\u0096\u0005\u0015\u0000\u0000\u0096\u00a4\u0005"+
		"\u001e\u0000\u0000\u0097\u0098\n\u0006\u0000\u0000\u0098\u0099\u0005\u0015"+
		"\u0000\u0000\u0099\u009a\u0005\u001e\u0000\u0000\u009a\u009b\u0005\u0012"+
		"\u0000\u0000\u009b\u009c\u0005\u001f\u0000\u0000\u009c\u00a4\u0005\u0013"+
		"\u0000\u0000\u009d\u009e\n\u0003\u0000\u0000\u009e\u009f\u0005\u0015\u0000"+
		"\u0000\u009f\u00a0\u0005\u001e\u0000\u0000\u00a0\u00a1\u0005\u0012\u0000"+
		"\u0000\u00a1\u00a2\u0005 \u0000\u0000\u00a2\u00a4\u0005\u0013\u0000\u0000"+
		"\u00a3\u0094\u0001\u0000\u0000\u0000\u00a3\u0097\u0001\u0000\u0000\u0000"+
		"\u00a3\u009d\u0001\u0000\u0000\u0000\u00a4\u00a7\u0001\u0000\u0000\u0000"+
		"\u00a5\u00a3\u0001\u0000\u0000\u0000\u00a5\u00a6\u0001\u0000\u0000\u0000"+
		"\u00a6\u0013\u0001\u0000\u0000\u0000\u00a7\u00a5\u0001\u0000\u0000\u0000"+
		"\u00a8\u00a9\u0006\n\uffff\uffff\u0000\u00a9\u00aa\u0003\u0016\u000b\u0000"+
		"\u00aa\u00af\u0001\u0000\u0000\u0000\u00ab\u00ac\n\u0001\u0000\u0000\u00ac"+
		"\u00ae\u0003\u0016\u000b\u0000\u00ad\u00ab\u0001\u0000\u0000\u0000\u00ae"+
		"\u00b1\u0001\u0000\u0000\u0000\u00af\u00ad\u0001\u0000\u0000\u0000\u00af"+
		"\u00b0\u0001\u0000\u0000\u0000\u00b0\u0015\u0001\u0000\u0000\u0000\u00b1"+
		"\u00af\u0001\u0000\u0000\u0000\u00b2\u00db\u0003\u000e\u0007\u0000\u00b3"+
		"\u00db\u0003\u0018\f\u0000\u00b4\u00db\u0003\f\u0006\u0000\u00b5\u00b6"+
		"\u0005\u0007\u0000\u0000\u00b6\u00b7\u0005\u000e\u0000\u0000\u00b7\u00b8"+
		"\u0003\u0018\f\u0000\u00b8\u00b9\u0003\u0018\f\u0000\u00b9\u00ba\u0003"+
		"\u001c\u000e\u0000\u00ba\u00bb\u0005\u000f\u0000\u0000\u00bb\u00bc\u0003"+
		"\u0016\u000b\u0000\u00bc\u00db\u0001\u0000\u0000\u0000\u00bd\u00be\u0005"+
		"\u0005\u0000\u0000\u00be\u00bf\u0005\u000e\u0000\u0000\u00bf\u00c0\u0003"+
		"\u001c\u000e\u0000\u00c0\u00c1\u0005\u000f\u0000\u0000\u00c1\u00c2\u0003"+
		"\u0016\u000b\u0000\u00c2\u00db\u0001\u0000\u0000\u0000\u00c3\u00c4\u0005"+
		"\u0005\u0000\u0000\u00c4\u00c5\u0005\u000e\u0000\u0000\u00c5\u00c6\u0003"+
		"\u001c\u000e\u0000\u00c6\u00c7\u0005\u000f\u0000\u0000\u00c7\u00c8\u0003"+
		"\u0016\u000b\u0000\u00c8\u00c9\u0005\u0006\u0000\u0000\u00c9\u00ca\u0003"+
		"\u0016\u000b\u0000\u00ca\u00db\u0001\u0000\u0000\u0000\u00cb\u00cc\u0005"+
		"\b\u0000\u0000\u00cc\u00cd\u0005\u000e\u0000\u0000\u00cd\u00ce\u0003\u001c"+
		"\u000e\u0000\u00ce\u00cf\u0005\u000f\u0000\u0000\u00cf\u00d0\u0003\u0016"+
		"\u000b\u0000\u00d0\u00db\u0001\u0000\u0000\u0000\u00d1\u00d2\u0005\t\u0000"+
		"\u0000\u00d2\u00d3\u0005\u000e\u0000\u0000\u00d3\u00d4\u0005\u001e\u0000"+
		"\u0000\u00d4\u00d5\u0005\u000f\u0000\u0000\u00d5\u00db\u0005\u0014\u0000"+
		"\u0000\u00d6\u00d7\u0005\n\u0000\u0000\u00d7\u00d8\u0003\u001c\u000e\u0000"+
		"\u00d8\u00d9\u0005\u0014\u0000\u0000\u00d9\u00db\u0001\u0000\u0000\u0000"+
		"\u00da\u00b2\u0001\u0000\u0000\u0000\u00da\u00b3\u0001\u0000\u0000\u0000"+
		"\u00da\u00b4\u0001\u0000\u0000\u0000\u00da\u00b5\u0001\u0000\u0000\u0000"+
		"\u00da\u00bd\u0001\u0000\u0000\u0000\u00da\u00c3\u0001\u0000\u0000\u0000"+
		"\u00da\u00cb\u0001\u0000\u0000\u0000\u00da\u00d1\u0001\u0000\u0000\u0000"+
		"\u00da\u00d6\u0001\u0000\u0000\u0000\u00db\u0017\u0001\u0000\u0000\u0000"+
		"\u00dc\u00e2\u0005\u0014\u0000\u0000\u00dd\u00de\u0003\u001c\u000e\u0000"+
		"\u00de\u00df\u0005\u0014\u0000\u0000\u00df\u00e2\u0001\u0000\u0000\u0000"+
		"\u00e0\u00e2\u0003\u001c\u000e\u0000\u00e1\u00dc\u0001\u0000\u0000\u0000"+
		"\u00e1\u00dd\u0001\u0000\u0000\u0000\u00e1\u00e0\u0001\u0000\u0000\u0000"+
		"\u00e2\u0019\u0001\u0000\u0000\u0000\u00e3\u00ea\u0005\u001e\u0000\u0000"+
		"\u00e4\u00e5\u0005\u001e\u0000\u0000\u00e5\u00e6\u0005\u0012\u0000\u0000"+
		"\u00e6\u00e7\u0003\u001c\u000e\u0000\u00e7\u00e8\u0005\u0013\u0000\u0000"+
		"\u00e8\u00ea\u0001\u0000\u0000\u0000\u00e9\u00e3\u0001\u0000\u0000\u0000"+
		"\u00e9\u00e4\u0001\u0000\u0000\u0000\u00ea\u001b\u0001\u0000\u0000\u0000"+
		"\u00eb\u00f1\u0003\u001e\u000f\u0000\u00ec\u00ed\u0003\u001a\r\u0000\u00ed"+
		"\u00ee\u0005\u001d\u0000\u0000\u00ee\u00ef\u0003\u001e\u000f\u0000\u00ef"+
		"\u00f1\u0001\u0000\u0000\u0000\u00f0\u00eb\u0001\u0000\u0000\u0000\u00f0"+
		"\u00ec\u0001\u0000\u0000\u0000\u00f1\u001d\u0001\u0000\u0000\u0000\u00f2"+
		"\u00f8\u0003 \u0010\u0000\u00f3\u00f4\u0003 \u0010\u0000\u00f4\u00f5\u0005"+
		"\u001c\u0000\u0000\u00f5\u00f6\u0003 \u0010\u0000\u00f6\u00f8\u0001\u0000"+
		"\u0000\u0000\u00f7\u00f2\u0001\u0000\u0000\u0000\u00f7\u00f3\u0001\u0000"+
		"\u0000\u0000\u00f8\u001f\u0001\u0000\u0000\u0000\u00f9\u00ff\u0003\"\u0011"+
		"\u0000\u00fa\u00fb\u0003\"\u0011\u0000\u00fb\u00fc\u0005\u001b\u0000\u0000"+
		"\u00fc\u00fd\u0003\"\u0011\u0000\u00fd\u00ff\u0001\u0000\u0000\u0000\u00fe"+
		"\u00f9\u0001\u0000\u0000\u0000\u00fe\u00fa\u0001\u0000\u0000\u0000\u00ff"+
		"!\u0001\u0000\u0000\u0000\u0100\u0101\u0006\u0011\uffff\uffff\u0000\u0101"+
		"\u0107\u0003$\u0012\u0000\u0102\u0103\u0003$\u0012\u0000\u0103\u0104\u0005"+
		"\u0016\u0000\u0000\u0104\u0105\u0007\u0000\u0000\u0000\u0105\u0107\u0001"+
		"\u0000\u0000\u0000\u0106\u0100\u0001\u0000\u0000\u0000\u0106\u0102\u0001"+
		"\u0000\u0000\u0000\u0107\u010d\u0001\u0000\u0000\u0000\u0108\u0109\n\u0002"+
		"\u0000\u0000\u0109\u010a\u0005\u0016\u0000\u0000\u010a\u010c\u0003$\u0012"+
		"\u0000\u010b\u0108\u0001\u0000\u0000\u0000\u010c\u010f\u0001\u0000\u0000"+
		"\u0000\u010d\u010b\u0001\u0000\u0000\u0000\u010d\u010e\u0001\u0000\u0000"+
		"\u0000\u010e#\u0001\u0000\u0000\u0000\u010f\u010d\u0001\u0000\u0000\u0000"+
		"\u0110\u0111\u0006\u0012\uffff\uffff\u0000\u0111\u0112\u0003&\u0013\u0000"+
		"\u0112\u0118\u0001\u0000\u0000\u0000\u0113\u0114\n\u0001\u0000\u0000\u0114"+
		"\u0115\u0005\u0017\u0000\u0000\u0115\u0117\u0003&\u0013\u0000\u0116\u0113"+
		"\u0001\u0000\u0000\u0000\u0117\u011a\u0001\u0000\u0000\u0000\u0118\u0116"+
		"\u0001\u0000\u0000\u0000\u0118\u0119\u0001\u0000\u0000\u0000\u0119%\u0001"+
		"\u0000\u0000\u0000\u011a\u0118\u0001\u0000\u0000\u0000\u011b\u011c\u0005"+
		"\u0016\u0000\u0000\u011c\u0121\u0003&\u0013\u0000\u011d\u011e\u0005\u001a"+
		"\u0000\u0000\u011e\u0121\u0003&\u0013\u0000\u011f\u0121\u0003(\u0014\u0000"+
		"\u0120\u011b\u0001\u0000\u0000\u0000\u0120\u011d\u0001\u0000\u0000\u0000"+
		"\u0120\u011f\u0001\u0000\u0000\u0000\u0121\'\u0001\u0000\u0000\u0000\u0122"+
		"\u0135\u0003\u001a\r\u0000\u0123\u0124\u0005\u001e\u0000\u0000\u0124\u0125"+
		"\u0005\u000e\u0000\u0000\u0125\u0126\u0003*\u0015\u0000\u0126\u0127\u0005"+
		"\u000f\u0000\u0000\u0127\u0135\u0001\u0000\u0000\u0000\u0128\u0129\u0005"+
		"\u000e\u0000\u0000\u0129\u012a\u0003\u001c\u000e\u0000\u012a\u012b\u0005"+
		"\u000f\u0000\u0000\u012b\u0135\u0001\u0000\u0000\u0000\u012c\u0135\u0005"+
		"\u001f\u0000\u0000\u012d\u0135\u0005 \u0000\u0000\u012e\u012f\u0003\u001a"+
		"\r\u0000\u012f\u0130\u0005\u0018\u0000\u0000\u0130\u0135\u0001\u0000\u0000"+
		"\u0000\u0131\u0132\u0003\u001a\r\u0000\u0132\u0133\u0005\u0019\u0000\u0000"+
		"\u0133\u0135\u0001\u0000\u0000\u0000\u0134\u0122\u0001\u0000\u0000\u0000"+
		"\u0134\u0123\u0001\u0000\u0000\u0000\u0134\u0128\u0001\u0000\u0000\u0000"+
		"\u0134\u012c\u0001\u0000\u0000\u0000\u0134\u012d\u0001\u0000\u0000\u0000"+
		"\u0134\u012e\u0001\u0000\u0000\u0000\u0134\u0131\u0001\u0000\u0000\u0000"+
		"\u0135)\u0001\u0000\u0000\u0000\u0136\u0139\u0003,\u0016\u0000\u0137\u0139"+
		"\u0001\u0000\u0000\u0000\u0138\u0136\u0001\u0000\u0000\u0000\u0138\u0137"+
		"\u0001\u0000\u0000\u0000\u0139+\u0001\u0000\u0000\u0000\u013a\u013b\u0006"+
		"\u0016\uffff\uffff\u0000\u013b\u013c\u0003\u001e\u000f\u0000\u013c\u0142"+
		"\u0001\u0000\u0000\u0000\u013d\u013e\n\u0002\u0000\u0000\u013e\u013f\u0005"+
		"\u0015\u0000\u0000\u013f\u0141\u0003\u001e\u000f\u0000\u0140\u013d\u0001"+
		"\u0000\u0000\u0000\u0141\u0144\u0001\u0000\u0000\u0000\u0142\u0140\u0001"+
		"\u0000\u0000\u0000\u0142\u0143\u0001\u0000\u0000\u0000\u0143-\u0001\u0000"+
		"\u0000\u0000\u0144\u0142\u0001\u0000\u0000\u0000\u001a7=L[eoqz\u0083\u0092"+
		"\u00a3\u00a5\u00af\u00da\u00e1\u00e9\u00f0\u00f7\u00fe\u0106\u010d\u0118"+
		"\u0120\u0134\u0138\u0142";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}