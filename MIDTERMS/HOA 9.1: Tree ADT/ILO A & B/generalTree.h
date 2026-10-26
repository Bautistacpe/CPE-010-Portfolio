#ifndef GENERALTREE_H
#define GENERALTREE_H
#include <iostream>

template <typename T>
class GeneralTree {
    private:
        T data;
        GeneralTree<T>* parent;
        GeneralTree<T>* next;

    public:
        GeneralTree(T value);
        GeneralTree<T>* insertChild(T value);
        void preOrder();
        void inOrder();
        void postOrder();
        void findData(int choice, T key);
};

template <typename T>
GeneralTree<T>::GeneralTree(T value) {
    data = value;
    parent = nullptr;
    next = nullptr;
}

template <typename T>
GeneralTree<T>* GeneralTree<T>::insertChild(T value) {
    GeneralTree<T>* child = new GeneralTree<T>(value);
    if (parent == nullptr) {
        parent = child;
    }
    else {
        GeneralTree<T>* current = parent;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = child;
    }
    return child;
}

template <typename T>
void GeneralTree<T>::preOrder() {
    std::cout <<data <<" ";
    if (parent != nullptr) {
        parent->preOrder();
    }
    if (next != nullptr) {
        next->preOrder();
    }
}

template <typename T>
void GeneralTree<T>::inOrder() {
    if (parent != nullptr) {
        parent->inOrder();
    }
    std::cout <<data <<" ";
    if (next != nullptr) {
        next->inOrder();
    }
}

template <typename T>
void GeneralTree<T>::postOrder() {
    if (parent != nullptr) {
        parent->postOrder();
    }
    if (next != nullptr) {
        next->postOrder();
    }
    std::cout <<data <<" ";
}

template <typename T>
void GeneralTree<T>::findData(int choice, T key) {
    if (choice == 1) {
        if (data == key) {
            std::cout <<"\n" <<key <<" was found!";
            return;
        }
        preOrder();
    }
    else if (choice == 2) {
        if (data == key) {
            std::cout <<"\n" <<key <<" was found!";
            return;
        }
        postOrder();
    }
    else if (choice == 3) {
        if (data == key) {
            std::cout <<"\n" <<key <<" was found!";
            return;
        }
        inOrder();
    }
}
#endif