#ifndef SIMPLY_LL_H
#define SIMPLY_LL_H
#include <iostream>

template <typename T>
class SimplyList {
    public:
        T data;
        SimplyList<T> *next = nullptr;
};

template <typename T>
void listTraversal(SimplyList<T>* head) {

    if(head == nullptr) {
        std::cout << "The list is empty." << std::endl;
        return;
    }

    while(head != nullptr) {
        std::cout <<head->data;
        head = head->next;
    }
}

template <typename T>
void sllinsertHead(T newData, SimplyList<T>** currenthead) {
    SimplyList<T>* newNode = new SimplyList<T>;
    newNode->data = newData;
    newNode->next = *currenthead;
    *currenthead = newNode;
}

template <typename T>
void sllGeneralInsert(T newData, SimplyList<T>* prevNode) {
    if (prevNode == nullptr) {
        std::cout <<"The Previous Node cannot be Null" <<std::endl;
        return;
    }
    SimplyList<T>* newNode =  new SimplyList<T>;
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

template <typename T>
void sllinsertEnd(T newData, SimplyList<T>** head) {
    SimplyList<T>* newNode = new SimplyList<T>;
    SimplyList<T>* currentNode = *head;
    newNode->data = newData;
    newNode->next = nullptr;

    while(currentNode->next != nullptr) {
        currentNode = currentNode->next;
       
    }
    currentNode->next = newNode;
}

template <typename T>
void sllDeleteNode(T findData, SimplyList<T>** head) {
    if (*head == nullptr) return;

    SimplyList<T>* currentNode = *head;
    SimplyList<T>* prevNode = nullptr;

    while (currentNode != nullptr && currentNode->data != findData) {
        prevNode = currentNode;
        currentNode = currentNode->next;
    }
    if (currentNode == nullptr) return;

    if(prevNode == nullptr) {
        *head = currentNode->next;
    }
    else {
        prevNode->next = currentNode->next;
    }
    delete currentNode;
}

template <typename T>
void sllDeleteList(SimplyList<T>** head) {
    SimplyList<T>* current = *head;
    
    while(current != nullptr){
        SimplyList<T>* temp = current;
        current = current->next;
        delete temp;
    }
    *head = nullptr;
}
#endif
