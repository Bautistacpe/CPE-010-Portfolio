#ifndef SEACHINGALGO_H
#define SEACHINGALGO_H
#include <iostream>
#include "node.h"

template <typename T>
void linearSearchArr(int arrSize, T dataFind, T list[]) {
    // Step 1: I = 0
    int i = 0;
    // Repeat while I <= 0 
    while(i < arrSize){
        // if (item = data[i])
        if (dataFind == list[i]) {
            // Print "Searching is successful"
            std::cout <<"Searching is successful.\n";
            return;
        }
        i++;
    }
    // Print "Searching is unsuccessful"
    std::cout <<"Searching is unsuccessful.\n";
}

template <typename T>
void linearSearchLL(Node<T>* head, T dataFind) {
    while(head != nullptr) {
        if(head->data == dataFind) {
            std::cout <<"Searching is successful.\n";
            return;
        }
        head = head->next;
    }
    std::cout <<"Searching is unsuccessful.\n";
}

template <typename T>
Node<T>* getMiddle(Node<T>* start, Node<T>* last) {
    Node<T>* slow = start;
    Node<T>* fast = start;

    while(fast != last && fast->next != last) {
        // move slow one step
        slow = slow->next;
        // move fast two steps
        fast = fast->next->next;
    }
    return slow;
}

template <typename T>
void binarySearchLL(Node<T>* start, T dataFind) {
    // Step 1: Set start to the head, seat last to null
    Node<T>* last = nullptr;
    // Continue searching while the search range is valid (not yet last)
    while(start != last) {
        // Step 2: Find the middle using getMiddle()
        Node<T>* middle = getMiddle(start, last);
        // Step 3: If middle element is equal to the key -> search is success
        if(middle->data == dataFind) {
            std::cout <<"The data was found.\n";
            return;
        }
        // Step 4: if the middle element is greater than the key -> search the left side
        else if(middle->data > dataFind) {
            last = middle;
        }
        // Step 5: if the middle element is less than the key -> search the right side
        else {
            start = middle->next;
        }
    }
    // Step 6: If the entire search range was traverse without finding the key
    std::cout <<"The data was not found.\n";
}

template <typename T>
void binarySearchAR(int arrSize, T dataFind, T list[]) {
    // define low, high, and middle
    int low = 0, up = arrSize - 1, middle;
    // loop while low is less than or equal to high
    while (low <= up) {
        // compute for middle
        middle = int((low + up)/2);
        // if data found is middle -> data found -> return
        if (dataFind == list[middle]) {
            std::cout <<"The search element is found! \n";
            return;
        }
        // if data find < data middle -> new high
        else if (dataFind < list[middle]) {
            up = middle - 1;
        }
        else {
            // else update low = middle + 1
            low = middle + 1;
        }
    }
    // search is not found
    std::cout <<"The search element is not found! \n";
}
#endif