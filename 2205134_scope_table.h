#include <iostream>
#include <string>
#include "2205134_symbol_info.h"


using namespace std;

extern ofstream logFile;


// unsigned int sdbmHash(const char *p)
// {
//     unsigned int hash = 0;
//     auto *str = (unsigned char *)p;
//     int c{};
//     while ((c = *str++))
//     {
//         hash = c + (hash << 6) + (hash << 16) - hash;
//     }
//     return hash;
// }
// unsigned int SDBMHash(string str, unsigned int num_buckets)
// {
//     unsigned int hash = 0;
//     unsigned int len = str.length();
//     for (unsigned int i = 0; i < len; i++)
//     {
//         hash = ((str[i]) + (hash << 6) + (hash << 16) - hash) % num_buckets;
//     }
//     return hash;
// }

class ScopeTable
{
    // Array for the pointers of SymbolInfo type
    SymbolInfo **entries;
    ScopeTable *parent_scope;
    string scope_number; // unique
    int numberOfBuckets;
    int childCount;
    int count;

    // hash function
    unsigned int hash(string name, unsigned int num_buckets)
    {
        //return sdbmHash(name.c_str()) % num_buckets;
        unsigned long sum = 0;
        for (char c : name) sum += (unsigned char)c;
        return (int)(sum % num_buckets);
    }

public:
    /*You have to write a constructor method that takes as input an integer n
and allocates n buckets in the corresponding hash table.*/
    ScopeTable(int numberOfBuckets, ScopeTable *parent_scope = NULL)
    {
        this->numberOfBuckets = numberOfBuckets;
        this->entries = new SymbolInfo *[numberOfBuckets];
        this->count = 0;
        // initialize each bucket
        for (int i = 0; i < numberOfBuckets; i++)
        {
            entries[i] = NULL;
        }
        this->parent_scope = parent_scope;
        if (parent_scope == NULL)
        {
            this->scope_number = "1";
        }
        else
        {
            parent_scope->incChildCount();
            this->scope_number = parent_scope->getScopeNumber() + "." + to_string(parent_scope->getChildCount());
        }
        this->childCount = 0;

        // cout << "\tScopeTable# "<<scope_number<<" created\n";
    }

    void incChildCount()
    {
        this->childCount++;
    }
    int getChildCount()
    {
        return childCount;
    }
    /*You also have to write a destructor method to deallocate memory.*/
    ~ScopeTable()
    {
        for (int i = 0; i < numberOfBuckets; i++)
        {
            // each bucket
            SymbolInfo *start = entries[i];
            while (start)
            {
                SymbolInfo *p = start->getSibling();
                delete start;
                start = p;
            }
        }
        delete[] entries;
        entries = NULL;
        // cout<<"\tScopeTable# "<<scope_number<<" removed\n";
    }

    
    /*Insert the symbol into the current scope table if already not inserted. This method will return a boolean value indicating whether the scope table insertion to the symbol table is successful. An insertion is considered successful if the symbol did not exist in the current scope table before insertion.*/
    bool insert(SymbolInfo *symbol)
    {
        int bucketNumber = hash(symbol->getName(), numberOfBuckets);
        int pos = 1;
        if (lookUpInBucket(entries[bucketNumber], symbol->getName(), pos) == NULL)
        {
            SymbolInfo *start = entries[bucketNumber];
            if (start == NULL)
            {
                entries[bucketNumber] = symbol;
            }
            else
            {
                while (start->getSibling() != NULL)
                {
                    start = start->getSibling();
                }
                start->setSibling(symbol);
            }
            // symbol->setSibling(entries[bucketNumber]);
            // entries[bucketNumber] = symbol;
            // cout<<"\tInserted in ScopeTable# "<<scope_number<<" at position "<<bucketNumber+1<<", "<<pos<<"\n";
            count++;
            return true;
        }
        else
        {
            // cout<<"\t'"<<symbol->getName()<<"' already exists in the current ScopeTable\n";
            //cout<<"< "<<symbol->getName()<<" : "<<symbol->getType()<<" > already exists in ScopeTable# "<<this->scope_number<<" at position "<<bucketNumber<<", "<<pos-1<<"\n\n";
            return false;
        }
    }

