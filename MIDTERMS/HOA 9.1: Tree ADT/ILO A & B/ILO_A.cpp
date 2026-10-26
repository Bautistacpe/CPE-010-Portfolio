#include <iostream>
#include "generalTree.h"

int main() {
    int choice;
    char key;
    GeneralTree<char> tree('A');
    tree.insertChild('B');
    tree.insertChild('C');
    tree.insertChild('D')->insertChild('H');

    GeneralTree<char>* e = tree.insertChild('E');
    e->insertChild('I');

    GeneralTree<char>* j = e->insertChild('J');
    j->insertChild('P');
    j->insertChild('Q');

    GeneralTree<char>* f = tree.insertChild('F');
    f->insertChild('K');
    f->insertChild('L');
    f->insertChild('M');

    tree.insertChild('G')->insertChild('N');

    std::cout <<"Pre-Order Trvaersal for General Tree" <<std::endl;
    tree.preOrder();

    std::cout <<std::endl;

    std::cout <<"\nIn-Order Trvaersal for General Tree" <<std::endl;
    tree.inOrder();

    std::cout <<std::endl;

    std::cout <<"\nPost-Order Trvaersal for General Tree" <<std::endl;
    tree.postOrder();

    std::cout <<std::endl;

    std::cout <<"\nPlease choose which traversal method you want to use." <<std::endl;
    std::cout <<"1. Pre-Order" <<std::endl;
    std::cout <<"2. Post-Order" <<std::endl;
    std::cout <<"3. In-Order" <<std::endl;
    std::cout <<"Please input the number of your choice: ";
    std::cin >> choice;
    std::cout <<"Please enter the key you want to find: ";
    std::cin >> key;

    tree.findData(choice, key);
}