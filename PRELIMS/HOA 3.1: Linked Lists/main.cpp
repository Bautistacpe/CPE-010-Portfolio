#include <iostream>
#include "simply_LL.h"

int main() {

    /// creating an empty list
    SimplyList<char>* head = new SimplyList<char>;
    SimplyList<char>* second = new SimplyList<char>;
    SimplyList<char>* third = new SimplyList<char>;
    SimplyList<char>* fourth = new SimplyList<char>;
    SimplyList<char>* fifth = nullptr; 

    // assign the data
    head->data = 'T';
    head->next = second;

    second->data = 'R';
    second->next = third;

    third->data = 'O';
    third->next = fourth;

    fourth->data = 'Y';
    fourth->next = nullptr;

    std::cout << "Original List: " <<std::endl;
    listTraversal(head);

    std::cout <<"\nInserting a new node at the head: " <<std::endl;
    sllinsertHead('Q', &head);
    listTraversal(head);

    std::cout <<"\nInserting a new node at the third: "<<std::endl;
    sllGeneralInsert('X', head->next->next);
    listTraversal(head);

    std::cout <<"\nInserting a new node at the END: "<<std::endl;
    sllinsertEnd('U', &head);
    listTraversal(head);

    std::cout <<"\ndeleting a node: " <<std::endl;
    sllDeleteNode('Q', &head);
    listTraversal(head);

    std::cout <<"\nDeleting all the nodes: " <<std::endl;
    sllDeleteList(&head);
    listTraversal(head);

    return 0;
}