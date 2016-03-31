/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: jelm9149
 */

#include "NodeController.h"
#include "../Model/Node.h"
#include "../Model/CTECList.cpp"
#include <iostream>

using namespace std;

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
	numbers = new CTECList<int>();
}

NodeController::~NodeController()
{

}

void NodeController :: testLists()
{
	numbers->addToFront(3);
	numbers->addToEnd(8);
	cout << "End should be 8 and is: " << numbers->getEnd() << endl;
}

void NodeController :: start()

{
	arrayTimer.startTimer();
	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index,  (index * 23));
	}

	for(int index = notHipsterInts->getSize()-1; index >= 0; index--)
	{
		cout << "The contents of the notHipsterInts array node" << index << " are:" << notHipsterInts->get(index) << endl;
	}

	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
    
    void NodeController:: mergersort(int data[], int size)
    {
        int sizeOne;
        int sizeTwo;
        
        if(size > 1)
        {
            sizeOne = size/2;
            sizeTwo = sizesizeOne;
            
            mergesort(data, sizeOne);
        }
    }
    
    void NodeController::doMergesort()
    {
        mergeData + ew it[50000]; spot ++)
        {
            int my Random = rand();
            mergeData[spot] = myRandom;
            
        }
        for (int spot =0; spot < 5000; spot++)
        {
            cout <<mergeDat[spot] < ",";
        }
        
        Timer mergeTimer;
        mergeTimer.startTimer();
        mergesort(mergeData, 500000);
        mergeTimer.stopTimer();
        mergeTimer.displayTimerInformation();
        
        for (int spot =0; spot < 5000; spot++)
        {
            cout << mergeData[spot << ","]
            delete [] mergeData;
        }
    }
    
    void NodeController::merge)int, data[]. int sizeOe, int sizeTwo)
    {
        int * temp;
        int copied = 0;
        int copied1 = 0;
        int copied2 = 0;
        int index;
        
        temp = new int[size = sizeTwo];
        
        wile ((copied1 < sizeOne) && (copied2 < sizeTo))
        {
            of(data[copied1] < (data = sizeOne)[copied2])
            {
                temp[copied++] = data[copied1++];
                
            }
            else
            {
                temp[copied++] = (data= sizeOne)[ copied2++];
            }
        }
        
        while(copied1 < sizeOne)
        {
            temp[copied++] = dta {copied1++);
        }
            while(copied2 < seTwo)
            {
                temp[ copied==] = (data = sizeOne0 ) [copied2++];
            }
    }
    while(copied1 < sizeOne)
    {
        temp[copied++] + data[copied1++];
    }
    while( copied2 < sizeTwo)
    {
        temp[copied++] = (data + sizeOne)[copied2++];
        }
        
        for(indec = 0; inx < sizeOne = sizeTwo; index++)
        {
            data[index] = temp[index];
        }
    }
}
