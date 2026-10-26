#include <iostream>
#include "listStack.h"

int main() {
    std::cout <<"------ Pushing 'I' 'E' 'E' 'E' ------ \n";
    push('I');
    push('E');
    push('E');
    push('E');

    Top<char>();

    // Displaying all the elements of the stack
    std::cout <<"\nDisplaying all the elements inside the stack: ";
    listTraverse<char>();

    std::cout <<"\n------ Popping 'E' 'E' 'E' 'I' ------ \n";
    while(isEmpty<char>) {
        std::cout <<"Popping: " <<pop<char>() <<std::endl;
        }
    pop<char>();
}
