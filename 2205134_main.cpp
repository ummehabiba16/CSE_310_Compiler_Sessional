#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "CSubsetLexer.h"
#include "CSubsetParser.h"
#include "CSubset.h"

using namespace antlr4;
using namespace std;

ofstream lexLogFile; // used by Lexer.g4's writeIntoLexLogFile()

ofstream logFile("2205134_log.txt");
ofstream errorFile("2205134_error.txt");
ofstream asmFile("2205134.asm");
ofstream asmTempFile("2205134Temp.asm")

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <input_file>" << endl;
        return 1;
    }

    ifstream inputFile(argv[1]);
    if (!inputFile.is_open()) {
        cerr << "Error opening input file: " << argv[1] << endl;
        return 1;
    }

    ANTLRInputStream input(inputFile);
    CSubsetLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    CSubsetParser parser(&tokens);

    CSubsetParser::StartContext* tree = parser.start();
    CSubset cSubset;
    any parse_result = cSubset.visit(tree);
    
    cout << "Parsing completed." << endl;

    inputFile.close();
    return 0;
}
