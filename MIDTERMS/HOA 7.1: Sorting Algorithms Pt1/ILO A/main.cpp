#include <iostream>
#include <cstdlib>
#include <time.h>
#include "sorting.h"

const int size = 100;
void displayArr(int arr[]);

int main() {
    // generate 100 random numbers
    int rand_num[size];
    srand(time(0));
    for (int i = 0; i < size; i++) {
        rand_num[i] = rand() % 100;
    }
    // output 100 random numbers
    displayArr(rand_num);

    std::cout <<"Selection Sort: \n";
    selectionSort(rand_num, size);
    displayArr(rand_num);
}

void displayArr(int arr[]) {
    for (int i = 0; i < size; i++) {
        std::cout <<arr[i] <<" ";
    }
    std::cout <<std::endl;
}


