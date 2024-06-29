
#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include "Node.h"

using namespace std;

class BinaryTree
{
public:
    BinaryTree()
    {
        root = nullptr;
    }

    int countNodes(Node *node)
    {
        if (node == nullptr)
        {
            return 0;
        }
        return 1 + countNodes(node->left) + countNodes(node->right);
        // recursive call to count the nodes in the left subtree and the right subtree
    }

    int countLeaf(Node *node)
    {
        if (node == nullptr)
        {
            return 0;
        }
        if (node->left == nullptr && node->right == nullptr)
        {
            return 1;
        }
        return countLeaf(node->left) + countLeaf(node->right);
        // recursive call to count the leaf nodes in the left subtree and the right subtree
    }

    void insert(Node *&current, int value)
    {
        if (current == nullptr)
        {
            current = new Node(value);
            // if the current node is null, create a new node with the value
        }
        else if (value < current->data)
        {
            insert(current->left, value);
            // if the value is less than the current node's data, insert it in the left subtree
        }
        else if (value > current->data)
        {
            insert(current->right, value);
            // if the value is greater than the current node's data, insert it in the right subtree
        }
    }

    void inorder(Node *current)
    {
        if (current != nullptr)
        {
            inorder(current->left);
            cout << current->data << " ";
            inorder(current->right);
            // recursive call to print the left subtree, the current node, and the right subtree. Inorder traversal
        }
    }

    void preorder(Node *current)
    {
        if (current != nullptr)
        {
            cout << current->data << " ";
            preorder(current->left);
            preorder(current->right);
            // recursive call to print the current node, the left subtree, and the right subtree. Preorder traversal
        }
    }

    void postorder(Node *current)
    {
        if (current != nullptr)
        {
            postorder(current->left);
            postorder(current->right);
            cout << current->data << " ";
            // recursive call to print the left subtree, the right subtree, and the current node. Postorder traversal
        }
    }

    Node *doubleValue(Node *node)
    {
        if (node == nullptr)
            return nullptr;
        Node *newNode = new Node(node->data * 2);
        newNode->left = doubleValue(node->left);
        newNode->right = doubleValue(node->right);
        return newNode;
        // Helper function to generate a new tree with the double values of the current tree
    }

    BinaryTree generateNewTree(Node *current)
    {
        BinaryTree newTree = BinaryTree();
        newTree.root = doubleValue(current);
        return newTree;
        // Function to generate a new tree with the double values of the current tree
    }

    Node *root;
};

#endif // BINARYTREE_H
