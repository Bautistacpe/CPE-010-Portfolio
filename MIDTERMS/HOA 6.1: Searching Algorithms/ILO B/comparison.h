#ifndef COMPARISON_H
#define COMPARISON_H
#include <iostream>
#include "node2.h"

template <typename T>
void InstanceArr (int ArrSize, T dataKey, T list[]) {
    int i = 0;
    int InstaArr = 0;
    while (i < ArrSize) {
        if (dataKey == list[i]) {
            InstaArr++;
        }
        i++;
    }
    std::cout <<"Instance of " <<dataKey <<": " <<InstaArr <<std::endl;
}

void InstanceLL (NodeTwo* head, int dataKey) {
    int InstaLL = 0;
    while (head != nullptr) {
        if (head->data == dataKey) {
            InstaLL++;
        }
        head = head->next;
    }
    std::cout <<"Instance of " <<dataKey <<": " <<InstaLL <<std::endl;
}

template <typename T>
void BSearchArr (int ArrSize, int low, int high, T dataKey, T list[], int CompCountArr) {
    int middle;
    while (low <= high) {
        middle = int((low + high) / 2);
        if (dataKey == list[middle]) {
            CompCountArr++;
            std::cout <<"\nGoing to: " <<list[middle] <<std::endl;
            std::cout <<"This is the number key!\n";
            std::cout <<"The number key has been found!\n";
            std::cout <<"\nNumber of comparisons: " <<CompCountArr <<std::endl;
            return;
        }
        else if (dataKey < list[middle]) {
            CompCountArr++;
            std::cout <<"\nGoing to: " <<list[middle] <<std::endl;
            std::cout <<"This is not the number key!\n";
            std::cout <<"Moving to next index...\n";
            return BSearchArr(ArrSize, low, middle - 1, dataKey, list, CompCountArr);
        }
        else {
            CompCountArr++;
            std::cout <<"\nGoing to: " <<list[middle] <<std::endl;
            std::cout <<"This is not the number key!\n";
            std::cout <<"Moving to next index...\n";
            return BSearchArr(ArrSize, middle + 1, high, dataKey, list, CompCountArr);
        }
    }
    std::cout <<"The number key has not been found!\n";
}
#endif
