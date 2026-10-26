#include <iostream>
#include "simply_LL.h"
#include "double_LL.h"

int main() {
    // creating the first code 'C' 'P' 'E'
    DoubleList<char>* head = createNode('C');
    DoubleList<char>* second = createNode('P');
    DoubleList<char>* third = createNode('E');

    // Link the nodes together
    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    dllTraverse(head);

    std::cout <<"Insert Head Testing: " <<std::endl;
    dllInsertHead('X', &head);
    dllTraverse(head);

    std::cout <<"Insert End Testing: " <<std::endl;
    dllInsertEnd('Q', head);
    dllTraverse(head);

    std::cout <<"\nGeneral Insert Testing: " <<std::endl;
    dllGeneralInsert('Y', head->next);
    dllTraverse(head);
    
    std::cout <<"\nDeleting a node: " <<std::endl;
    dllDeleteNode('C', &head);
    dllTraverse(head);
    return 0;
}
