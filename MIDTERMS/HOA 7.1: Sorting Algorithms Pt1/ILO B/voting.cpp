#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <algorithm>
#include "votingCount.h"

const int max_size = 100;
void display_votes(int votes[]);
std::string candidates[5] = {"Bo Dalton Capistrano",
                             "Cornelius Raymon Agustin",
                             "Deja Jayla Banaga",
                             "Lalla Brielle Yabu",
                             "Franklin Relano Castro"};
int vote_count[5] = {};

int main() {
    int max;
    int winner = 0;
    //generate 100 numbers containing votes
    int A[max_size];
    srand(time(0));
    for (int i = 0; i < max_size; i++) {
        A[i] = rand() % 5 + 1;
    }
    display_votes(A);

    std::cout <<"\nSorting votes..." <<std::endl;
    std::cout <<"\nVotes sorted!" <<std::endl;
    sortVotes(A, max_size);
    display_votes(A);

    std::cout <<"\nFinal Election Votes:" <<std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout <<candidates[i] <<": ";
        vote_count[i] = countVotes(max_size, i + 1, A);
        max = vote_count[0];
        max = std::max(max, vote_count[1]);
        max = std::max(max, vote_count[2]);
        max = std::max(max, vote_count[3]);
        max = std::max(max, vote_count[4]);
        if (max == vote_count[i]) {
            winner = i;
        }
    }
    std::cout <<"\nCandidate Winner: " <<candidates[winner] <<std::endl;
    std::cout <<"Total Votes: " <<max <<" votes";
}

void display_votes (int votes[]) {
    for (int i = 0; i < max_size; i++) {
        std::cout <<votes[i] <<" ";
    }
    std::cout <<std::endl;
}