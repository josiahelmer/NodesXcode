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
    class BinaryTree
    {
    private:
        int size;
        treeNodePM<Type> * root;
        int height;
        bol balanced;
        bool contains(Type value, CTECBinaryTree<Type>) * currentTree);
        TreeNode<Type> * getRightMostChild(BinaryTree<Type> leftSubTree);
        TreeNode<Type>* getLeftMostChild(BinartyTree<Type> rightSubTree);
    public:
        CTECBinaryTree();
        ~CTECBinaryTree();
        bool insert(const Type&)
        int getSize();
        int getHeight();
        bool isBalanced();
        TreeNode<Type> * getRobot();
        void preorderTraversal(TreeNode<Type> * currentNode);
        void inorderTraversal(TreeNode<Type> * currentNode);
        void postorderTraversal(TreeNode<Type> * currentNode);
    };
}
#endif /* BinaryTree_hpp */
