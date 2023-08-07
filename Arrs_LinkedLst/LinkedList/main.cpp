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

int length(intNode *head)
{
    intNode *curr = head;

    int count = 0;
    while (curr != NULL)
    {
        count += 1;
        curr = curr->next;
    }

    return count;
}

int sum(intNode *head)
{
    intNode *curr = head;

    int sum = 0;

    while (curr != NULL)
    {
        sum += curr->data;
        curr = curr->next;
    }

    return sum;
}

bool member(intNode *head, int x)
{
    intNode *curr = head;

    while (curr != NULL)
    {
        if (curr->data == x)
            return true;
        curr = curr->next;
    }

    return false;
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

    std::cout << "Length of the linked list contains " << length(head) << " nodes" << '\n';

    std::cout << "Sum of LinkedLst is " << sum(head) << '\n';

    if (member(head, 1))
        std::cout << "Linked list does have that int" << '\n';
    else
        std::cout << "Linked list doesnt have that int" << '\n';

    return 0;
}