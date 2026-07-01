/*
    Difference between == and = ...

    == it will be compare the both values... and return bool values(true as 1 and false as 0)...
    
    where , = it will be assigns the right side values to the left sides numbers(variables)...
*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int a = 0; // 0 value ne left side na variable a ma assign kari so , memory ma a variable ni value 0 thay gai...

    // if(a = 0) cout << "Hello!!"; // 0 value a ma assign thai assignment operator through so , it will be if(a) or here if(0) means false statements so if statements not prints else parts execute...
    
    // else cout << "World!!"; // World print

    if (a = 10) cout << "Chirag";

    else cout << "Shrimali";

    return 0;
}