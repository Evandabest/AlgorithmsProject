#include <cstddef>

#ifndef NODE_H
#define NODE_H

class Node
{
public:
    Node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
    // Constructor
    int data;
    Node *left;
    Node *right;
    // Data members
};

#endif // NODE_H
