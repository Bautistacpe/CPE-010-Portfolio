#include <iostream>
#include <stack> // call the stack from the STL

int main() {
    std::stack<int> newStack; // create an object
    std::stack<int> newerStack;
    std::cout <<"Is the stack empty? " << newStack.empty() << std::endl; // check if the stack is empty

    // insert 3 elements
    newStack.push(3);
    std::cout <<"Top of stack: " << newStack.top() << std::endl;
    newStack.push(2);
    std::cout <<"Top of stack: " << newStack.top() << std::endl;
    newStack.push(1);
    std::cout <<"Top of stack: " << newStack.top() << std::endl;

    std::cout <<"Is the stack empty? " << newStack.empty() << std::endl;
    newStack.push(6);
    newStack.push(7);
    newStack.push(8);
    std::cout <<"Size of the stack: " << newStack.size() << std::endl;

    // swap
    std::cout <<"\nSwap: " <<std::endl;
    newStack.swap(newerStack);
    std::cout <<"Size of the stack after swap: " << newStack.size() << std::endl;
    newerStack.swap(newStack);
    std::cout <<"Size of the stack after reverting swap: " << newStack.size() << std::endl;

    // emplace
    std::cout <<"\nEmplace: " <<std::endl;
    newStack.emplace(9);
    std::cout <<"Top of stack: " << newStack.top() << std::endl;
    std::cout <<"Size of the stack: " << newStack.size() << std::endl;

    return 0;
}