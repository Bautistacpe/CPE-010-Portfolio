#ifndef NODE2_H
#define NODE2_H
#include <iostream>

class NodeTwo {
public:
    int data;
    NodeTwo *next;
};

NodeTwo *new_node (int newData) {
    NodeTwo *newNode = new NodeTwo;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}

#endif