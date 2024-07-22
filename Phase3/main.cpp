#include <iostream>
#include <ctime>
#include <cstdlib>
#include "BinaryTree.h"
#include "Node.h"

using namespace std;

int main()
{

    srand(time(0));
    BinaryTree tree = BinaryTree();
    // create a new binary tree
    int N = rand() % 20 + 1;
    for (int i = 0; i < N; i++)
    {
        tree.insert(tree.root, rand() % 40 + 1);
    }
    // insert N random numbers in the tree

    int option;

    while (option != 8)
    {
        // display the menu
        cout << "Menu: " << endl;
        cout << "1. Insert new number." << endl;
        cout << "2. Print the tree in preorder." << endl;
        cout << "3. Print the tree in inorder." << endl;
        cout << "4. Print the tree in postorder." << endl;
        cout << "5. Count the nodes." << endl;
        cout << "6. Count the Leaves." << endl;
        cout << "7. Generate new tree." << endl;
        cout << "8. Exit." << endl;
        cout << "Select an option from the menu: ";
        cin >> option;

        // This part of the code is self-explanatory, if it is a certain option, it will do a certain thing
        if (option == 1)
        {
            int newElement;
            cout << "Enter the new element: ";
            cin >> newElement;
            tree.insert(tree.root, newElement);
        }
        else if (option == 2)
        {
            cout << "Preorder: ";
            tree.preorder(tree.root);
            cout << endl;
        }
        else if (option == 3)
        {
            cout << "Inorder: ";
            tree.inorder(tree.root);
            cout << endl;
        }
        else if (option == 4)
        {
            cout << "Postorder: ";
            tree.postorder(tree.root);
            cout << endl;
        }
        else if (option == 5)
        {
            cout << "Number of nodes: " << tree.countNodes(tree.root) << endl;
        }
        else if (option == 6)
        {
            cout << "Number of leaves: " << tree.countLeaf(tree.root) << endl;
        }
        else if (option == 7)
        {
            cout << "Current tree in preorder: ";
            tree.preorder(tree.root);
            cout << endl;
            BinaryTree newTree = tree.generateNewTree(tree.root);
            cout << "New tree in preorder: ";
            newTree.preorder(newTree.root);
            cout << endl;
            cout << "New tree in inorder: ";
            newTree.inorder(newTree.root);
            cout << endl;
            cout << "New tree in postorder: ";
            newTree.postorder(newTree.root);
            cout << endl;
        }
        else if (option == 8)
        {
            cout << "Exiting..." << endl;
        }
        else
        {
            cout << "Invalid option." << endl;
        }
    }

    return 0;
}
