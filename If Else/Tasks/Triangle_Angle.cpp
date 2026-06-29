// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3; // Variables a1 , a2 , a3 Declaration...

    cout << "\nEnter the Angle - 1 of Triangle : ";

    cin >> a1;

    cout << "\nEnter the Angle - 2 of Triangle : ";

    cin >> a2;

    cout << "\nEnter the Angle - 3 of Triangle : ";

    cin >> a3;

    int angle = a1 + a2 + a3;

    if (angle == 180)
        
        cout << "\nThey are the Angles of a triangle..."; // Triangle is Possible...

    else
        
        cout << "\nThey are not the Angles of a triangle..."; // Triangle is not Possible...

    return 0;
}