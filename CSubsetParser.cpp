
// Generated from CSubset.g4 by ANTLR 4.13.2


#include "CSubsetVisitor.h"

#include "CSubsetParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CSubsetParserStaticData final {
  CSubsetParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CSubsetParserStaticData(const CSubsetParserStaticData&) = delete;
  CSubsetParserStaticData(CSubsetParserStaticData&&) = delete;
  CSubsetParserStaticData& operator=(const CSubsetParserStaticData&) = delete;
  CSubsetParserStaticData& operator=(CSubsetParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag csubsetParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CSubsetParserStaticData> csubsetParserStaticData = nullptr;

void csubsetParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (csubsetParserStaticData != nullptr) {
    return;
  }
#else
  assert(csubsetParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CSubsetParserStaticData>(
    std::vector<std::string>{
      "start", "program", "unit", "func_declaration", "func_definition", 
      "parameter_list", "compound_statement", "var_declaration", "type_specifier", 
      "declaration_list", "statements", "statement", "expression_statement", 
      "variable", "expression", "logic_expression", "rel_expression", "simple_expression", 
      "term", "unary_expression", "factor", "argument_list", "arguments"
    },
    std::vector<std::string>{
      "", "", "", "", "", "'if'", "'else'", "'for'", "'while'", "'println'", 
      "'return'", "'int'", "'float'", "'void'", "'('", "')'", "'{'", "'}'", 
      "'['", "']'", "';'", "','", "", "", "'++'", "'--'", "'!'", "", "", 
      "'='"
    },
    std::vector<std::string>{
      "", "LINE_COMMENT", "BLOCK_COMMENT", "STRING", "WS", "IF", "ELSE", 
      "FOR", "WHILE", "PRINTLN", "RETURN", "INT", "FLOAT", "VOID", "LPAREN", 
      "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", 
      "ADDOP", "MULOP", "INCOP", "DECOP", "NOT", "RELOP", "LOGICOP", "ASSIGNOP", 
      "ID", "CONST_INT", "CONST_FLOAT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,326,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,1,0,1,1,1,1,1,1,1,1,1,1,5,1,54,8,1,10,1,12,1,57,9,1,
  	1,2,1,2,1,2,3,2,62,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,3,3,77,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	3,4,92,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,102,8,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,5,5,112,8,5,10,5,12,5,115,9,5,1,6,1,6,1,6,1,6,1,6,1,
  	6,3,6,123,8,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,3,8,132,8,8,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,147,8,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,164,8,9,10,9,12,9,167,9,9,1,
  	10,1,10,1,10,1,10,1,10,5,10,174,8,10,10,10,12,10,177,9,10,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,219,8,11,1,12,1,
  	12,1,12,1,12,1,12,3,12,226,8,12,1,13,1,13,1,13,1,13,1,13,1,13,3,13,234,
  	8,13,1,14,1,14,1,14,1,14,1,14,3,14,241,8,14,1,15,1,15,1,15,1,15,1,15,
  	3,15,248,8,15,1,16,1,16,1,16,1,16,1,16,3,16,255,8,16,1,17,1,17,1,17,1,
  	17,1,17,1,17,3,17,263,8,17,1,17,1,17,1,17,5,17,268,8,17,10,17,12,17,271,
  	9,17,1,18,1,18,1,18,1,18,1,18,1,18,5,18,279,8,18,10,18,12,18,282,9,18,
  	1,19,1,19,1,19,1,19,1,19,3,19,289,8,19,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,309,
  	8,20,1,21,1,21,3,21,313,8,21,1,22,1,22,1,22,1,22,1,22,1,22,5,22,321,8,
  	22,10,22,12,22,324,9,22,1,22,0,7,2,10,18,20,34,36,44,23,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,0,1,2,0,23,23,27,29,
  	348,0,46,1,0,0,0,2,48,1,0,0,0,4,61,1,0,0,0,6,76,1,0,0,0,8,91,1,0,0,0,
  	10,101,1,0,0,0,12,122,1,0,0,0,14,124,1,0,0,0,16,131,1,0,0,0,18,146,1,
  	0,0,0,20,168,1,0,0,0,22,218,1,0,0,0,24,225,1,0,0,0,26,233,1,0,0,0,28,
  	240,1,0,0,0,30,247,1,0,0,0,32,254,1,0,0,0,34,262,1,0,0,0,36,272,1,0,0,
  	0,38,288,1,0,0,0,40,308,1,0,0,0,42,312,1,0,0,0,44,314,1,0,0,0,46,47,3,
  	2,1,0,47,1,1,0,0,0,48,49,6,1,-1,0,49,50,3,4,2,0,50,55,1,0,0,0,51,52,10,
  	2,0,0,52,54,3,4,2,0,53,51,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,
  	0,0,0,56,3,1,0,0,0,57,55,1,0,0,0,58,62,3,14,7,0,59,62,3,6,3,0,60,62,3,
  	8,4,0,61,58,1,0,0,0,61,59,1,0,0,0,61,60,1,0,0,0,62,5,1,0,0,0,63,64,3,
  	16,8,0,64,65,5,30,0,0,65,66,5,14,0,0,66,67,3,10,5,0,67,68,5,15,0,0,68,
  	69,5,20,0,0,69,77,1,0,0,0,70,71,3,16,8,0,71,72,5,30,0,0,72,73,5,14,0,
  	0,73,74,5,15,0,0,74,75,5,20,0,0,75,77,1,0,0,0,76,63,1,0,0,0,76,70,1,0,
  	0,0,77,7,1,0,0,0,78,79,3,16,8,0,79,80,5,30,0,0,80,81,5,14,0,0,81,82,3,
  	10,5,0,82,83,5,15,0,0,83,84,3,12,6,0,84,92,1,0,0,0,85,86,3,16,8,0,86,
  	87,5,30,0,0,87,88,5,14,0,0,88,89,5,15,0,0,89,90,3,12,6,0,90,92,1,0,0,
  	0,91,78,1,0,0,0,91,85,1,0,0,0,92,9,1,0,0,0,93,94,6,5,-1,0,94,95,3,16,
  	8,0,95,96,5,30,0,0,96,102,1,0,0,0,97,102,3,16,8,0,98,99,3,16,8,0,99,100,
  	9,0,0,0,100,102,1,0,0,0,101,93,1,0,0,0,101,97,1,0,0,0,101,98,1,0,0,0,
  	102,113,1,0,0,0,103,104,10,5,0,0,104,105,5,21,0,0,105,106,3,16,8,0,106,
  	107,5,30,0,0,107,112,1,0,0,0,108,109,10,4,0,0,109,110,5,21,0,0,110,112,
  	3,16,8,0,111,103,1,0,0,0,111,108,1,0,0,0,112,115,1,0,0,0,113,111,1,0,
  	0,0,113,114,1,0,0,0,114,11,1,0,0,0,115,113,1,0,0,0,116,117,5,16,0,0,117,
  	118,3,20,10,0,118,119,5,17,0,0,119,123,1,0,0,0,120,121,5,16,0,0,121,123,
  	5,17,0,0,122,116,1,0,0,0,122,120,1,0,0,0,123,13,1,0,0,0,124,125,3,16,
  	8,0,125,126,3,18,9,0,126,127,5,20,0,0,127,15,1,0,0,0,128,132,5,11,0,0,
  	129,132,5,12,0,0,130,132,5,13,0,0,131,128,1,0,0,0,131,129,1,0,0,0,131,
  	130,1,0,0,0,132,17,1,0,0,0,133,134,6,9,-1,0,134,147,5,30,0,0,135,136,
  	5,30,0,0,136,137,5,18,0,0,137,138,5,31,0,0,138,147,5,19,0,0,139,140,5,
  	30,0,0,140,141,5,18,0,0,141,142,5,32,0,0,142,147,5,19,0,0,143,144,5,30,
  	0,0,144,145,9,0,0,0,145,147,5,30,0,0,146,133,1,0,0,0,146,135,1,0,0,0,
  	146,139,1,0,0,0,146,143,1,0,0,0,147,165,1,0,0,0,148,149,10,7,0,0,149,
  	150,5,21,0,0,150,164,5,30,0,0,151,152,10,6,0,0,152,153,5,21,0,0,153,154,
  	5,30,0,0,154,155,5,18,0,0,155,156,5,31,0,0,156,164,5,19,0,0,157,158,10,
  	3,0,0,158,159,5,21,0,0,159,160,5,30,0,0,160,161,5,18,0,0,161,162,5,32,
  	0,0,162,164,5,19,0,0,163,148,1,0,0,0,163,151,1,0,0,0,163,157,1,0,0,0,
  	164,167,1,0,0,0,165,163,1,0,0,0,165,166,1,0,0,0,166,19,1,0,0,0,167,165,
  	1,0,0,0,168,169,6,10,-1,0,169,170,3,22,11,0,170,175,1,0,0,0,171,172,10,
  	1,0,0,172,174,3,22,11,0,173,171,1,0,0,0,174,177,1,0,0,0,175,173,1,0,0,
  	0,175,176,1,0,0,0,176,21,1,0,0,0,177,175,1,0,0,0,178,219,3,14,7,0,179,
  	219,3,24,12,0,180,219,3,12,6,0,181,182,5,7,0,0,182,183,5,14,0,0,183,184,
  	3,24,12,0,184,185,3,24,12,0,185,186,3,28,14,0,186,187,5,15,0,0,187,188,
  	3,22,11,0,188,219,1,0,0,0,189,190,5,5,0,0,190,191,5,14,0,0,191,192,3,
  	28,14,0,192,193,5,15,0,0,193,194,3,22,11,0,194,219,1,0,0,0,195,196,5,
  	5,0,0,196,197,5,14,0,0,197,198,3,28,14,0,198,199,5,15,0,0,199,200,3,22,
  	11,0,200,201,5,6,0,0,201,202,3,22,11,0,202,219,1,0,0,0,203,204,5,8,0,
  	0,204,205,5,14,0,0,205,206,3,28,14,0,206,207,5,15,0,0,207,208,3,22,11,
  	0,208,219,1,0,0,0,209,210,5,9,0,0,210,211,5,14,0,0,211,212,5,30,0,0,212,
  	213,5,15,0,0,213,219,5,20,0,0,214,215,5,10,0,0,215,216,3,28,14,0,216,
  	217,5,20,0,0,217,219,1,0,0,0,218,178,1,0,0,0,218,179,1,0,0,0,218,180,
  	1,0,0,0,218,181,1,0,0,0,218,189,1,0,0,0,218,195,1,0,0,0,218,203,1,0,0,
  	0,218,209,1,0,0,0,218,214,1,0,0,0,219,23,1,0,0,0,220,226,5,20,0,0,221,
  	222,3,28,14,0,222,223,5,20,0,0,223,226,1,0,0,0,224,226,3,28,14,0,225,
  	220,1,0,0,0,225,221,1,0,0,0,225,224,1,0,0,0,226,25,1,0,0,0,227,234,5,
  	30,0,0,228,229,5,30,0,0,229,230,5,18,0,0,230,231,3,28,14,0,231,232,5,
  	19,0,0,232,234,1,0,0,0,233,227,1,0,0,0,233,228,1,0,0,0,234,27,1,0,0,0,
  	235,241,3,30,15,0,236,237,3,26,13,0,237,238,5,29,0,0,238,239,3,30,15,
  	0,239,241,1,0,0,0,240,235,1,0,0,0,240,236,1,0,0,0,241,29,1,0,0,0,242,
  	248,3,32,16,0,243,244,3,32,16,0,244,245,5,28,0,0,245,246,3,32,16,0,246,
  	248,1,0,0,0,247,242,1,0,0,0,247,243,1,0,0,0,248,31,1,0,0,0,249,255,3,
  	34,17,0,250,251,3,34,17,0,251,252,5,27,0,0,252,253,3,34,17,0,253,255,
  	1,0,0,0,254,249,1,0,0,0,254,250,1,0,0,0,255,33,1,0,0,0,256,257,6,17,-1,
  	0,257,263,3,36,18,0,258,259,3,36,18,0,259,260,5,22,0,0,260,261,7,0,0,
  	0,261,263,1,0,0,0,262,256,1,0,0,0,262,258,1,0,0,0,263,269,1,0,0,0,264,
  	265,10,2,0,0,265,266,5,22,0,0,266,268,3,36,18,0,267,264,1,0,0,0,268,271,
  	1,0,0,0,269,267,1,0,0,0,269,270,1,0,0,0,270,35,1,0,0,0,271,269,1,0,0,
  	0,272,273,6,18,-1,0,273,274,3,38,19,0,274,280,1,0,0,0,275,276,10,1,0,
  	0,276,277,5,23,0,0,277,279,3,38,19,0,278,275,1,0,0,0,279,282,1,0,0,0,
  	280,278,1,0,0,0,280,281,1,0,0,0,281,37,1,0,0,0,282,280,1,0,0,0,283,284,
  	5,22,0,0,284,289,3,38,19,0,285,286,5,26,0,0,286,289,3,38,19,0,287,289,
  	3,40,20,0,288,283,1,0,0,0,288,285,1,0,0,0,288,287,1,0,0,0,289,39,1,0,
  	0,0,290,309,3,26,13,0,291,292,5,30,0,0,292,293,5,14,0,0,293,294,3,42,
  	21,0,294,295,5,15,0,0,295,309,1,0,0,0,296,297,5,14,0,0,297,298,3,28,14,
  	0,298,299,5,15,0,0,299,309,1,0,0,0,300,309,5,31,0,0,301,309,5,32,0,0,
  	302,303,3,26,13,0,303,304,5,24,0,0,304,309,1,0,0,0,305,306,3,26,13,0,
  	306,307,5,25,0,0,307,309,1,0,0,0,308,290,1,0,0,0,308,291,1,0,0,0,308,
  	296,1,0,0,0,308,300,1,0,0,0,308,301,1,0,0,0,308,302,1,0,0,0,308,305,1,
  	0,0,0,309,41,1,0,0,0,310,313,3,44,22,0,311,313,1,0,0,0,312,310,1,0,0,
  	0,312,311,1,0,0,0,313,43,1,0,0,0,314,315,6,22,-1,0,315,316,3,30,15,0,
  	316,322,1,0,0,0,317,318,10,2,0,0,318,319,5,21,0,0,319,321,3,30,15,0,320,
  	317,1,0,0,0,321,324,1,0,0,0,322,320,1,0,0,0,322,323,1,0,0,0,323,45,1,
  	0,0,0,324,322,1,0,0,0,26,55,61,76,91,101,111,113,122,131,146,163,165,
  	175,218,225,233,240,247,254,262,269,280,288,308,312,322
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  csubsetParserStaticData = std::move(staticData);
}

}

CSubsetParser::CSubsetParser(TokenStream *input) : CSubsetParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CSubsetParser::CSubsetParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CSubsetParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *csubsetParserStaticData->atn, csubsetParserStaticData->decisionToDFA, csubsetParserStaticData->sharedContextCache, options);
}

