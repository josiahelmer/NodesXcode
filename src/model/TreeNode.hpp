//
//  TreeNode.hpp
//  NodesXcode
//
//  Created by Elmer, Josiah on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp

#include "Node.h"

namespace CTECData
{
    template <class Type>
    class TreeNodePM : public Node<Type>
    {
    private:
        TreeNode<Type> * leftChild;
        TreeNode<Type> * rightChild;
        TreeNode<Type> * parent;
        
    public:
        TreeNodePM();
        TreeNodePM(const Type& value);
        TreeNodePM(const Type& value, TreeNodePM<Type> * parent);
        void setLeftChild(TreeNodePM<Type> * leftChild);
        void setRighttChild(TreeNodePM<Type> * rightChild);
        void setParent(TreeNodePM<Type> * parent);
        TreeNodePM<Type> * getLeftChild();
        TreeNodePM<Type> * getRightChild();
        TreeNodePM<Type> * getParent();
    };
}

#endif /* TreeNode_hpp */
