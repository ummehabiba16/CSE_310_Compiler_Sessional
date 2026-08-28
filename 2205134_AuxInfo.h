#include <string>
#include <iostream>

using namespace std;

// enum syntax written by claude
enum class DataType
{
    INT,
    FLOAT,
    VOID,
    ERROR
};

DataType stringToType(const string &s)
{
    if (s == "int")
        return DataType::INT;
    if (s == "float")
        return DataType::FLOAT;
    if (s == "void")
        return DataType::VOID;
    return DataType::ERROR; // "" or anything unrecognized
}

string typeToString(DataType t)
{
    switch (t)
    {
    case DataType::INT:
        return "int";
    case DataType::FLOAT:
        return "float";
    case DataType::VOID:
        return "void";
    default:
        return "";
    }
}

class AuxInfo
{
    DataType dataType; // var and function type, symbolInfo has ID | array type, symbolInfo has array as type
    int size;          // array size
    bool isArray;
    // for function
    int argCount;
    vector<DataType> argTypes;
    // vector<bool> argIsArray; //skipping: current grammar does not allow array as parameters

public:
    AuxInfo(){
        isArray = false;
        dataType = DataType::ERROR;
        size = 0;
        argCount = -1;
    }
    // // for array
    // AuxInfo(string dataType, int size)
    // {
    //     this->dataType = stringToType(dataType);
    //     this->isArray = true;
    // }
    AuxInfo(string dataType)
    {
        this->dataType = stringToType(dataType);
        this->isArray = false;
        this->argCount = -1;
    }
    AuxInfo(DataType dataType)
    {
        this->dataType = dataType;
        this->isArray = false;
        this->argCount = -1;
    }
    // function
    AuxInfo(string retType, vector<string> argTypes)
    {
        this->dataType = stringToType(retType);
        vector<DataType> d;
        for (int i = 0; i < argTypes.size(); i++)
        {
            d.push_back(stringToType(argTypes[i]));
        }
        this->argTypes = d;
        this->argCount = argTypes.size();
        this->isArray = false;
    }

    AuxInfo(string retType, vector<DataType> argTypes)
    {
        this->dataType = stringToType(retType);
        this->argTypes = argTypes;
        this->argCount = argTypes.size();
        this->isArray = false;
    }

    DataType getDataType()
    {
        return dataType;
    }
    string getDataTypeStr()
    {
        return typeToString(dataType);
    }
    void setDataType(string dataType)
    {
        this->dataType = stringToType(dataType);
    }

    int getSize()
    {
        return size;
    }
    void setSize(int size)
    {
        this->size = size;
    }
    int getArgCount()
    {
        return argCount;
    }

    bool getIsArray(){
        return isArray;
    }

    vector<DataType> getArgTypes()
    {
        return argTypes;
    }
    void setArgTypes(vector<DataType> argTypes)
    {
        this->argTypes = argTypes;
        this->argCount = argTypes.size();
    }
    void setIsArray(bool isArr){
        this->isArray = isArr;
    }
};