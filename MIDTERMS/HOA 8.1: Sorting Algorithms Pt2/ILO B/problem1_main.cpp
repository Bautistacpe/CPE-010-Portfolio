#include <iostream>
#include <cstdlib>
#include <time.h>
#include "problem1.h"

const int max_size = 50;
void displayAll (int arr[]);

int main() {
    int nums[max_size];
    srand(time(0));
    for (int i = 0; i < max_size; i++) {
        nums[i] = rand() % 50;
    }
    std::cout <<"50 randomly generated numbers: " <<std::endl;
    displayAll(nums);
    partitionMergeSort(nums, 0, max_size - 1, max_size);
    displayAll(nums);

}

void displayAll (int arr[]) {
    for (int i = 0; i < max_size; i++) {
        std::cout <<arr[i] <<" ";
    }
    std::cout <<std::endl;
}