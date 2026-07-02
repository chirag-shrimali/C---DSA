/*
    Print all the odd numbers divisible by 3 from 1 to 100...
*/

/*
    Print all the even numbers from 1 to 100...
*/

// Boiler Plate Code...

#include <iostream> // Header Files...

using namespace std;

int main()
{
    int i;

    for (i = 1 ; i <= 100 ; i += 2) // i = i + 2
    {

        if(i % 3 == 0) cout << i << "\t";

    }

    return 0;
}