#include <iostream>
#include "comparison.h"

// constant size for array
const int size = 10;

int main() {
    int k;
    // Linear Search for Array
    int Arr[size] = {5, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    std::cout <<"Array Instance Count\n";
    std::cout <<"Enter the number to count its occurance: ";
    std::cin >> k;
    InstanceArr (size, k, Arr);

    // Linear Search for Linked List
    NodeTwo* Num1 = new_node(5);
    NodeTwo* Num2 = new_node(18);
    NodeTwo* Num3 = new_node(2);
    NodeTwo* Num4 = new_node(19);
    NodeTwo* Num5 = new_node(18);
    NodeTwo* Num6 = new_node(0);
    NodeTwo* Num7 = new_node(8);
    NodeTwo* Num8 = new_node(14);
    NodeTwo* Num9 = new_node(19);
    NodeTwo* Num10 = new_node(14);
    
    Num1->next = Num2;
    Num2->next = Num3;
    Num3->next = Num4;
    Num4->next = Num5;
    Num5->next = Num6;
    Num6->next = Num7;
    Num7->next = Num8;
    Num8->next = Num9;
    Num9->next = Num10;

    std::cout <<"\nLinked List Instance Count\n";
    std::cout <<"Enter the number to count its occurance: ";
    std::cin >> k;
    InstanceLL (Num1, k);

    int NewArr[size] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    std::cout <<"\nFinding 8 in an array in BS\n";
    BSearchArr(size, 0, size - 1, 8, NewArr, 0);
    return 0;
}