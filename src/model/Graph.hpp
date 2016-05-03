//
//  Graph.hpp
//  NodesXcode
//
//  Created by Elmer, Josiah on 4/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

namespace CTECData
{
    template <class Type>
    class Graph
    {
    private:
        static const int MAXIMUM = 20;
        bool adjacentMatrix [MAXIMUM] [MAXIMUM];
        Type labels[MAXIMUM];
        int manyVertices;
    public:
        Graph();
        ~Graph();
        
        void addVertex(const Type& value);
        void addEdge(int source, int target);
        void removeEdge(int source, int target);
        Type& operator [] (int vertex);
        Type operator [] (int vertex) const;
        int size();
        bool isEdge(int source, int target)const;
        std::set<int> neighbors(int vertex) const;
        
    };
    
}

#include <stdio.h>

#endif /* Graph_hpp */
