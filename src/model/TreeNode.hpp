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
        TreeNode();
        TreeNode(const Type& value);
        TreeNodeconst Type& value , TreeNode
        void setLeftChild(treeNode<Type> * )leftChild);
        void setRightChild(TreeNode<Type> * rightChild);
        void setParent(TreenNodePm<Type> * parent);
        TreeNode<Type> * getLeftChild();
        TreeNode<Type> * getRightChild();
        TreeNode<Type> * getParent
        
    };
}

#endif /* TreeNode_hpp */
