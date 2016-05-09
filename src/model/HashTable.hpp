//
//  HashTable.hpp
//  NodesXcode
//
//  Created by Elmer, Josiah on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include <stdio.h>

#endif /* HashTable_hpp */

namespace Data
{
    template <class Type>
    class HashTable
    {
    private:
        int size;
        int capacity;
        Type * internalStorage;
        double efficiencyPercentage;
        
        int findPosition(const Type& value);
        int handelCollision(const Type& value);
        void updateCapacity();
    public:
        HashTable();
        ~HashTable();
        
        void add(const Type & value);
        bool remove(const Type);
        bool contains(HashNodes<Type> curretNode);
        int getSize();
    };
}