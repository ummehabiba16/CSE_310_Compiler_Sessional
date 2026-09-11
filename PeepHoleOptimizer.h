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
    if (instr == "PUSH")
    {
        return "POP";
    }
    else if (instr == "POP")
    {
        return "PUSH";
    }
    return "";
}

void optimize(string inputFileName, string outputFileName)
{
    cout << "Optimizing\n";
    ifstream code(inputFileName);
    ofstream optcode(outputFileName);
    string line, instruction, reg1, reg2;
    vector<string> peepWindow;
    int windowSize = 0;
    while (getline(code, line))
    {
        stringstream ss(line);
        ss >> instruction;
        if (instruction == "POP" || instruction == "PUSH")
        {
            ss >> reg1;
            if (windowSize == 0)
            {
                peepWindow.push_back(line);
                windowSize++;
                continue;
            }
            else
            {
                string prevLine = peepWindow[windowSize - 1];
                peepWindow.pop_back();
                windowSize--;
                stringstream ss_prev(prevLine);
                string instrPrev;
                ss_prev >> instrPrev;
                if (instrPrev == getReverse(instruction))
                {
                    ss_prev >> reg2;
                    if (reg1 == reg2)
                    {
                        // PUSH X
                        // POP X
                        // eliminate both , nothing to print in optcode
                        continue;
                    }
                    else
                    {
                        // PUSH X
                        // POP Y
                        optcode << prevLine <<"\n";
                        peepWindow.push_back(line);
                        windowSize++;
                    }
                }
                else
                {
                    optcode << prevLine << "\n";
                    peepWindow.push_back(line);
                    windowSize++;
                }
            }
        }
        else
        {
            //flush whatever already in peepwindow
            if(windowSize > 0){
                optcode << peepWindow[windowSize - 1]<<"\n";
                peepWindow.pop_back();
                windowSize--;
            }
            optcode << line << "\n";
        }
    }
}