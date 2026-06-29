/*
    Take the Positive integer as an input and tell if it is divisible by 5 or 3...
*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    if (no % 5 == 0 or no % 3 == 0) // (no % 5 == 0 || no % 3 == 0)
        cout << endl << no << " is divisible by 5 or 3...";

    else
        cout << endl << no << " is not divisible by 5 or 3...";

    return 0;
}