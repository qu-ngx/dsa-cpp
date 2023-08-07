#include "intNode.h"
#include <cstdlib>
#include <iostream>

void print(intNode *head)
{

    intNode *curr = head;

    while (curr != NULL)
    {
        std::cout << curr->data << '\n';
        curr = curr->next;
    }
}

int main()
{

    intNode *head;
    intNode *one = new intNode;
    intNode *two = new intNode;
    intNode *three = new intNode;

    one->data = 1;
    one->next = two;

    two->data = 2;
    two->next = three;

    three->data = 3;
    three->next = NULL;

    head = one;

    print(head);

    return 0;
}