CSubsetParser::~CSubsetParser() {
  delete _interpreter;
}

const atn::ATN& CSubsetParser::getATN() const {
  return *csubsetParserStaticData->atn;
}

std::string CSubsetParser::getGrammarFileName() const {
  return "CSubset.g4";
}

const std::vector<std::string>& CSubsetParser::getRuleNames() const {
  return csubsetParserStaticData->ruleNames;
}

const dfa::Vocabulary& CSubsetParser::getVocabulary() const {
  return csubsetParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CSubsetParser::getSerializedATN() const {
  return csubsetParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

CSubsetParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSubsetParser::ProgramContext* CSubsetParser::StartContext::program() {
  return getRuleContext<CSubsetParser::ProgramContext>(0);
}


size_t CSubsetParser::StartContext::getRuleIndex() const {
  return CSubsetParser::RuleStart;
}


std::any CSubsetParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::StartContext* CSubsetParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, CSubsetParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    program(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

CSubsetParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::ProgramContext::getRuleIndex() const {
  return CSubsetParser::RuleProgram;
}

void CSubsetParser::ProgramContext::copyFrom(ProgramContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProgramUnitContext ------------------------------------------------------------------

CSubsetParser::UnitContext* CSubsetParser::ProgramUnitContext::unit() {
  return getRuleContext<CSubsetParser::UnitContext>(0);
}

CSubsetParser::ProgramUnitContext::ProgramUnitContext(ProgramContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ProgramUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitProgramUnit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ProgramAgainContext ------------------------------------------------------------------

CSubsetParser::ProgramContext* CSubsetParser::ProgramAgainContext::program() {
  return getRuleContext<CSubsetParser::ProgramContext>(0);
}

CSubsetParser::UnitContext* CSubsetParser::ProgramAgainContext::unit() {
  return getRuleContext<CSubsetParser::UnitContext>(0);
}

CSubsetParser::ProgramAgainContext::ProgramAgainContext(ProgramContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ProgramAgainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitProgramAgain(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::ProgramContext* CSubsetParser::program() {
   return program(0);
}

CSubsetParser::ProgramContext* CSubsetParser::program(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, parentState);
  CSubsetParser::ProgramContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, CSubsetParser::RuleProgram, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ProgramUnitContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(49);
    unit();
    _ctx->stop = _input->LT(-1);
    setState(55);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ProgramAgainContext>(_tracker.createInstance<ProgramContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleProgram);
        setState(51);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(52);
        unit(); 
      }
      setState(57);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnitContext ------------------------------------------------------------------

CSubsetParser::UnitContext::UnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::UnitContext::getRuleIndex() const {
  return CSubsetParser::RuleUnit;
}

void CSubsetParser::UnitContext::copyFrom(UnitContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnitFuncDefinitionContext ------------------------------------------------------------------

CSubsetParser::Func_definitionContext* CSubsetParser::UnitFuncDefinitionContext::func_definition() {
  return getRuleContext<CSubsetParser::Func_definitionContext>(0);
}

CSubsetParser::UnitFuncDefinitionContext::UnitFuncDefinitionContext(UnitContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnitFuncDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnitFuncDefinition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnitVarDeclarationContext ------------------------------------------------------------------

CSubsetParser::Var_declarationContext* CSubsetParser::UnitVarDeclarationContext::var_declaration() {
  return getRuleContext<CSubsetParser::Var_declarationContext>(0);
}

CSubsetParser::UnitVarDeclarationContext::UnitVarDeclarationContext(UnitContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnitVarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnitFuncDeclarationContext ------------------------------------------------------------------

CSubsetParser::Func_declarationContext* CSubsetParser::UnitFuncDeclarationContext::func_declaration() {
  return getRuleContext<CSubsetParser::Func_declarationContext>(0);
}

CSubsetParser::UnitFuncDeclarationContext::UnitFuncDeclarationContext(UnitContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnitFuncDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnitFuncDeclaration(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::UnitContext* CSubsetParser::unit() {
  UnitContext *_localctx = _tracker.createInstance<UnitContext>(_ctx, getState());
  enterRule(_localctx, 4, CSubsetParser::RuleUnit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::UnitVarDeclarationContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(58);
      var_declaration();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::UnitFuncDeclarationContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(59);
      func_declaration();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubsetParser::UnitFuncDefinitionContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(60);
      func_definition();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_declarationContext ------------------------------------------------------------------

CSubsetParser::Func_declarationContext::Func_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Func_declarationContext::getRuleIndex() const {
  return CSubsetParser::RuleFunc_declaration;
}

void CSubsetParser::Func_declarationContext::copyFrom(Func_declarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FuncDeclarationWoParametersContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::FuncDeclarationWoParametersContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDeclarationWoParametersContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::FuncDeclarationWoParametersContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

tree::TerminalNode* CSubsetParser::FuncDeclarationWoParametersContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

tree::TerminalNode* CSubsetParser::FuncDeclarationWoParametersContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::FuncDeclarationWoParametersContext::FuncDeclarationWoParametersContext(Func_declarationContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FuncDeclarationWoParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFuncDeclarationWoParameters(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncDeclarationWParametersContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::FuncDeclarationWParametersContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDeclarationWParametersContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::FuncDeclarationWParametersContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::Parameter_listContext* CSubsetParser::FuncDeclarationWParametersContext::parameter_list() {
  return getRuleContext<CSubsetParser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDeclarationWParametersContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

tree::TerminalNode* CSubsetParser::FuncDeclarationWParametersContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::FuncDeclarationWParametersContext::FuncDeclarationWParametersContext(Func_declarationContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FuncDeclarationWParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFuncDeclarationWParameters(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Func_declarationContext* CSubsetParser::func_declaration() {
  Func_declarationContext *_localctx = _tracker.createInstance<Func_declarationContext>(_ctx, getState());
  enterRule(_localctx, 6, CSubsetParser::RuleFunc_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::FuncDeclarationWParametersContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(63);
      type_specifier();
      setState(64);
      match(CSubsetParser::ID);
      setState(65);
      match(CSubsetParser::LPAREN);
      setState(66);
      parameter_list(0);
      setState(67);
      match(CSubsetParser::RPAREN);
      setState(68);
      match(CSubsetParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::FuncDeclarationWoParametersContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(70);
      type_specifier();
      setState(71);
      match(CSubsetParser::ID);
      setState(72);
      match(CSubsetParser::LPAREN);
      setState(73);
      match(CSubsetParser::RPAREN);
      setState(74);
      match(CSubsetParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_definitionContext ------------------------------------------------------------------

CSubsetParser::Func_definitionContext::Func_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Func_definitionContext::getRuleIndex() const {
  return CSubsetParser::RuleFunc_definition;
}

void CSubsetParser::Func_definitionContext::copyFrom(Func_definitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FuncDefWoParametersContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::FuncDefWoParametersContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDefWoParametersContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::FuncDefWoParametersContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

tree::TerminalNode* CSubsetParser::FuncDefWoParametersContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::Compound_statementContext* CSubsetParser::FuncDefWoParametersContext::compound_statement() {
  return getRuleContext<CSubsetParser::Compound_statementContext>(0);
}

CSubsetParser::FuncDefWoParametersContext::FuncDefWoParametersContext(Func_definitionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FuncDefWoParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFuncDefWoParameters(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncDefWParametersContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::FuncDefWParametersContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDefWParametersContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::FuncDefWParametersContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::Parameter_listContext* CSubsetParser::FuncDefWParametersContext::parameter_list() {
  return getRuleContext<CSubsetParser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDefWParametersContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::Compound_statementContext* CSubsetParser::FuncDefWParametersContext::compound_statement() {
  return getRuleContext<CSubsetParser::Compound_statementContext>(0);
}

CSubsetParser::FuncDefWParametersContext::FuncDefWParametersContext(Func_definitionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FuncDefWParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFuncDefWParameters(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Func_definitionContext* CSubsetParser::func_definition() {
  Func_definitionContext *_localctx = _tracker.createInstance<Func_definitionContext>(_ctx, getState());
  enterRule(_localctx, 8, CSubsetParser::RuleFunc_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(91);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::FuncDefWParametersContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(78);
      type_specifier();
      setState(79);
      match(CSubsetParser::ID);
      setState(80);
      match(CSubsetParser::LPAREN);
      setState(81);
      parameter_list(0);
      setState(82);
      match(CSubsetParser::RPAREN);
      setState(83);
      compound_statement();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::FuncDefWoParametersContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(85);
      type_specifier();
      setState(86);
      match(CSubsetParser::ID);
      setState(87);
      match(CSubsetParser::LPAREN);
      setState(88);
      match(CSubsetParser::RPAREN);
      setState(89);
      compound_statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_listContext ------------------------------------------------------------------

CSubsetParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Parameter_listContext::getRuleIndex() const {
  return CSubsetParser::RuleParameter_list;
}

void CSubsetParser::Parameter_listContext::copyFrom(Parameter_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SingleParameterWoIdContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::SingleParameterWoIdContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

CSubsetParser::SingleParameterWoIdContext::SingleParameterWoIdContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::SingleParameterWoIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitSingleParameterWoId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SingleParameterWIdContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::SingleParameterWIdContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::SingleParameterWIdContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

CSubsetParser::SingleParameterWIdContext::SingleParameterWIdContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::SingleParameterWIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitSingleParameterWId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrayTokenParameterListContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::StrayTokenParameterListContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

CSubsetParser::StrayTokenParameterListContext::StrayTokenParameterListContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StrayTokenParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStrayTokenParameterList(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultipleParametersWoIdContext ------------------------------------------------------------------

CSubsetParser::Parameter_listContext* CSubsetParser::MultipleParametersWoIdContext::parameter_list() {
  return getRuleContext<CSubsetParser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubsetParser::MultipleParametersWoIdContext::COMMA() {
  return getToken(CSubsetParser::COMMA, 0);
}

CSubsetParser::Type_specifierContext* CSubsetParser::MultipleParametersWoIdContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

CSubsetParser::MultipleParametersWoIdContext::MultipleParametersWoIdContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::MultipleParametersWoIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitMultipleParametersWoId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultipleParametersWIdContext ------------------------------------------------------------------

CSubsetParser::Parameter_listContext* CSubsetParser::MultipleParametersWIdContext::parameter_list() {
  return getRuleContext<CSubsetParser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubsetParser::MultipleParametersWIdContext::COMMA() {
  return getToken(CSubsetParser::COMMA, 0);
}

CSubsetParser::Type_specifierContext* CSubsetParser::MultipleParametersWIdContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::MultipleParametersWIdContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

CSubsetParser::MultipleParametersWIdContext::MultipleParametersWIdContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::MultipleParametersWIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitMultipleParametersWId(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::Parameter_listContext* CSubsetParser::parameter_list() {
   return parameter_list(0);
}

CSubsetParser::Parameter_listContext* CSubsetParser::parameter_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, parentState);
  CSubsetParser::Parameter_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, CSubsetParser::RuleParameter_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(101);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SingleParameterWIdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(94);
      type_specifier();
      setState(95);
      match(CSubsetParser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SingleParameterWoIdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(97);
      type_specifier();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrayTokenParameterListContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(98);
      type_specifier();
      setState(99);
      matchWildcard();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(111);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultipleParametersWIdContext>(_tracker.createInstance<Parameter_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleParameter_list);
          setState(103);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(104);
          match(CSubsetParser::COMMA);
          setState(105);
          type_specifier();
          setState(106);
          match(CSubsetParser::ID);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultipleParametersWoIdContext>(_tracker.createInstance<Parameter_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleParameter_list);
          setState(108);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(109);
          match(CSubsetParser::COMMA);
          setState(110);
          type_specifier();
          break;
        }

        default:
          break;
        } 
      }
      setState(115);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Compound_statementContext ------------------------------------------------------------------

CSubsetParser::Compound_statementContext::Compound_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Compound_statementContext::getRuleIndex() const {
  return CSubsetParser::RuleCompound_statement;
}

void CSubsetParser::Compound_statementContext::copyFrom(Compound_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CompoundStmtEmptyContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::CompoundStmtEmptyContext::LCURL() {
  return getToken(CSubsetParser::LCURL, 0);
}

tree::TerminalNode* CSubsetParser::CompoundStmtEmptyContext::RCURL() {
  return getToken(CSubsetParser::RCURL, 0);
}

CSubsetParser::CompoundStmtEmptyContext::CompoundStmtEmptyContext(Compound_statementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::CompoundStmtEmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitCompoundStmtEmpty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompoundStmtNonEmptyContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::CompoundStmtNonEmptyContext::LCURL() {
  return getToken(CSubsetParser::LCURL, 0);
}

CSubsetParser::StatementsContext* CSubsetParser::CompoundStmtNonEmptyContext::statements() {
  return getRuleContext<CSubsetParser::StatementsContext>(0);
}

tree::TerminalNode* CSubsetParser::CompoundStmtNonEmptyContext::RCURL() {
  return getToken(CSubsetParser::RCURL, 0);
}

CSubsetParser::CompoundStmtNonEmptyContext::CompoundStmtNonEmptyContext(Compound_statementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::CompoundStmtNonEmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitCompoundStmtNonEmpty(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Compound_statementContext* CSubsetParser::compound_statement() {
  Compound_statementContext *_localctx = _tracker.createInstance<Compound_statementContext>(_ctx, getState());
  enterRule(_localctx, 12, CSubsetParser::RuleCompound_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::CompoundStmtNonEmptyContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(116);
      match(CSubsetParser::LCURL);
      setState(117);
      statements(0);
      setState(118);
      match(CSubsetParser::RCURL);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::CompoundStmtEmptyContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(120);
      match(CSubsetParser::LCURL);
      setState(121);
      match(CSubsetParser::RCURL);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declarationContext ------------------------------------------------------------------

CSubsetParser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Var_declarationContext::getRuleIndex() const {
  return CSubsetParser::RuleVar_declaration;
}

void CSubsetParser::Var_declarationContext::copyFrom(Var_declarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::VarDeclarationContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

CSubsetParser::Declaration_listContext* CSubsetParser::VarDeclarationContext::declaration_list() {
  return getRuleContext<CSubsetParser::Declaration_listContext>(0);
}

tree::TerminalNode* CSubsetParser::VarDeclarationContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::VarDeclarationContext::VarDeclarationContext(Var_declarationContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Var_declarationContext* CSubsetParser::var_declaration() {
  Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, getState());
  enterRule(_localctx, 14, CSubsetParser::RuleVar_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CSubsetParser::VarDeclarationContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(124);
    type_specifier();
    setState(125);
    declaration_list(0);
    setState(126);
    match(CSubsetParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_specifierContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext::Type_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Type_specifierContext::getRuleIndex() const {
  return CSubsetParser::RuleType_specifier;
}

void CSubsetParser::Type_specifierContext::copyFrom(Type_specifierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeSpecifierVoidContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::TypeSpecifierVoidContext::VOID() {
  return getToken(CSubsetParser::VOID, 0);
}

CSubsetParser::TypeSpecifierVoidContext::TypeSpecifierVoidContext(Type_specifierContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::TypeSpecifierVoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifierVoid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeSpecifierFloatContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::TypeSpecifierFloatContext::FLOAT() {
  return getToken(CSubsetParser::FLOAT, 0);
}

CSubsetParser::TypeSpecifierFloatContext::TypeSpecifierFloatContext(Type_specifierContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::TypeSpecifierFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifierFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeSpecifierIntContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::TypeSpecifierIntContext::INT() {
  return getToken(CSubsetParser::INT, 0);
}

CSubsetParser::TypeSpecifierIntContext::TypeSpecifierIntContext(Type_specifierContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::TypeSpecifierIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifierInt(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Type_specifierContext* CSubsetParser::type_specifier() {
  Type_specifierContext *_localctx = _tracker.createInstance<Type_specifierContext>(_ctx, getState());
  enterRule(_localctx, 16, CSubsetParser::RuleType_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubsetParser::INT: {
        _localctx = _tracker.createInstance<CSubsetParser::TypeSpecifierIntContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(128);
        match(CSubsetParser::INT);
        break;
      }

      case CSubsetParser::FLOAT: {
        _localctx = _tracker.createInstance<CSubsetParser::TypeSpecifierFloatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(129);
        match(CSubsetParser::FLOAT);
        break;
      }

      case CSubsetParser::VOID: {
        _localctx = _tracker.createInstance<CSubsetParser::TypeSpecifierVoidContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(130);
        match(CSubsetParser::VOID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_listContext ------------------------------------------------------------------

CSubsetParser::Declaration_listContext::Declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Declaration_listContext::getRuleIndex() const {
  return CSubsetParser::RuleDeclaration_list;
}

void CSubsetParser::Declaration_listContext::copyFrom(Declaration_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclarationListMultipleArrContext ------------------------------------------------------------------

CSubsetParser::Declaration_listContext* CSubsetParser::DeclarationListMultipleArrContext::declaration_list() {
  return getRuleContext<CSubsetParser::Declaration_listContext>(0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleArrContext::COMMA() {
  return getToken(CSubsetParser::COMMA, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleArrContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleArrContext::LTHIRD() {
  return getToken(CSubsetParser::LTHIRD, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleArrContext::CONST_INT() {
  return getToken(CSubsetParser::CONST_INT, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleArrContext::RTHIRD() {
  return getToken(CSubsetParser::RTHIRD, 0);
}

CSubsetParser::DeclarationListMultipleArrContext::DeclarationListMultipleArrContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::DeclarationListMultipleArrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitDeclarationListMultipleArr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationListSingleArrContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::DeclarationListSingleArrContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListSingleArrContext::LTHIRD() {
  return getToken(CSubsetParser::LTHIRD, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListSingleArrContext::CONST_INT() {
  return getToken(CSubsetParser::CONST_INT, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListSingleArrContext::RTHIRD() {
  return getToken(CSubsetParser::RTHIRD, 0);
}

CSubsetParser::DeclarationListSingleArrContext::DeclarationListSingleArrContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::DeclarationListSingleArrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitDeclarationListSingleArr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationListSingleIdContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::DeclarationListSingleIdContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

CSubsetParser::DeclarationListSingleIdContext::DeclarationListSingleIdContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::DeclarationListSingleIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitDeclarationListSingleId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrayTokenDeclarationListContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> CSubsetParser::StrayTokenDeclarationListContext::ID() {
  return getTokens(CSubsetParser::ID);
}

tree::TerminalNode* CSubsetParser::StrayTokenDeclarationListContext::ID(size_t i) {
  return getToken(CSubsetParser::ID, i);
}

CSubsetParser::StrayTokenDeclarationListContext::StrayTokenDeclarationListContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StrayTokenDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStrayTokenDeclarationList(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationListMultipleVarContext ------------------------------------------------------------------

CSubsetParser::Declaration_listContext* CSubsetParser::DeclarationListMultipleVarContext::declaration_list() {
  return getRuleContext<CSubsetParser::Declaration_listContext>(0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleVarContext::COMMA() {
  return getToken(CSubsetParser::COMMA, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleVarContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

CSubsetParser::DeclarationListMultipleVarContext::DeclarationListMultipleVarContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::DeclarationListMultipleVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitDeclarationListMultipleVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationListMultipleArrErrorContext ------------------------------------------------------------------

CSubsetParser::Declaration_listContext* CSubsetParser::DeclarationListMultipleArrErrorContext::declaration_list() {
  return getRuleContext<CSubsetParser::Declaration_listContext>(0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleArrErrorContext::COMMA() {
  return getToken(CSubsetParser::COMMA, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleArrErrorContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleArrErrorContext::LTHIRD() {
  return getToken(CSubsetParser::LTHIRD, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleArrErrorContext::CONST_FLOAT() {
  return getToken(CSubsetParser::CONST_FLOAT, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListMultipleArrErrorContext::RTHIRD() {
  return getToken(CSubsetParser::RTHIRD, 0);
}

CSubsetParser::DeclarationListMultipleArrErrorContext::DeclarationListMultipleArrErrorContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::DeclarationListMultipleArrErrorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitDeclarationListMultipleArrError(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationListSingleArrErrorContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::DeclarationListSingleArrErrorContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListSingleArrErrorContext::LTHIRD() {
  return getToken(CSubsetParser::LTHIRD, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListSingleArrErrorContext::CONST_FLOAT() {
  return getToken(CSubsetParser::CONST_FLOAT, 0);
}

tree::TerminalNode* CSubsetParser::DeclarationListSingleArrErrorContext::RTHIRD() {
  return getToken(CSubsetParser::RTHIRD, 0);
}

CSubsetParser::DeclarationListSingleArrErrorContext::DeclarationListSingleArrErrorContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::DeclarationListSingleArrErrorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitDeclarationListSingleArrError(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::Declaration_listContext* CSubsetParser::declaration_list() {
   return declaration_list(0);
}

CSubsetParser::Declaration_listContext* CSubsetParser::declaration_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::Declaration_listContext *_localctx = _tracker.createInstance<Declaration_listContext>(_ctx, parentState);
  CSubsetParser::Declaration_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, CSubsetParser::RuleDeclaration_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(146);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<DeclarationListSingleIdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(134);
      match(CSubsetParser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<DeclarationListSingleArrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(135);
      match(CSubsetParser::ID);
      setState(136);
      match(CSubsetParser::LTHIRD);
      setState(137);
      match(CSubsetParser::CONST_INT);
      setState(138);
      match(CSubsetParser::RTHIRD);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<DeclarationListSingleArrErrorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(139);
      match(CSubsetParser::ID);
      setState(140);
      match(CSubsetParser::LTHIRD);
      setState(141);
      match(CSubsetParser::CONST_FLOAT);
      setState(142);
      match(CSubsetParser::RTHIRD);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<StrayTokenDeclarationListContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(143);
      antlrcpp::downCast<StrayTokenDeclarationListContext *>(_localctx)->I1 = match(CSubsetParser::ID);
      setState(144);
      matchWildcard();
      setState(145);
      antlrcpp::downCast<StrayTokenDeclarationListContext *>(_localctx)->I2 = match(CSubsetParser::ID);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(165);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(163);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<DeclarationListMultipleVarContext>(_tracker.createInstance<Declaration_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleDeclaration_list);
          setState(148);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(149);
          match(CSubsetParser::COMMA);
          setState(150);
          match(CSubsetParser::ID);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DeclarationListMultipleArrContext>(_tracker.createInstance<Declaration_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleDeclaration_list);
          setState(151);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(152);
          match(CSubsetParser::COMMA);
          setState(153);
          match(CSubsetParser::ID);
          setState(154);
          match(CSubsetParser::LTHIRD);
          setState(155);
          match(CSubsetParser::CONST_INT);
          setState(156);
          match(CSubsetParser::RTHIRD);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<DeclarationListMultipleArrErrorContext>(_tracker.createInstance<Declaration_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleDeclaration_list);
          setState(157);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(158);
          match(CSubsetParser::COMMA);
          setState(159);
          match(CSubsetParser::ID);
          setState(160);
          match(CSubsetParser::LTHIRD);
          setState(161);
          match(CSubsetParser::CONST_FLOAT);
          setState(162);
          match(CSubsetParser::RTHIRD);
          break;
        }

        default:
          break;
        } 
      }
      setState(167);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

CSubsetParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::StatementsContext::getRuleIndex() const {
  return CSubsetParser::RuleStatements;
}

void CSubsetParser::StatementsContext::copyFrom(StatementsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MultipleStatementsContext ------------------------------------------------------------------

CSubsetParser::StatementsContext* CSubsetParser::MultipleStatementsContext::statements() {
  return getRuleContext<CSubsetParser::StatementsContext>(0);
}

CSubsetParser::StatementContext* CSubsetParser::MultipleStatementsContext::statement() {
  return getRuleContext<CSubsetParser::StatementContext>(0);
}

CSubsetParser::MultipleStatementsContext::MultipleStatementsContext(StatementsContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::MultipleStatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitMultipleStatements(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SingleStatementContext ------------------------------------------------------------------

CSubsetParser::StatementContext* CSubsetParser::SingleStatementContext::statement() {
  return getRuleContext<CSubsetParser::StatementContext>(0);
}

CSubsetParser::SingleStatementContext::SingleStatementContext(StatementsContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::SingleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitSingleStatement(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::StatementsContext* CSubsetParser::statements() {
   return statements(0);
}

CSubsetParser::StatementsContext* CSubsetParser::statements(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, parentState);
  CSubsetParser::StatementsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, CSubsetParser::RuleStatements, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<SingleStatementContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(169);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(175);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<MultipleStatementsContext>(_tracker.createInstance<StatementsContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleStatements);
        setState(171);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(172);
        statement(); 
      }
      setState(177);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CSubsetParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::StatementContext::getRuleIndex() const {
  return CSubsetParser::RuleStatement;
}

void CSubsetParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatementVarDeclarationContext ------------------------------------------------------------------

CSubsetParser::Var_declarationContext* CSubsetParser::StatementVarDeclarationContext::var_declaration() {
  return getRuleContext<CSubsetParser::Var_declarationContext>(0);
}

CSubsetParser::StatementVarDeclarationContext::StatementVarDeclarationContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StatementVarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStatementVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementPrintlnContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StatementPrintlnContext::PRINTLN() {
  return getToken(CSubsetParser::PRINTLN, 0);
}

tree::TerminalNode* CSubsetParser::StatementPrintlnContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

tree::TerminalNode* CSubsetParser::StatementPrintlnContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::StatementPrintlnContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

tree::TerminalNode* CSubsetParser::StatementPrintlnContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::StatementPrintlnContext::StatementPrintlnContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StatementPrintlnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStatementPrintln(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementExpressionStmtContext ------------------------------------------------------------------

CSubsetParser::Expression_statementContext* CSubsetParser::StatementExpressionStmtContext::expression_statement() {
  return getRuleContext<CSubsetParser::Expression_statementContext>(0);
}

CSubsetParser::StatementExpressionStmtContext::StatementExpressionStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StatementExpressionStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStatementExpressionStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementReturnContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StatementReturnContext::RETURN() {
  return getToken(CSubsetParser::RETURN, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::StatementReturnContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::StatementReturnContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::StatementReturnContext::StatementReturnContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StatementReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStatementReturn(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementForContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StatementForContext::FOR() {
  return getToken(CSubsetParser::FOR, 0);
}

tree::TerminalNode* CSubsetParser::StatementForContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::StatementForContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::StatementForContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::StatementContext* CSubsetParser::StatementForContext::statement() {
  return getRuleContext<CSubsetParser::StatementContext>(0);
}

std::vector<CSubsetParser::Expression_statementContext *> CSubsetParser::StatementForContext::expression_statement() {
  return getRuleContexts<CSubsetParser::Expression_statementContext>();
}

CSubsetParser::Expression_statementContext* CSubsetParser::StatementForContext::expression_statement(size_t i) {
  return getRuleContext<CSubsetParser::Expression_statementContext>(i);
}

CSubsetParser::StatementForContext::StatementForContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StatementForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStatementFor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementCompoundStmtContext ------------------------------------------------------------------

CSubsetParser::Compound_statementContext* CSubsetParser::StatementCompoundStmtContext::compound_statement() {
  return getRuleContext<CSubsetParser::Compound_statementContext>(0);
}

CSubsetParser::StatementCompoundStmtContext::StatementCompoundStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StatementCompoundStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStatementCompoundStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementIfElseContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StatementIfElseContext::IF() {
  return getToken(CSubsetParser::IF, 0);
}

tree::TerminalNode* CSubsetParser::StatementIfElseContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::StatementIfElseContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::StatementIfElseContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

tree::TerminalNode* CSubsetParser::StatementIfElseContext::ELSE() {
  return getToken(CSubsetParser::ELSE, 0);
}

std::vector<CSubsetParser::StatementContext *> CSubsetParser::StatementIfElseContext::statement() {
  return getRuleContexts<CSubsetParser::StatementContext>();
}

CSubsetParser::StatementContext* CSubsetParser::StatementIfElseContext::statement(size_t i) {
  return getRuleContext<CSubsetParser::StatementContext>(i);
}

CSubsetParser::StatementIfElseContext::StatementIfElseContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StatementIfElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStatementIfElse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementWhileContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StatementWhileContext::WHILE() {
  return getToken(CSubsetParser::WHILE, 0);
}

tree::TerminalNode* CSubsetParser::StatementWhileContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::StatementWhileContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::StatementWhileContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::StatementContext* CSubsetParser::StatementWhileContext::statement() {
  return getRuleContext<CSubsetParser::StatementContext>(0);
}

CSubsetParser::StatementWhileContext::StatementWhileContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StatementWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStatementWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementIfContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StatementIfContext::IF() {
  return getToken(CSubsetParser::IF, 0);
}

tree::TerminalNode* CSubsetParser::StatementIfContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::StatementIfContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::StatementIfContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::StatementContext* CSubsetParser::StatementIfContext::statement() {
  return getRuleContext<CSubsetParser::StatementContext>(0);
}

CSubsetParser::StatementIfContext::StatementIfContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StatementIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStatementIf(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::StatementContext* CSubsetParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, CSubsetParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(218);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::StatementVarDeclarationContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(178);
      var_declaration();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::StatementExpressionStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(179);
      expression_statement();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubsetParser::StatementCompoundStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(180);
      compound_statement();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CSubsetParser::StatementForContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(181);
      match(CSubsetParser::FOR);
      setState(182);
      match(CSubsetParser::LPAREN);
      setState(183);
      antlrcpp::downCast<StatementForContext *>(_localctx)->e1 = expression_statement();
      setState(184);
      antlrcpp::downCast<StatementForContext *>(_localctx)->e2 = expression_statement();
      setState(185);
      expression();
      setState(186);
      match(CSubsetParser::RPAREN);
      setState(187);
      statement();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CSubsetParser::StatementIfContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(189);
      match(CSubsetParser::IF);
      setState(190);
      match(CSubsetParser::LPAREN);
      setState(191);
      expression();
      setState(192);
      match(CSubsetParser::RPAREN);
      setState(193);
      statement();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CSubsetParser::StatementIfElseContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(195);
      match(CSubsetParser::IF);
      setState(196);
      match(CSubsetParser::LPAREN);
      setState(197);
      expression();
      setState(198);
      match(CSubsetParser::RPAREN);
      setState(199);
      antlrcpp::downCast<StatementIfElseContext *>(_localctx)->s1 = statement();
      setState(200);
      match(CSubsetParser::ELSE);
      setState(201);
      antlrcpp::downCast<StatementIfElseContext *>(_localctx)->s2 = statement();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CSubsetParser::StatementWhileContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(203);
      match(CSubsetParser::WHILE);
      setState(204);
      match(CSubsetParser::LPAREN);
      setState(205);
      expression();
      setState(206);
      match(CSubsetParser::RPAREN);
      setState(207);
      statement();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<CSubsetParser::StatementPrintlnContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(209);
      match(CSubsetParser::PRINTLN);
      setState(210);
      match(CSubsetParser::LPAREN);
      setState(211);
      match(CSubsetParser::ID);
      setState(212);
      match(CSubsetParser::RPAREN);
      setState(213);
      match(CSubsetParser::SEMICOLON);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<CSubsetParser::StatementReturnContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(214);
      match(CSubsetParser::RETURN);
      setState(215);
      expression();
      setState(216);
      match(CSubsetParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_statementContext ------------------------------------------------------------------

CSubsetParser::Expression_statementContext::Expression_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Expression_statementContext::getRuleIndex() const {
  return CSubsetParser::RuleExpression_statement;
}

void CSubsetParser::Expression_statementContext::copyFrom(Expression_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpressionStmtEmptyContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::ExpressionStmtEmptyContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::ExpressionStmtEmptyContext::ExpressionStmtEmptyContext(Expression_statementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ExpressionStmtEmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitExpressionStmtEmpty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpressionStmtExpressionContext ------------------------------------------------------------------

CSubsetParser::ExpressionContext* CSubsetParser::ExpressionStmtExpressionContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::ExpressionStmtExpressionContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::ExpressionStmtExpressionContext::ExpressionStmtExpressionContext(Expression_statementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ExpressionStmtExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitExpressionStmtExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpressionMissingSemicolonContext ------------------------------------------------------------------

CSubsetParser::ExpressionContext* CSubsetParser::ExpressionMissingSemicolonContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

CSubsetParser::ExpressionMissingSemicolonContext::ExpressionMissingSemicolonContext(Expression_statementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ExpressionMissingSemicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitExpressionMissingSemicolon(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Expression_statementContext* CSubsetParser::expression_statement() {
  Expression_statementContext *_localctx = _tracker.createInstance<Expression_statementContext>(_ctx, getState());
  enterRule(_localctx, 24, CSubsetParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::ExpressionStmtEmptyContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(220);
      match(CSubsetParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::ExpressionStmtExpressionContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(221);
      expression();
      setState(222);
      match(CSubsetParser::SEMICOLON);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubsetParser::ExpressionMissingSemicolonContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(224);
      expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

CSubsetParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::VariableContext::getRuleIndex() const {
  return CSubsetParser::RuleVariable;
}

void CSubsetParser::VariableContext::copyFrom(VariableContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VariableIdContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::VariableIdContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

CSubsetParser::VariableIdContext::VariableIdContext(VariableContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::VariableIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitVariableId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableArrContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::VariableArrContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::VariableArrContext::LTHIRD() {
  return getToken(CSubsetParser::LTHIRD, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::VariableArrContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::VariableArrContext::RTHIRD() {
  return getToken(CSubsetParser::RTHIRD, 0);
}

CSubsetParser::VariableArrContext::VariableArrContext(VariableContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::VariableArrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitVariableArr(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::VariableContext* CSubsetParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 26, CSubsetParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(233);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::VariableIdContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(227);
      match(CSubsetParser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::VariableArrContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(228);
      match(CSubsetParser::ID);
      setState(229);
      match(CSubsetParser::LTHIRD);
      setState(230);
      expression();
      setState(231);
      match(CSubsetParser::RTHIRD);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CSubsetParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::ExpressionContext::getRuleIndex() const {
  return CSubsetParser::RuleExpression;
}

void CSubsetParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpressionVarAssignLogicContext ------------------------------------------------------------------

CSubsetParser::VariableContext* CSubsetParser::ExpressionVarAssignLogicContext::variable() {
  return getRuleContext<CSubsetParser::VariableContext>(0);
}

tree::TerminalNode* CSubsetParser::ExpressionVarAssignLogicContext::ASSIGNOP() {
  return getToken(CSubsetParser::ASSIGNOP, 0);
}

CSubsetParser::Logic_expressionContext* CSubsetParser::ExpressionVarAssignLogicContext::logic_expression() {
  return getRuleContext<CSubsetParser::Logic_expressionContext>(0);
}

CSubsetParser::ExpressionVarAssignLogicContext::ExpressionVarAssignLogicContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ExpressionVarAssignLogicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitExpressionVarAssignLogic(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpressionLogicExpressionContext ------------------------------------------------------------------

CSubsetParser::Logic_expressionContext* CSubsetParser::ExpressionLogicExpressionContext::logic_expression() {
  return getRuleContext<CSubsetParser::Logic_expressionContext>(0);
}

CSubsetParser::ExpressionLogicExpressionContext::ExpressionLogicExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ExpressionLogicExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitExpressionLogicExpression(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::ExpressionContext* CSubsetParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, CSubsetParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(240);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::ExpressionLogicExpressionContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(235);
      logic_expression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::ExpressionVarAssignLogicContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(236);
      variable();
      setState(237);
      match(CSubsetParser::ASSIGNOP);
      setState(238);
      logic_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logic_expressionContext ------------------------------------------------------------------

CSubsetParser::Logic_expressionContext::Logic_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Logic_expressionContext::getRuleIndex() const {
  return CSubsetParser::RuleLogic_expression;
}

void CSubsetParser::Logic_expressionContext::copyFrom(Logic_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LogicExprWLogicOpContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::LogicExprWLogicOpContext::LOGICOP() {
  return getToken(CSubsetParser::LOGICOP, 0);
}

std::vector<CSubsetParser::Rel_expressionContext *> CSubsetParser::LogicExprWLogicOpContext::rel_expression() {
  return getRuleContexts<CSubsetParser::Rel_expressionContext>();
}

CSubsetParser::Rel_expressionContext* CSubsetParser::LogicExprWLogicOpContext::rel_expression(size_t i) {
  return getRuleContext<CSubsetParser::Rel_expressionContext>(i);
}

CSubsetParser::LogicExprWLogicOpContext::LogicExprWLogicOpContext(Logic_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::LogicExprWLogicOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitLogicExprWLogicOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicExprRelExprContext ------------------------------------------------------------------

CSubsetParser::Rel_expressionContext* CSubsetParser::LogicExprRelExprContext::rel_expression() {
  return getRuleContext<CSubsetParser::Rel_expressionContext>(0);
}

CSubsetParser::LogicExprRelExprContext::LogicExprRelExprContext(Logic_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::LogicExprRelExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitLogicExprRelExpr(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Logic_expressionContext* CSubsetParser::logic_expression() {
  Logic_expressionContext *_localctx = _tracker.createInstance<Logic_expressionContext>(_ctx, getState());
  enterRule(_localctx, 30, CSubsetParser::RuleLogic_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(247);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::LogicExprRelExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(242);
      rel_expression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::LogicExprWLogicOpContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(243);
      antlrcpp::downCast<LogicExprWLogicOpContext *>(_localctx)->r1 = rel_expression();
      setState(244);
      match(CSubsetParser::LOGICOP);
      setState(245);
      antlrcpp::downCast<LogicExprWLogicOpContext *>(_localctx)->r2 = rel_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_expressionContext ------------------------------------------------------------------

CSubsetParser::Rel_expressionContext::Rel_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Rel_expressionContext::getRuleIndex() const {
  return CSubsetParser::RuleRel_expression;
}

void CSubsetParser::Rel_expressionContext::copyFrom(Rel_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RelExprWRelOpContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::RelExprWRelOpContext::RELOP() {
  return getToken(CSubsetParser::RELOP, 0);
}

std::vector<CSubsetParser::Simple_expressionContext *> CSubsetParser::RelExprWRelOpContext::simple_expression() {
  return getRuleContexts<CSubsetParser::Simple_expressionContext>();
}

CSubsetParser::Simple_expressionContext* CSubsetParser::RelExprWRelOpContext::simple_expression(size_t i) {
  return getRuleContext<CSubsetParser::Simple_expressionContext>(i);
}

CSubsetParser::RelExprWRelOpContext::RelExprWRelOpContext(Rel_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::RelExprWRelOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitRelExprWRelOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelExprSimpleExprContext ------------------------------------------------------------------

CSubsetParser::Simple_expressionContext* CSubsetParser::RelExprSimpleExprContext::simple_expression() {
  return getRuleContext<CSubsetParser::Simple_expressionContext>(0);
}

CSubsetParser::RelExprSimpleExprContext::RelExprSimpleExprContext(Rel_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::RelExprSimpleExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitRelExprSimpleExpr(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Rel_expressionContext* CSubsetParser::rel_expression() {
  Rel_expressionContext *_localctx = _tracker.createInstance<Rel_expressionContext>(_ctx, getState());
  enterRule(_localctx, 32, CSubsetParser::RuleRel_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::RelExprSimpleExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(249);
      simple_expression(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::RelExprWRelOpContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(250);
      antlrcpp::downCast<RelExprWRelOpContext *>(_localctx)->s1 = simple_expression(0);
      setState(251);
      match(CSubsetParser::RELOP);
      setState(252);
      antlrcpp::downCast<RelExprWRelOpContext *>(_localctx)->s2 = simple_expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_expressionContext ------------------------------------------------------------------

CSubsetParser::Simple_expressionContext::Simple_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Simple_expressionContext::getRuleIndex() const {
  return CSubsetParser::RuleSimple_expression;
}

void CSubsetParser::Simple_expressionContext::copyFrom(Simple_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SimpleExprTermContext ------------------------------------------------------------------

CSubsetParser::TermContext* CSubsetParser::SimpleExprTermContext::term() {
  return getRuleContext<CSubsetParser::TermContext>(0);
}

CSubsetParser::SimpleExprTermContext::SimpleExprTermContext(Simple_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::SimpleExprTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitSimpleExprTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StraySimpleExprContext ------------------------------------------------------------------

CSubsetParser::TermContext* CSubsetParser::StraySimpleExprContext::term() {
  return getRuleContext<CSubsetParser::TermContext>(0);
}

tree::TerminalNode* CSubsetParser::StraySimpleExprContext::ADDOP() {
  return getToken(CSubsetParser::ADDOP, 0);
}

tree::TerminalNode* CSubsetParser::StraySimpleExprContext::ASSIGNOP() {
  return getToken(CSubsetParser::ASSIGNOP, 0);
}

tree::TerminalNode* CSubsetParser::StraySimpleExprContext::RELOP() {
  return getToken(CSubsetParser::RELOP, 0);
}

tree::TerminalNode* CSubsetParser::StraySimpleExprContext::MULOP() {
  return getToken(CSubsetParser::MULOP, 0);
}

tree::TerminalNode* CSubsetParser::StraySimpleExprContext::LOGICOP() {
  return getToken(CSubsetParser::LOGICOP, 0);
}

CSubsetParser::StraySimpleExprContext::StraySimpleExprContext(Simple_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StraySimpleExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStraySimpleExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleExprAddContext ------------------------------------------------------------------

CSubsetParser::Simple_expressionContext* CSubsetParser::SimpleExprAddContext::simple_expression() {
  return getRuleContext<CSubsetParser::Simple_expressionContext>(0);
}

tree::TerminalNode* CSubsetParser::SimpleExprAddContext::ADDOP() {
  return getToken(CSubsetParser::ADDOP, 0);
}

CSubsetParser::TermContext* CSubsetParser::SimpleExprAddContext::term() {
  return getRuleContext<CSubsetParser::TermContext>(0);
}

CSubsetParser::SimpleExprAddContext::SimpleExprAddContext(Simple_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::SimpleExprAddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitSimpleExprAdd(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::Simple_expressionContext* CSubsetParser::simple_expression() {
   return simple_expression(0);
}

CSubsetParser::Simple_expressionContext* CSubsetParser::simple_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::Simple_expressionContext *_localctx = _tracker.createInstance<Simple_expressionContext>(_ctx, parentState);
  CSubsetParser::Simple_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, CSubsetParser::RuleSimple_expression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(262);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SimpleExprTermContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(257);
      term(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StraySimpleExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(258);
      term(0);
      setState(259);
      match(CSubsetParser::ADDOP);
      setState(260);
      antlrcpp::downCast<StraySimpleExprContext *>(_localctx)->stray = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 947912704) != 0))) {
        antlrcpp::downCast<StraySimpleExprContext *>(_localctx)->stray = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(269);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<SimpleExprAddContext>(_tracker.createInstance<Simple_expressionContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleSimple_expression);
        setState(264);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(265);
        match(CSubsetParser::ADDOP);
        setState(266);
        term(0); 
      }
      setState(271);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

CSubsetParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::TermContext::getRuleIndex() const {
  return CSubsetParser::RuleTerm;
}

void CSubsetParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TermUnaryExprContext ------------------------------------------------------------------

CSubsetParser::Unary_expressionContext* CSubsetParser::TermUnaryExprContext::unary_expression() {
  return getRuleContext<CSubsetParser::Unary_expressionContext>(0);
}

CSubsetParser::TermUnaryExprContext::TermUnaryExprContext(TermContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::TermUnaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitTermUnaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TermMulContext ------------------------------------------------------------------

CSubsetParser::TermContext* CSubsetParser::TermMulContext::term() {
  return getRuleContext<CSubsetParser::TermContext>(0);
}

tree::TerminalNode* CSubsetParser::TermMulContext::MULOP() {
  return getToken(CSubsetParser::MULOP, 0);
}

CSubsetParser::Unary_expressionContext* CSubsetParser::TermMulContext::unary_expression() {
  return getRuleContext<CSubsetParser::Unary_expressionContext>(0);
}

CSubsetParser::TermMulContext::TermMulContext(TermContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::TermMulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitTermMul(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::TermContext* CSubsetParser::term() {
   return term(0);
}

CSubsetParser::TermContext* CSubsetParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  CSubsetParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, CSubsetParser::RuleTerm, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<TermUnaryExprContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(273);
    unary_expression();
    _ctx->stop = _input->LT(-1);
    setState(280);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<TermMulContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleTerm);
        setState(275);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(276);
        match(CSubsetParser::MULOP);
        setState(277);
        unary_expression(); 
      }
      setState(282);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Unary_expressionContext ------------------------------------------------------------------

CSubsetParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Unary_expressionContext::getRuleIndex() const {
  return CSubsetParser::RuleUnary_expression;
}

void CSubsetParser::Unary_expressionContext::copyFrom(Unary_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnaryExprFactorContext ------------------------------------------------------------------

CSubsetParser::FactorContext* CSubsetParser::UnaryExprFactorContext::factor() {
  return getRuleContext<CSubsetParser::FactorContext>(0);
}

CSubsetParser::UnaryExprFactorContext::UnaryExprFactorContext(Unary_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnaryExprFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnaryExprFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryExprNotContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::UnaryExprNotContext::NOT() {
  return getToken(CSubsetParser::NOT, 0);
}

CSubsetParser::Unary_expressionContext* CSubsetParser::UnaryExprNotContext::unary_expression() {
  return getRuleContext<CSubsetParser::Unary_expressionContext>(0);
}

CSubsetParser::UnaryExprNotContext::UnaryExprNotContext(Unary_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnaryExprNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnaryExprNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryExprAddContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::UnaryExprAddContext::ADDOP() {
  return getToken(CSubsetParser::ADDOP, 0);
}

CSubsetParser::Unary_expressionContext* CSubsetParser::UnaryExprAddContext::unary_expression() {
  return getRuleContext<CSubsetParser::Unary_expressionContext>(0);
}

CSubsetParser::UnaryExprAddContext::UnaryExprAddContext(Unary_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnaryExprAddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnaryExprAdd(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Unary_expressionContext* CSubsetParser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 38, CSubsetParser::RuleUnary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(288);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubsetParser::ADDOP: {
        _localctx = _tracker.createInstance<CSubsetParser::UnaryExprAddContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(283);
        match(CSubsetParser::ADDOP);
        setState(284);
        unary_expression();
        break;
      }

      case CSubsetParser::NOT: {
        _localctx = _tracker.createInstance<CSubsetParser::UnaryExprNotContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(285);
        match(CSubsetParser::NOT);
        setState(286);
        unary_expression();
        break;
      }

      case CSubsetParser::LPAREN:
      case CSubsetParser::ID:
      case CSubsetParser::CONST_INT:
      case CSubsetParser::CONST_FLOAT: {
        _localctx = _tracker.createInstance<CSubsetParser::UnaryExprFactorContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(287);
        factor();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

CSubsetParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::FactorContext::getRuleIndex() const {
  return CSubsetParser::RuleFactor;
}

void CSubsetParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FactorConstIntContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::FactorConstIntContext::CONST_INT() {
  return getToken(CSubsetParser::CONST_INT, 0);
}

CSubsetParser::FactorConstIntContext::FactorConstIntContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorConstIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorConstInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorIncOpContext ------------------------------------------------------------------

CSubsetParser::VariableContext* CSubsetParser::FactorIncOpContext::variable() {
  return getRuleContext<CSubsetParser::VariableContext>(0);
}

tree::TerminalNode* CSubsetParser::FactorIncOpContext::INCOP() {
  return getToken(CSubsetParser::INCOP, 0);
}

CSubsetParser::FactorIncOpContext::FactorIncOpContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorIncOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorIncOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorDecOpContext ------------------------------------------------------------------

CSubsetParser::VariableContext* CSubsetParser::FactorDecOpContext::variable() {
  return getRuleContext<CSubsetParser::VariableContext>(0);
}

tree::TerminalNode* CSubsetParser::FactorDecOpContext::DECOP() {
  return getToken(CSubsetParser::DECOP, 0);
}

CSubsetParser::FactorDecOpContext::FactorDecOpContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorDecOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorDecOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorVarContext ------------------------------------------------------------------

CSubsetParser::VariableContext* CSubsetParser::FactorVarContext::variable() {
  return getRuleContext<CSubsetParser::VariableContext>(0);
}

CSubsetParser::FactorVarContext::FactorVarContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorExprContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::FactorExprContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::FactorExprContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::FactorExprContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::FactorExprContext::FactorExprContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorConstFloatContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::FactorConstFloatContext::CONST_FLOAT() {
  return getToken(CSubsetParser::CONST_FLOAT, 0);
}

CSubsetParser::FactorConstFloatContext::FactorConstFloatContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorConstFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorConstFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorArgListContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::FactorArgListContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::FactorArgListContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::Argument_listContext* CSubsetParser::FactorArgListContext::argument_list() {
  return getRuleContext<CSubsetParser::Argument_listContext>(0);
}

tree::TerminalNode* CSubsetParser::FactorArgListContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::FactorArgListContext::FactorArgListContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorArgListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorArgList(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::FactorContext* CSubsetParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 40, CSubsetParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(308);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorVarContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(290);
      variable();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorArgListContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(291);
      match(CSubsetParser::ID);
      setState(292);
      match(CSubsetParser::LPAREN);
      setState(293);
      argument_list();
      setState(294);
      match(CSubsetParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorExprContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(296);
      match(CSubsetParser::LPAREN);
      setState(297);
      expression();
      setState(298);
      match(CSubsetParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorConstIntContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(300);
      match(CSubsetParser::CONST_INT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorConstFloatContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(301);
      match(CSubsetParser::CONST_FLOAT);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorIncOpContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(302);
      variable();
      setState(303);
      match(CSubsetParser::INCOP);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorDecOpContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(305);
      variable();
      setState(306);
      match(CSubsetParser::DECOP);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_listContext ------------------------------------------------------------------

CSubsetParser::Argument_listContext::Argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Argument_listContext::getRuleIndex() const {
  return CSubsetParser::RuleArgument_list;
}

void CSubsetParser::Argument_listContext::copyFrom(Argument_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArgumentListNoArgsContext ------------------------------------------------------------------

CSubsetParser::ArgumentListNoArgsContext::ArgumentListNoArgsContext(Argument_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ArgumentListNoArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitArgumentListNoArgs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgumentListMultipleArgsContext ------------------------------------------------------------------

CSubsetParser::ArgumentsContext* CSubsetParser::ArgumentListMultipleArgsContext::arguments() {
  return getRuleContext<CSubsetParser::ArgumentsContext>(0);
}

CSubsetParser::ArgumentListMultipleArgsContext::ArgumentListMultipleArgsContext(Argument_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ArgumentListMultipleArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitArgumentListMultipleArgs(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Argument_listContext* CSubsetParser::argument_list() {
  Argument_listContext *_localctx = _tracker.createInstance<Argument_listContext>(_ctx, getState());
  enterRule(_localctx, 42, CSubsetParser::RuleArgument_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(312);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubsetParser::LPAREN:
      case CSubsetParser::ADDOP:
      case CSubsetParser::NOT:
      case CSubsetParser::ID:
      case CSubsetParser::CONST_INT:
      case CSubsetParser::CONST_FLOAT: {
        _localctx = _tracker.createInstance<CSubsetParser::ArgumentListMultipleArgsContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(310);
        arguments(0);
        break;
      }

      case CSubsetParser::RPAREN: {
        _localctx = _tracker.createInstance<CSubsetParser::ArgumentListNoArgsContext>(_localctx);
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

CSubsetParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::ArgumentsContext::getRuleIndex() const {
  return CSubsetParser::RuleArguments;
}

void CSubsetParser::ArgumentsContext::copyFrom(ArgumentsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArgumentsLogicExprContext ------------------------------------------------------------------

CSubsetParser::Logic_expressionContext* CSubsetParser::ArgumentsLogicExprContext::logic_expression() {
  return getRuleContext<CSubsetParser::Logic_expressionContext>(0);
}

CSubsetParser::ArgumentsLogicExprContext::ArgumentsLogicExprContext(ArgumentsContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ArgumentsLogicExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitArgumentsLogicExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgumentsCommaLogicExprContext ------------------------------------------------------------------

CSubsetParser::ArgumentsContext* CSubsetParser::ArgumentsCommaLogicExprContext::arguments() {
  return getRuleContext<CSubsetParser::ArgumentsContext>(0);
}

tree::TerminalNode* CSubsetParser::ArgumentsCommaLogicExprContext::COMMA() {
  return getToken(CSubsetParser::COMMA, 0);
}

CSubsetParser::Logic_expressionContext* CSubsetParser::ArgumentsCommaLogicExprContext::logic_expression() {
  return getRuleContext<CSubsetParser::Logic_expressionContext>(0);
}

CSubsetParser::ArgumentsCommaLogicExprContext::ArgumentsCommaLogicExprContext(ArgumentsContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ArgumentsCommaLogicExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitArgumentsCommaLogicExpr(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::ArgumentsContext* CSubsetParser::arguments() {
   return arguments(0);
}

CSubsetParser::ArgumentsContext* CSubsetParser::arguments(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, parentState);
  CSubsetParser::ArgumentsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, CSubsetParser::RuleArguments, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ArgumentsLogicExprContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(315);
    logic_expression();
    _ctx->stop = _input->LT(-1);
    setState(322);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArgumentsCommaLogicExprContext>(_tracker.createInstance<ArgumentsContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleArguments);
        setState(317);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(318);
        match(CSubsetParser::COMMA);
        setState(319);
        logic_expression(); 
      }
      setState(324);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool CSubsetParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return programSempred(antlrcpp::downCast<ProgramContext *>(context), predicateIndex);
    case 5: return parameter_listSempred(antlrcpp::downCast<Parameter_listContext *>(context), predicateIndex);
    case 9: return declaration_listSempred(antlrcpp::downCast<Declaration_listContext *>(context), predicateIndex);
    case 10: return statementsSempred(antlrcpp::downCast<StatementsContext *>(context), predicateIndex);
    case 17: return simple_expressionSempred(antlrcpp::downCast<Simple_expressionContext *>(context), predicateIndex);
    case 18: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);
    case 22: return argumentsSempred(antlrcpp::downCast<ArgumentsContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::programSempred(ProgramContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::parameter_listSempred(Parameter_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::declaration_listSempred(Declaration_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::statementsSempred(StatementsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::simple_expressionSempred(Simple_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::argumentsSempred(ArgumentsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void CSubsetParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  csubsetParserInitialize();
#else
  ::antlr4::internal::call_once(csubsetParserOnceFlag, csubsetParserInitialize);
#endif
}
