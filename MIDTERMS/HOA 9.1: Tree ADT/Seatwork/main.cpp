#include <iostream>
#include "binaryTree.h"

int main() {
    BinaryTree<char>* root = new BinaryTree<char>('A');

    std::cout<<"The root is: " << root->getRootVal()<<std::endl;

    //creating the child on node A
    root->insertLeft('B');
    root->insertRight('C');

    std::cout<<"The left child of root A: " << root->getLeftChild()->getRootVal()<<std::endl;
    std::cout<<"The right child of root A: "<< root->getRightChild()->getRootVal()<<std::endl;

    root->getLeftChild()->insertLeft('D');
    std::cout<<"The left child of root B: " << root->getLeftChild()->getLeftChild()->getRootVal()<<std::endl;
    root->getLeftChild()->insertRight('E');
    std::cout<<"The left child of root B: " << root->getLeftChild()->getRightChild()->getRootVal()<<std::endl;
    // Creating the child of node C
    root->getRightChild()->insertLeft('F');
    root->getRightChild()->insertRight('G');

    std::cout << "Left Child of root C: " << root->getRightChild()->getLeftChild()->getRootVal() << std::endl;
    std::cout << "Right Child of root C: " << root->getRightChild()->getRightChild()->getRootVal() << std::endl;

    root->insertLeft('X'); 
    std::cout<<"The left child of root A: " << root->getLeftChild()->getRootVal()<<std::endl;
    std::cout<<"The left child of root X: " << root->getLeftChild()->getLeftChild()->getRootVal()<<std::endl;
    return 0;
}


