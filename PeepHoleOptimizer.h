#pragma once
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>

using namespace std;

string getReverse(string instr)
{
    if (instr == "PUSH") return "POP";
    else if (instr == "POP") return "PUSH";
    return "";
}

string removeComma(string line){
    for(int i = 0; i < line.size(); i++){
        if(line[i] == ','){
            line[i] = ' ';
        }
    }
    return line;
}

void optimize(string inputFileName, string outputFileName)
{
    cout << "Optimizing\n";
    ifstream code(inputFileName);
    ofstream optcode(outputFileName);
    string line, prevLine, reg1, reg2;
    vector<string> peepWindow;
    int windowSize = 1;
    getline(code, prevLine);
    peepWindow.push_back(prevLine);

    while (getline(code, line))
    {
        stringstream ss_curr(removeComma(line));
        string instrCurr;
        ss_curr >> instrCurr;

        if (windowSize == 0)
        {
            peepWindow.push_back(line);
            windowSize++;
            continue;
        }

        prevLine = peepWindow[windowSize - 1];
        stringstream ss_prev(removeComma(prevLine));
        string instrPrev;
        ss_prev >> instrPrev;

        // Removing redundant consecutive push and pop
        if ((instrCurr == "POP" || instrCurr == "PUSH") && instrPrev == getReverse(instrCurr))
        {
            ss_curr >> reg1;
            ss_prev >> reg2;
            if (reg1 == reg2)
            {
                peepWindow.pop_back();
                windowSize--;
                continue;
            }
        }

        // Removing redundant MOV instructions
        if (instrCurr == "MOV" && instrPrev == "MOV")
        {
            string reg3, reg4;
            ss_curr >> reg1 >> reg2;
            ss_prev >> reg3 >> reg4;
            if ((reg1 == reg4) && (reg2 == reg3))
            {
                peepWindow.pop_back();
                windowSize--;
                continue;
            }
        }

        // No elimination, flush the pending line
        optcode << peepWindow[windowSize - 1] << "\n";
        peepWindow.pop_back();
        windowSize--;

        // Removing redundant operations such as ADD EAX, 0; MUL AX, 1
        if (instrCurr == "ADD" || instrCurr == "SUB")
        {
            string val, reg;
            ss_curr >> reg >> val;
            if (val == "0") continue;
        }
        else if (instrCurr == "MUL")
        {
            string val, reg;
            ss_curr >> reg >> val;
            if (val == "1") continue;
        }

        peepWindow.push_back(line);
        windowSize++;
    }

    // Flush remaining
    for (int i = 0; i < windowSize; i++)
        optcode << peepWindow[i] << "\n";
}