#ifndef LISTSTACK_H
#define LISTSTACK_H
#include <iostream>

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
    if (isEmpty<T>()) {
        std::cout <<"Stack Underflow" <<std::endl;
    }
    Node<T>* temp = top<T>;
    T tempVal = temp->data;
    top<T> = top<T>->next;
    delete temp;
    return tempVal;
}

template <typename T>
void Top() {
    if (isEmpty<T>()) return;
    std::cout <<"The top is: " <<top<T>->data;
}

template <typename T>
void listTraverse() {
    while(top<T> != nullptr) {
        std::cout <<top<T>->data;
        top<T> = top<T>->next;
    }
}
#endif
