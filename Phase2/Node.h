#include <cstddef>

#ifndef NODE_H
#define NODE_H

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) : data(val), next(NULL), prev(NULL) {}
};

#endif // NODE_H
