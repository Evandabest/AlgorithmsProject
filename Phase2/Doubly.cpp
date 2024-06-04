
#include "Doubly.h"
#include "DoublyNode.h"
#include <iostream>
using namespace std;

Doubly::Doubly()
{
    head = new DoublyNode(nullptr, nullptr, 0);
}
void Doubly::AddToTail(int newValue)
{
    DoublyNode *newNode = new DoublyNode(nullptr, nullptr, newValue);
    DoublyNode *temp = head;
    while (temp->getRight() != nullptr)
    {
        temp = temp->getRight();
    }
    temp->setRight(newNode);
    newNode->setLeft(temp);
}

void Doubly::PrintElements()
{
    while (head != nullptr)
    {
        cout << head->getData() << " ";
        head = head->getRight();
    }
}
void Doubly::PrintReverse()
{
    while (head != nullptr)
    {
        cout << head->getData() << " ";
        head = head->getLeft();
    }
}
