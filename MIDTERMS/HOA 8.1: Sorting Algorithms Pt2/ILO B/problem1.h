#ifndef PROBLEM1_H
#define PROBLEM1_H
#include <iostream>

template <typename T>
int partition (T arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

template <typename T>
void partitionMergeSort (T arr[], int low, int high, int size) {
    int pivot = partition(arr, low, high);
    
    std::cout <<"\nLeft Sub List: " <<std::endl;
    for (int x = 1; x < pivot; x++) {
        std::cout <<arr[x] <<" ";
    }
    int left = pivot - 1;
    for (int gap = left / 2; gap > 0; gap /= 2) {
        for (int i = 0; i < pivot; i++) {
            int leftTemp = arr[i];
            int a = i;
            while (a >= gap && arr[a - gap] > leftTemp) {
                arr[a] = arr[a - gap];
                a -=  gap;
            }
            arr[a] = leftTemp;
        }
    }
    std::cout <<std::endl;

    std::cout <<"\nRight Sub List: " <<std::endl;
    for (int y = pivot + 1; y < size; y++) {
        std::cout <<arr[y] <<" ";
    }
    std::cout <<std::endl;

    std::cout <<"\nSorted List:" <<std::endl;

    int right = size - (pivot + 1);
    for (int gap = right / 2; gap > 0; gap /= 2) {
        for (int j = pivot + 1; j < size; j++) {
            int rightTemp = arr[j];
            int b = j;
            while (b >= gap && arr[b - gap] > rightTemp) {
                arr[b] = arr[b - gap];
                b -=  gap;
            }
            arr[b] = rightTemp;
        }
    }
}
#endif