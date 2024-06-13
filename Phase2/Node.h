#include <cstddef>

#ifndef NODE_H
#define NODE_H

class Node
{
public:
    Node(int val) : data(val), next(NULL), prev(NULL) {}
    int data;
    Node *next;
    Node *prev;
};

#endif // NODE_H
