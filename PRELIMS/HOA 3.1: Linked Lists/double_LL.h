#ifndef DOUBLE_LL_H
#define DOUBLE_LL_H
#include <iostream>

template <typename T>
class DoubleList {
    public:
    T data;
    DoubleList<T>* prev = nullptr;
    DoubleList<T>* next = nullptr;
};

// create a new node

template <typename T>
DoubleList<T>* createNode (T newData) {
    //dynamically allocate memory for the new code:
    DoubleList<T> *newNode = new DoubleList<T>;

    newNode->data = newData;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    //Return the address of the node
    return newNode;
}

template <typename T>
void dllTraverse(DoubleList<T> *currentNode) {

    DoubleList<T> *tail;
    // checking if list is empty
    if(currentNode == nullptr) {
        std::cout <<"The list is empty";
    }
    
    // forward traversing:
    std::cout <<"Forward: " <<std::endl;
    while(currentNode != nullptr) {
        std::cout <<currentNode->data <<" ";
        tail = currentNode;
        currentNode = currentNode->next;
    }
    std::cout <<std::endl;

    // backward traversing:
    std::cout <<std::endl;
    std::cout <<"Backward: " <<std::endl;
    while(tail != nullptr) {
        // printed the data
        std::cout <<tail->data <<" ";
        //  move towrds the previous node
        tail = tail->prev;

    }
    std::cout <<std::endl;
}

template <typename T>
void dllInsertHead(T newData, DoubleList<T>** currentHead) {
    // create a node
    DoubleList<T>* newNode = createNode(newData);
    // new node should point back to the current head
    newNode->next = *currentHead;
    // current head should point to the new
    (*currentHead)->prev = newNode;
    // update the header pointer
    *currentHead = newNode;
}

template <typename T>
void dllInsertEnd(T newData, DoubleList<T>* currentHead) {
    // create a node
    DoubleList<T>* newNode = createNode(newData);
    // traverse to the last node
    while(currentHead->next != nullptr) {
        currentHead = currentHead->next;
    }
    // connect the last node to the new node
    currentHead->next = newNode;
    // connect the new node back to the last node
    newNode->prev = currentHead;
}
// insertion at any node
template <typename T>
void dllGeneralInsert(T newData, DoubleList<T>* prevNode) {
    if (prevNode == nullptr) {
        std::cout <<"The Previous Node cannot be Null" <<std::endl;
        return;
    }
    // create a node
    DoubleList<T>* newNode = createNode(newData);
    // new points to the node after prevNode
    newNode->next = prevNode->next;
    // new node points back to prevNode
    newNode->prev = prevNode;
    // if there is a node after prevNode,
    // make it point back to the new node
    if(prevNode->next != nullptr) {
        prevNode->next->prev = newNode;
    }
    // prevnode now points to the new code
    prevNode->next = newNode;
}
// deletion of a node
template <typename T>
void dllDeleteNode (T findData, DoubleList<T>** head) {
    if (*head == nullptr) return;

    DoubleList<T>* currentNode = *head;
    DoubleList<T>* prevNode = nullptr;

    while (currentNode != nullptr && currentNode->data != findData) {
        prevNode = currentNode;
        currentNode = currentNode->next;
    }
    if (currentNode == nullptr) return;

    if(prevNode == nullptr) {
        *head = currentNode->next;
        (*head)->prev = nullptr;
    }
    else {
        prevNode->next = currentNode->next;
        currentNode->next->prev = prevNode;
    }
    // delete the currentNode and point it to null
    delete currentNode;
    currentNode = nullptr;
}
#endif