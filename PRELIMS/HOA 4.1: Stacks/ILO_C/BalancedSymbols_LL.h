#ifndef BALANCEDSYMBOLS_LL_H
#define BALANCEDSYMBOLS_LL_H
#include <iostream>
#include <string>

template <typename T>
class Node {
    public:
    T data;
    Node<T>* next = nullptr;
};

template <typename T>
Node<T>* top = nullptr;

template <typename T>
void push(T newData) {
    Node<T>* newNode = new Node<T>;
    newNode->data  = newData;
    newNode->next = top<T>;
    top<T> = newNode;
}

template <typename T>
bool isEmpty() {
    return top<T> == nullptr;
}

template <typename T>
T pop() {
    if (isEmpty<T>()) return true;
    Node<T>* temp = top<T>;
    T tempVal = temp->data;
    top<T> = top<T>->next;
    delete temp;
    return tempVal;
}

bool Balanced(char open, char closed) {
    if(open == '(' && closed == ')') return true;
    if(open == '{' && closed == '}') return true;
    if(open == '[' && closed == ']') return true;
    return false;
}

template <typename T>
bool BalancedCheck(T newData) {
    bool balanced = true; 
    for (int i = 0; newData[i] != '\0'; i++) { 
        char ch = newData[i]; 
        if (ch == '(' || ch == '{' || ch == '[') {
            push<char>(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') { 
            char open = pop<char>(); 
            if (!Balanced(open, ch)) { 
                balanced = false;
                break; 
            } 
        } 
    } 
    // output if expression is balanced or not
    if (balanced && isEmpty<char>()) 
        std::cout << "The expression is well balanced.";
    else 
        std::cout << "The expression is not well balanced."; 
    return balanced;
}
#endif