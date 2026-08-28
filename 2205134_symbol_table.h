#include <iostream>
#include <string>

#include "2205134_scope_table.h"

using namespace std;

class SymbolTable
{
    ScopeTable *currentScope;
    int numberOfBuckets;

public:
    SymbolTable(int numberOfBuckets)
    {
        this->numberOfBuckets = numberOfBuckets;
        this->currentScope = new ScopeTable(numberOfBuckets);
    }
    ~SymbolTable()
    {
        ScopeTable *delScope = currentScope;
        while (delScope != NULL)
        {
            ScopeTable *temp = delScope;
            delScope = delScope->getParentScope();
            delete temp;
        }
    }
    // string getType(string name)
    // {
    //     SymbolInfo *symbol = lookUp(name);
    //     if (symbol == NULL)
    //     {
    //         return string("");
    //     }
    //     else
    //     {
    //         return symbol->getType();
    //     }
    // }

    // string getDataType(string name)
    // {
    //     SymbolInfo *symbol = lookUp(name);
    //     if (symbol == NULL)
    //     {
    //         return string("");
    //     }
    //     else
    //     {
    //         AuxInfo *aux = symbol->getAuxInfo();
    //         if (aux == NULL)
    //         {
    //             return string(""); 
    //         }
    //         return aux->getDataType();
    //     }
    // }

    // vector<string> getArgTypes(string name)
    // {
    //     SymbolInfo *symbol = lookUp(name);
    //     if (symbol == NULL)
    //     {
    //         vector<string> temp;
    //         return temp;
    //     }
    //     else
    //     {
    //         return symbol->getAuxInfo()->getArgTypes();
    //     }
    // }

    // bool isArray(string name){
    //     SymbolInfo *symbol = lookUp(name);
    //     if (symbol == NULL)
    //     {
    //         return false;
    //     }
    //     else
    //     {
    //         return symbol->getIsArray();
    //     }
    // }

    bool canExit()
    {
        return !currentScope->isRootScope();
    }

    bool isRootScope(){
        return currentScope->isRootScope();
    }

    /*Create a new scope table and make it the current one. Also, make the previous “current” scope table as its parent_scope table.*/
    void enterScope()
    { //? bool
        ScopeTable *newScopeTable = new ScopeTable(numberOfBuckets, currentScope);
        if (newScopeTable != NULL)
        {
            // newScopeTable->setParentScope(currentScope);
            this->currentScope = newScopeTable;
        }
    }
    /*Remove the current scope table.*/
    bool exitScope(bool print=true)
    {
        // if (!currentScope->isEmpty())
        // {
        //     printAllScopeTableNonEmpty();
        // }
        if(print) {
            printAllScopeTableNonEmpty();
        }
        if (currentScope->isRootScope())
        {
            // cout<<"\tError: Cannot exit rootScope\n";
            return false;
        }
        ScopeTable *temp = currentScope;
        this->currentScope = this->currentScope->getParentScope();
        delete temp;
        return true;
    }
    /*Insert a symbol in the current scope table. This method will return a boolean
    value indicating whether the insertion is successful.*/
    bool insert(SymbolInfo *symbol)
    {
        return currentScope->insert(symbol);
    }
    /*Remove a symbol from the current scope table. This method will return a boolean value indicating whether the removal is successful.*/
    bool remove(string symbol)
    {
        // not found in current scope table?
        return currentScope->deleteEntry(symbol);
    }
    /*Search a symbol in the symbol table. First, search the current scope table. If the symbol is not in the current one, then search its parent scope table and so on. This method will return a pointer to the object of the SymbolInfo class representing the looked up symbol.*/
    SymbolInfo *lookUp(string symbol)
    {
        ScopeTable *lookUpScope = currentScope;
        while (lookUpScope != NULL)
        {
            SymbolInfo *foundSymbol = lookUpScope->lookUp(symbol);
            if (foundSymbol != NULL)
            {
                return foundSymbol;
            }
            else
            {
                lookUpScope = lookUpScope->getParentScope();
            }
        }
        // cout<<"\t'"<<symbol<<"' not found in any of the ScopeTables\n";
        return NULL;
    }
    /*Print the current scope table.*/
    void printCurrentScopeTable()
    {
        this->currentScope->print(1);
    }
    void printCurrentScopeTableNonEmpty()
    {
        this->currentScope->printNonEmpty(1);
    }
    /*Print all the scope tables currently in the symbol table.*/
    void printAllScopeTable()
    {
        ScopeTable *current = currentScope;
        int depth = 1;
        while (current != NULL)
        {
            current->print(depth);
            depth++;
            current = current->getParentScope();
        }
    }
    void printAllScopeTableNonEmpty()
    {
        ScopeTable *current = currentScope;
        int depth = 1;
        while (current != NULL)
        {
            current->printNonEmpty(depth);
            depth++;
            current = current->getParentScope();
        }
    }
};