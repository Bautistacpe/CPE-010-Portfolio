#include <iostream>
#include <cstdlib>
#include <time.h>
#include "sorting2.h"

const int size = 100;
void displaySort (int array[]);

int main() {
    int num[size];
    srand(time(0));
    for (int i = 0; i < size; i++) {
        num[i] = rand() % 100;
    }
    std::cout <<"100 randomly generated numbers: " <<std::endl;
    displaySort(num);

    shellSort(num, size);
    std::cout <<"\nSorting Array using Shell Sort:" <<std::endl;
    displaySort(num);
    return 0;
}

void displaySort (int array[]) {
    for (int i = 0; i < size; i++) {
        std::cout <<array[i] <<" ";
    }
    std::cout <<std::endl;
}