// Take integer input and print the absolute value of that integer...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    if(no < 0)
    {
        cout << "\nThe Absolute Value of " << no << " are : " << -(no);
    }

    else
    {
        cout << "\nThe Absolute Value of " << no << " are : " << no;
    }

    return 0;
}