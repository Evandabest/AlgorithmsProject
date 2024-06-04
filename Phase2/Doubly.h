#ifndef DOUBLY_H
#define DOUBLY_H
#include "DoublyNode.h"

class Doubly
{
public:
    Doubly();
    void AddToTail(int);
    void PrintElements();
    void PrintReverse();

private:
    DoublyNode *head;
};

#endif