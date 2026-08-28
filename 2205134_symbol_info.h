#include <iostream>
#include <string>
#include "2205134_AuxInfo.h"

using namespace std;

class SymbolInfo
{
    string name;
    string type;
    AuxInfo* auxInfo;
    SymbolInfo *sibling;

public:
    SymbolInfo(string name, string type)
    {
        this->name = name;
        this->type = type;
        this->auxInfo = new AuxInfo();
        this->sibling = NULL;
    }
    SymbolInfo(string name, string type, string dataType)
    {
        this->name = name;
        this->type = type;
        this->auxInfo = new AuxInfo(dataType);
        this->sibling = NULL;
    }

    //for array
    SymbolInfo(string name, string type, int arraySize)
    {
        this->name = name;
        this->type = type;
        this->auxInfo = new AuxInfo();
        this->auxInfo->setIsArray(true);
        this->auxInfo->setSize(arraySize);
        this->sibling = NULL;
    }

    AuxInfo* getAuxInfo(){
        return auxInfo;
    }

    void setAuxInfo(AuxInfo* auxInfo){
        this->auxInfo = auxInfo;
    }
    // getters
    string getName()
    {
        return name;
    }
    string getType()
    {
        return type;
    }
    SymbolInfo *getSibling()
    {
        return sibling;
    }
    // setters
    void setName(string name)
    {
        this->name = name;
    }
    void setType(string type)
    {
        this->type = type;
    }

    void setDataType(string str){
        auxInfo->setDataType(str);
    }
    void setSibling(SymbolInfo *sibling)
    {
        this->sibling = sibling;
    }
    void printSymbol(){
        cout<<"<"<<name<<","<<type<<">";
    }
};