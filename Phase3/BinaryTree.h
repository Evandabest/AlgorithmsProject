
#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>

using namespace std;

class BinaryTree {
public:
    struct Node {
        int data;
        Node* leftc;
        Node* rightc;

        Node(int value) {
            data = value;
            leftc = rightc = nullptr;
        }
    };

    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    void insert(int value) {
        insertRecursive(root, value);
    }

    void inorderTraversal() {
        inorderRecursive(root);
        cout << endl; // Print a newline after traversal
    }

private:
    void insertRecursive(Node*& current, int value) {
        if (current == nullptr) {
            current = new Node(value);
        } else if (value < current->data) {
            insertRecursive(current->leftc, value);
        } else if (value > current->data) {
            insertRecursive(current->rightc, value);
        }
    }

    void inorderRecursive(Node* current) {
        if (current != nullptr) {
            inorderRecursive(current->leftc);
            cout << current->data << " ";
            inorderRecursive(current->rightc);
        }
    }
};

#endif // BINARYTREE_H