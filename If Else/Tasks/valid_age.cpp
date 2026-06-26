// Take as an input to the user and check that the given age is valid for driving or not...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "\nEnter Your Age : ";

    cin >> age;

    if(age >= 18)
    {
        cout << "\nYour Age is "<< age << ".\nSo , You can be Drive...";
    }

    else 
    {
        cout << "\nYour Age is "<< age << ".\nSo , You can not be Drive...";
    }

    return 0;
}