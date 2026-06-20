/*

        Area of a Circle : pi * r * r 

*/

#include <iostream>

using namespace std;

int main()
{
    int r;

    float area;

    cout << "\nEnter the Radius of a Circle : ";

    cin >> r;

    area = 3.14 * r * r;

    cout << "\nThe Area of a Circle is : " << area << endl;

    return 0;
}