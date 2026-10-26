#include <iostream>
#include <cstdlib>
#include <time.h>
#include "node.h"
#include "searchingAlgo.h"

const int max_size = 10;

int main() {
    // generate
    int dataset[max_size];
    srand(time(0));
    for(int i = 0; i < max_size; i++) {
        dataset[i] = rand();
    }
    for(int i = 0; i < max_size; i++) {
        std::cout << dataset[i] <<" ";
    }
    std::cout <<std::endl;
    int userInput;
    std::cout <<"Array Linear Search\n";
    std::cout <<"What number to search? ";
    std::cin >> userInput;
    std::cout <<"Array Result LS: ";
    linearSearchArr(max_size, userInput, dataset);
    
    std::cout <<"\nArray Binary Search \n";
    std::cout <<"What number to search? ";
    std::cin >> userInput;
    std::cout <<"Array Result BS: ";
    binarySearchAR(max_size, userInput, dataset);

    // create a linked list: T R O Y
    Node<char>* name1 = new_node('T');
    Node<char>* name2 = new_node('R');
    Node<char>* name3 = new_node('O');
    Node<char>* name4 = new_node('Y');

    name1->next = name2;
    name2->next = name3;
    name3->next = name4;

    std::cout <<"\nLinked List Linear Search\n";
    std::cout <<"Linked List Result 1 LS: ";
    linearSearchLL(name1, 'R');
    std::cout <<"Linked List Result 2 LS: ";
    linearSearchLL(name1, 'r');

    std::cout <<"\nLinked List Binary Search\n";
    std::cout <<"Linked List Result 1 BS: ";
    binarySearchLL(name1, 'O');
    std::cout <<"Linked List Result 2 BS: ";
    binarySearchLL(name1, 'o');



}
