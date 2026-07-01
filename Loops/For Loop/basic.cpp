/*
    
    Loops is a things with repetition tasks...

Entry Controlled Loops

For Loops Syntax :-

    for(initialization ; condition ; update(increament / decreament))
    {
        // code...
    }

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    // prints 1 to 5 numbers using for loops...

    int no = 5;

    int i;

    for(i = 1 ; i <= no ; i++)
    {
        cout << i << endl;
    }

    return 0;
}