/*
    Take the positive integer as an input and print...

    "C" if number is divisible by 5...

    "C++" if number is divisible by 3...

    "Python" if number is divisible by 5 & 3 both...

    "Java" if number is not divisible by 5 or 3...
*/

// Boiler - Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    if(no % 5 == 0 && no % 3 != 0) cout << "C" << endl;

    else if(no % 3 == 0 && no % 5 != 0) cout << "C++" << endl;

    else if(no % 5 == 0 && no % 3 == 0) cout << "Python" << endl;

    else cout << "Java" << endl; // no % 5 != 0 && no % 3 != 0

    return 0;
}