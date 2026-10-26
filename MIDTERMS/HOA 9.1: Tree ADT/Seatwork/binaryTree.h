#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>

template <typename T>
class BinaryTree {
    private:
        // key
        T key;
        // pointers left and right child
        BinaryTree<T>* leftChild;
        BinaryTree<T>* rightChild;

    public:
        // Constructor
        BinaryTree(T rootObj);
        // insert children insert left and right
        void insertLeft(T newNode);
        void insertRight(T newNode);
        // access child nodes
        BinaryTree<T>* getLeftChild();
        BinaryTree<T>* getRightChild();
        // get root value & root node
        T getRootVal();
        void setRootVal(T obj);
        // node checker
        bool isLeaf();
};

template <typename T>
BinaryTree<T>::BinaryTree(T rootObj) {
    key = rootObj;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <typename T>
void BinaryTree<T>::insertLeft(T newNode) {
    // if there is currently no child
    if (leftChild == nullptr) {
        leftChild = new BinaryTree<T>(newNode);
    }
    // if we want to insert a certain node
    else {
        BinaryTree<T>* newChild = new BinaryTree<T>(newNode);
        // move the existing left child below the new node
        newChild->leftChild = leftChild;
        // make the new node the left child
        leftChild = newChild;
    }
}

template <typename T>
void BinaryTree<T>::insertRight(T newNode) {
    if (rightChild == nullptr) {
        rightChild = new BinaryTree<T>(newNode);
    }
    else {
        BinaryTree<T>* newChild = new BinaryTree<T>(newNode);
        newChild->rightChild = rightChild;
        rightChild = newChild;
    }
}

template <typename T>
BinaryTree<T> *BinaryTree<T>::getLeftChild() {
    return leftChild;
}

template <typename T>
BinaryTree<T> *BinaryTree<T>::getRightChild() {
    return rightChild;
}

template <typename T>
void BinaryTree<T>::setRootVal(T obj) {
    key = obj;
}

template <typename T>
T BinaryTree<T>::getRootVal() {
    return key;
}

template <typename T>
bool BinaryTree<T>::isLeaf() {
    return leftChild == nullptr && rightChild == nullptr;
}
#endif