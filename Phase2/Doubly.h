#include "Node.h"
#include <iostream>
using namespace std;

class DoublyLList
{

private:
    Node *head;
    Node *tail;

public:
    DoublyLList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void AddToTail(int n)
    {

        Node *newNode = new Node(n);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void PrintElements()
    {

        Node *tempo = head;
        while (tempo != nullptr)
        {
            cout << tempo->data << " ";
            tempo = tempo->next;
        }
        cout << endl;
    }

    void PintReverse()
    {

        Node *tempo = tail;
        while (tempo != head->prev)
        {
            cout << tempo->data << " ";
            tempo = tempo->prev;
        }
        cout << endl;
    }
};
