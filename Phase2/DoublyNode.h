#ifndef DOUBLYNODE_H
#define DOUBLYNODE_H
class DoublyNode
{
private:
    DoublyNode *left;
    DoublyNode *right;
    int data;

public:
    DoublyNode(DoublyNode *, DoublyNode *, int);
    void setLeft(DoublyNode *);
    void setRight(DoublyNode *);
    void setData(int);
    DoublyNode *getLeft();
    DoublyNode *getRight();
    int getData();
};

#endif
