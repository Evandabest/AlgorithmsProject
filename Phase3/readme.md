# Phase 3 Code instructions

You will need three files, BinaryTree.h, Node.h and main.cpp.

The Node header file contains the implementation of the node for the BinaryTree class. The BinaryTree class includes the following functions: a constructor, countNodes, countLeaf, insert, inorder, preorder, postorder, doubleValue, generateNewTree. countNodes prints out the amount of nodes in the tree. countLeaf prints out the amount of leaves in the tree. Insert adds a node to the tree. inorder, preorder, postorder prints out the tree in the respective orders. doubleValue is a helper function for generateNewTree, it returns the root node of a new binary tree with all the values of the nodes doubled. generateNewTree returns a new tree with all the nodes' values doubled.

## Running this program

Traverse to a desired directory through you terminal. Once you have reached the desired directory run the following command in your terminal

```bash
git clone https://github.com/Evandabest/AlgorithmsProject.git
```

If you have path set up on vscode, you can type the following in the terminal to automatically open the project

```bash
code AlgorithmsProject
```

Or alternatively, you can navigate to your favorite ide to the cloned git repository.

You will want to delete any files that aren't part of the main program (header files and main.cpp) for the first run. This may include a .vscode file, main text file, outDebug file, main.dSYM file, all of which can show up when running the program or using a debugger.

The reason why these files will show up is because as the programmer, you have to tell vs code how to compile the code, which includes what specific complier you use, what debugger is used and the settings specific to the user. Deleting these files will ensure that the code will compile with the settings you have set up for c++ and the way you usually execute c++ code.
