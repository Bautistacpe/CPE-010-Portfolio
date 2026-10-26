#ifndef VOTINGCOUNT_H
#define VOTINGCOUNT_H
#include <iostream>

template <typename T>
void sortVotes (T arr[], int arrSize) {
    int k = 1, j;
    T temp_var;

    while (k < arrSize) {
        temp_var = arr[k];
        j = k - 1;
        while (j >= 0 && temp_var <= arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp_var;
        k++;
    }

}

template <typename T>
int countVotes (int arrSize, T voteKey, T arr[]) {
    int i = 0;
    int vote_count = 0;

    while (i < arrSize) {
        if (voteKey == arr[i]) {
            vote_count++;
        }
        i++;
    }
    std::cout <<vote_count <<" votes" <<std::endl;
    return vote_count;
}
#endif