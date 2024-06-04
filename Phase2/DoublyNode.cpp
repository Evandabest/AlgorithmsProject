#include "DoublyNode.h"

DoublyNode::DoublyNode(DoublyNode *left, DoublyNode *right, int data)
{
    this->left = left;
    this->right = right;
    this->data = data;
}

void DoublyNode::setLeft(DoublyNode *NewLeft)
{
    this->left = NewLeft;
}

void DoublyNode::setRight(DoublyNode *NewRight)
{
    this->right = NewRight;
}

void DoublyNode::setData(int NewData)
{
    this->data = NewData;
}

DoublyNode *DoublyNode::getLeft()
{
    return this->left;
}

DoublyNode *DoublyNode::getRight()
{
    return this->right;
}

int DoublyNode::getData()
{
    return this->data;
}
