//
//  Graph.cpp
//  NodesXcode
//
//  Created by Elmer, Josiah on 4/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "Graph.hpp"

using namespace CTECData;

template <class Type>
const int CTECGraph<Type> :: MAXIMUM;

template <class Type>
void Graph<Type> :: addVertex(const Type& value)
{
    asset(size() < MAXIMUM);
    int newVertexNumber = manyVertices;
    manyVertices++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < manyVertices;
        otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber] [newVertexNumber] = false;
    }
    
}

template <class Type>
void Graph<Type> :: addEdge(int source, int )
{
    
}

