#include "DoublyNode.h"
#include "Doubly.h"
#include "cstdlib"
#include <iostream>
using namespace std;

int main()
{

    srand(42);
    DoublyLList List;

    for (int i = 0; i <= 14; i++)
    {
        List.AddToTail(rand() % 100 + 1);
    }

    cout << " - Menu: " << "\n"
         << "1. Add a Element." << "\n"
         << "2. Print List Elements." << "\n"
         << "3. Print List Elements in reverese." << "\n"
         << "4. Exit." << "\n";

    int Option = 1;

    cout << "Select an Option from the menu 1-4: ";

    while (Option == 1 || 2 || 3 || 4)
    {

        cin >> Option;

        if (Option == 1)
        {

            int newelement;
            cout << "Option #1 is Adding a element, you choose it: ";
            cin >> newelement;
            if (cin.fail())
            {
                cin.clear();
            }
            else
            {
                List.AddToTail(newelement);
                cout << "\n"
                     << "Select another option from the menu: ";
            }
        }
        else if (Option == 2)
        {
            cout << "Option #2 is List Printout: ";
            List.PrintElements();
            cout << "\n"
                 << "Select another option from the menu: ";
        }
        else if (Option == 3)
        {
            cout << "Option #3 is Reverse List Printout: ";
            List.PintReverse();
            cout << "\n"
                 << "Select another option from the menu: ";
        }
        else if (Option == 4)
        {
            cout << " Thanks, Hava a good Day!! " << endl;
            break;
        }
        else
        {
            cout << "  - Invalid Input, Try again later.";
            break;
        }
    }

    return 0;
}
