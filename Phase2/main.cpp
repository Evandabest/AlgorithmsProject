
#include "Doubly.h"
#include "DoublyNode.h"
#include "DoublyNode.cpp"
#include "Doubly.cpp"
#include <iostream>
using namespace std;

int main()
{
    Doubly *doubly = new Doubly();
    doubly->AddToTail(1);
    doubly->AddToTail(2);
    doubly->AddToTail(3);
    doubly->AddToTail(4);
    doubly->AddToTail(5);
    doubly->PrintElements();
    cout << endl;
    doubly->PrintReverse();
    cout << endl;
    return 0;
}
