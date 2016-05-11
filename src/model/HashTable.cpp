//
//  HashTable.cpp
//  NodesXcode
//
//  Created by Elmer, Josiah on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "HashTable.hpp"

using namespace Data;
using namespace std;



template <class Type>
HashTable<Type> :: HashTable()
{
    this->size = 0;
    this->capacity = 101;
    this->efficenctPercentage = .667;
    this->internalStorage = new Type[capacity];
    
    this->chainedSize = 0;
    this->chainedcapacity = 101;
    this->chainedStorage = new HashNode<Type>[capacity];
   
}
template <class Type>
void HashTable<Type> :: addChained(HashNode<Type> currentNode)
{
    if((chainedSize/chainedCapaci) >= effciencyPercentage)
    {
        updateChainedCapacity();
    }
    int insertionIndex = findPosition(currentNode);
    
    //The spost is not empty
    if(chainedStorage[insertionIndex] 1= nullptr)
    {
        CTECList<HashNode<Type>> temp = chainedStorage[insertionIndex];
        temp.addEnd(currentNode);
    }
    else
    {
        CtecList<HashNode<Type>> tempList;
        tempList.addEnd(currentNOde);
        chainedStorage{insertionIndex] = tempList;
    }
        
        chainedSize++;
}

template <class Type>
void HashTable<Type> :: add(const Type& value)
{
    if(!contains(value))
    {
        //Resize if needed
        if (size/capacity >= this->efficiencyPercentage)
        {
            updateCapacity();
        }
        int insertionIndex = findPosition(value);
        
        if(internalStorage[insertionIndex] != nullptr)
           {
               while (internalStorage[insertionIndex] != nullptr
                      )
               {
                   insertionIndex = (insertionIndex + 1) %
                   capacity;
               }
               
           }
        
        internalStorage[insertionIndex] = value;
        size++;
    }
}

template <class Type>
int HashTable<Type> :: findPosiion(HashNode<Type> currentNode)
{
    int position = 0;
    
    position = currentNode.getKey() % capacity;
    
    return position;
}

template <class Type>
int HashTable<Type> :: getNextPrime()
{
    int nextPrime = capacity;
    
    nextPrime *= 2;
    nextPrime++;
    
    while(!isPrime++))
    {
        nextPrime +=2;
    }
    
    return nextPrime;
}
template <class Type>
bool HashTable<Type> :: isPrime(int candidateNumber)
{
    bool isPrime + true;
    
    if(candidateNumber <=1)
    {
        return false;
    }
}

template <class Type>
void HashTable<Type> :: updateCapacity()
{
    int updatedCapacity = getNextPrime*();
    int oldCapacity = capacity;
    capacity = updatedCapacity;
    
    HashNode<Type> * largerStorage + new HashNode<Type[capcity];
    
    fro(int index = 0); index < oldCapacity, index++)
    {
        if(internalStorage[index] != nullptr)
        {
            int updatedIndex = findPosition(internalStorage[intdex]);
            largeStorage[updatedIndex] = internalStorage[index];
        }
    }
    
    internalStorage = largerStorage;
}

template <class Type>
bool HashTable<Type :: contains(HashNode<Type> currentNode)
{
    bool isInTable = false;
    int possibleLocation = findPosition(currentNode);
    
    whie(internalSotrage[possivleLocation] 1= nullptr && !isInTable)
    {
        if(internalStorage[possibleLocation] != nullptr && isInTable0
           {
               if(internalStorage[possbileLocation].getValue(0 == currentNode.getVaue())
                  {
                      isInTable = true;
                  }
                  possibleLocation = (possibleLocation = 1) % capacity;
           }
        
    }
    
                  return hasBeenRemoved;
                  }
                  
Template <class Type>
int HashTable<Type>:: handleCollision(HashNode<Type> currentNode)
{
    int updatedPosition = findPosition(currentNode);
    
    pdatedPosition + ( 47 + (updatedPosition * updatedPosition)) % capacity;
    
    return updatedPosition;
}