    /*Search the hash table for a particular symbol. This method will return a SymbolInfo type pointer corresponding to the looked up symbol. You can return NULL or nullptr if the symbol does not exist.*/
    SymbolInfo *lookUp(string symbol)
    {
        int bucketNumber = hash(symbol, numberOfBuckets);
        int pos = 1;
        SymbolInfo *found = lookUpInBucket(entries[bucketNumber], symbol, pos);
        if (found != NULL)
        {
            // cout<<"\t'"<<symbol<<"' found in ScopeTable# "<<scope_number<<" at position "<<bucketNumber+1<<", "<<pos<<"\n";
            return found;
        }
        return NULL;
    }
    SymbolInfo *lookUpInBucket(SymbolInfo *start, string symbol, int &pos)
    {
        while (start)
        {
            if (start->getName() == symbol)
            {
                return start;
            }
            start = start->getSibling();
            pos++;
        }
        return NULL;
    }
    /*Delete an entry from the current scope table. This method will return a boolean value indicating whether the deletion is successful. A deletion is considered successful if the symbol existed in the current scope table before deletion.*/
    bool deleteEntry(string symbol)
    { // spec mentioned delete
        int bucketNumber = hash(symbol, numberOfBuckets);
        int pos = 1;
        SymbolInfo *found = lookUpInBucket(entries[bucketNumber], symbol, pos);
        ;
        if (found == NULL)
        {
            // cout<<"\tNot found in the current ScopeTable\n";
            return false;
        }
        else
        {
            SymbolInfo *start = entries[bucketNumber];
            SymbolInfo *pred = NULL;
            while (start != NULL && start->getName() != symbol)
            {
                pred = start;
                start = start->getSibling();
                pos++;
            }
            SymbolInfo *successor = start->getSibling();
            if (pred != NULL)
            {
                pred->setSibling(successor);
            }
            else
            {
                // deleting the first entry
                entries[bucketNumber] = successor;
            }
            delete start;
            count--;
            // cout<<"\tDeleted '"<<symbol<<"' from ScopeTable# "<<scope_number<<" at position "<<bucketNumber+1<<", "<<pos<<"\n";

            return true;
        }
    }
    /*Print the scope table in the console.*/
    void print(int depth)
    {
        // if(count == 0){
        //     return;
        // }
        printIndentation(depth);
        logFile << "ScopeTable# " << scope_number << "\n";
        for (int i = 0; i < numberOfBuckets; i++)
        {
            printIndentation(depth);
            logFile << i << "-->";
            printBucket(i);
        }
    }

    void printNonEmpty(int depth)
    {
        // if(count == 0){
        //     return;
        // }
        //printIndentation(depth);
        logFile << "ScopeTable # " << scope_number << "\n";
        for (int i = 0; i < numberOfBuckets; i++)
        {
            if (entries[i] == NULL)
            {
                continue;
            }
            printIndentation(depth);
            logFile << i << " --> ";
            printBucket(i);
        }
        logFile<<"\n\n";
    }

    void printBucket(int bucketNumber)
    {
        SymbolInfo *bucket = entries[bucketNumber];
        while (bucket != NULL)
        {
            logFile << "< " << bucket->getName() << " , " << bucket->getType() << " >";
            bucket = bucket->getSibling();
        }
        logFile << "\n";
    }

    string getScopeNumber()
    {
        return scope_number;
    }

    ScopeTable *getParentScope()
    {
        return this->parent_scope;
    }
    void setParentScope(ScopeTable *parent)
    {
        this->parent_scope = parent;
    }

    bool isRootScope()
    {
        if (this->getParentScope() == NULL)
        {
            return true;
        }
        return false;
    }

    bool isEmpty(){
        return count==0;
    }

    void printIndentation(int depth)
    {
        while (depth--)
        {
            logFile<<" ";
        }
    }
};