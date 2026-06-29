/*
    Take 3 Positive Integers as an input and print the greatest of them...
*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int a , b , c;

    cout << "\nEnter the No1 : ";

    cin >> a;

    cout << "\nEnter the No2 : ";

    cin >> b;

    cout << "\nEnter the No3 : ";

    cin >> c;

    if ((a >= b) && (a >= c)) cout << endl << a << " is the greatest of them...";

    else if ((b >= a) && (b >= c)) cout << endl << b << " is the greatest of them...";

    else cout << endl << c << " is the greatest of them...";

    return 0;
}