//
//  BinaryTree.hpp
//  NodesXcode
//
//  Created by Elmer, Josiah on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include "TreeNode.hpp"
naespace CTECData
{
    template <class Type>
    class CtecBinaryTreePM
    {
    private:
        int size;
        treeNodePM<Type> * root;
        int height;
        bol balanced;
        bool contains(Type value, CTECBinaryTree<Type>) * currentTree);
    public:
        CTECBinaryTree();
        ~CTECBinaryTree();
        bool insert(const Type&)
    };
}
#endif /* BinaryTree_hpp */
