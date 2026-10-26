#include <iostream>
#include "BST.h"

int main() {
    BinarySearchTree<int>* tree = new BinarySearchTree(2);

    tree->insert(3);
    tree->insert(9);
    tree->insert(18);
    tree->insert(0);
    tree->insert(1);
    tree->insert(4);
    tree->insert(5);

    std::cout <<"In-Order Traversal:" <<std::endl;
    tree->inOrder();

    std::cout <<std::endl;

    std::cout <<"\nPre-Order Traversal:" <<std::endl;
    tree->preOrder();


    std::cout <<"\nIn-Order Traversal:" <<std::endl;
    tree->inOrder();

    return 0;
}