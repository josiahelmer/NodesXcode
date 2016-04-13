//
//  BinaryTree.cpp
//  NodesXcode
//
//  Created by Elmer, Josiah on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "BinaryTree.hpp"
using namespace CTECData;
using namespace std;

template <class Type>
void BinaryTreeType> :: preorderTraversal(TreedNodePM<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << current->getValue() << "";
        preorderTraversal(currentNode->getLeftChild());
        preorderTraversal(currentNode->getRightChild());
    }
}
template <class Type>
BinaryTree<Type> :: CTECBinaryTree<type> :: CTECBinaryTreePM()
{
    this->root = nullptr;
    this- size;
    return root;
    
}

template <class Type>
int BinaryTree<Type> :: getSize()
{
    size = 0;
    calculateSize(root);
    return size;
}

template <class Type>
void BinaryTreeType> :: preorderTraversal(TreedNodePM<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << current->getValue() << "";
        inorderTraversal(currentNode->getLeftChild());
        inorderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
void BinaryTreeType> :: preorderTraversal(TreedNodePM<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << current->getValue() << "";
        postorderTraversal(currentNode->getLeftChild());
        postorderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
bool BinaryTee<Type> :: contains(Type value, BinaryTree<Type> * currentTree)
{
    bool isIntree = false;
    
    if(root != nullptr)
    {
        if(root != nullptr)
            if( root->getValue() == value)
            {
                isInTree = true;
            }
        else
        {
            if(value < root->getValue()0
               {
                   isInTree = contains(value, root->getLeftChild());
               }
               else
               {
                   isintree = contains(value, root>getRightChild());
               }
        }
    }
    
    return isInTree;
}