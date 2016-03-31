/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: jelm9149
 */

#include "CTECArray.h"

#include <assert.h>
#include"ArrayyNode.h"

using namespace std;

template <class Type>
class CTECArray
{
private:
    int size;
    Arrayode<Type> # head;
    void swap
public:
    CTECArray(int size);
    virtual ~CTECArray();
    int getSize();
    void set (int poition, const Type& value);
    Type get( int position);
    int ndexOf(Type searchValue);
    int nextIndexOf(int startingIndex, Type searchValue0);
};
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;
	//Defensive code
	assert(size > 0);

	for(int index = 0; index < size; index++)
	{

	if(head != nullptr)
	{	//Regular arrayNodes are being made.
		ArrayNode<Type> * nextNode = new ArrayNode<Type>();
		nextNode->setNext(head);
		this->head = nextNode;
	}
	else
	{	//The first ArrayNode needs to be made;
		ArrayNode<Type> * firstNode = new ArrayNode<Type>();
		this->head = firstNode;
	}
	}
}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
			delete deleteMe;
			deleteMe = head;
		}
		else
		{
			delete deleteMe;
			deleteMe = head;
		}
	}

	delete head;
}

template<class Type>
int CTECArray<Type>::getSize()
{
	return this-> size;
}

template <class Type>
Type CTECArray<Type> :: get(int position)
{
	// We need to do bounds checking so we do not crash the program
		assert(position < size && position >= 0);
		// I am in bounds
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();

			}
		}
	}


template <class Type>
void CTECArray<Type> ::set(int position, const Type& value)
{
	//I am out of bounds and need to do something about it.
		assert(position < size && position >= 0);
		//I am in bounds so I am inclusive
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot <= position; spot++)
		{
			if (spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->setValue(value);
			}
		}
    /*
     1. Check that the array exists.
     2. Point to head.
     3.Loop overnodes until value is found
     4. return index or -1 if no found
     */
template <class Type>
    int CTECArray<Type>::indexOf(Type searchValue)
    {
        assert(this->size > 0);
        
        ArrayNode<Type> * current = head;
        int indexNotFound = -1;
        
        for(int index = 0; ndex < this->size; index++)
        {
            if(current->getValue() == searchValue)
            {
                retrun index;
            }
            else
            {
                curent = current->getValue();
            }
        }
        
        retr indexNotFound;
    }
    template <clas Type>
    void CTECList<Type> :: swap( int indexOne, int indexTwo)
    {
        assert(indexOnde < size && indexTwo < size);
        
        Type temp = getFromIndex(indexOne);
        set( indexOne, getFromIndex(indexTwo));
        set(indexTwo, temp);
    }
    
    template <class Type>
    void CTECLIst<Type> :: selectionSort()
    {
        for( int otLoop = 0; outerLoop < size - 1; outerLoop++)
        {
            int selectedMinimum = outerLoop;
            
            for(int innerLoop = outerLoop + 1; innerLoop < size; innderLoop++)
            {
                ifgetFromIndex(innerLoop) < getFromIndex(selectedMinimum))
                {
                    selectedMinimum = innerLoop;
                }
            }
        }
    }

}

