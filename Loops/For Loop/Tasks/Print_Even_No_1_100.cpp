/*
    Print all the even numbers from 1 to 100...
*/

// Boiler Plate Code...

#include <iostream> // Header Files...

using namespace std;

int main()
{
    int i;

    // for (i = 1 ; i <= 100 ; i++)
    // {
    //     if(i % 2 == 0)
    //     {
    //         cout << i << "\t";
    //     }
    // }

    // --------------------------------------------------------------

    for (i = 2 ; i <= 100 ; i += 2) // i = i + 2
    {
    
        cout << i << "\t";
    
    }

    return 0;
}