#include <iostream>
#include <cstddef>

class IntNode
{
public:
    int data;
    IntNode *next;
};

int main()
{
    IntNode n;
    n.data = 5;
    n.next = NULL;

    IntNode *p = new IntNode;
    (*p).data = 6;
    (*p).next = NULL;

    delete p;
}
