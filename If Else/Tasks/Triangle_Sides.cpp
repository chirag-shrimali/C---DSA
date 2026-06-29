/*
    Take 3 positive integers as an input and tell if they can be the sides of a triangle or not...
*/

/*
    if in the questions said about triangle angles then we can be takes the three angles of triangle total sum equal to 180 or not...

    if in the questions said about the triangel sides then we can be takes the sides like

    s1 + s2 > s3 and s1 + s3 > s2 and s2 + s3 > s1 this will be proves...
*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int s1, s2, s3; // Variable s1 , s2 , s3 Declaration...

    cout << "\nEnter the Side - 1 of Triangle : ";

    cin >> s1;

    cout << "\nEnter the Side - 2 of Triangle : ";

    cin >> s2;

    cout << "\nEnter the Side - 3 of Triangle : ";

    cin >> s3;

    if ((s1 + s2 > s3) and (s1 + s3 > s2) && (s2 + s3 > s1))
        
        cout << "\nThey are the sides of a triangle..."; // Triangle is Possible...

    else
        
        cout << "\nThey are not the sides of a triangle..."; // Triangle is not Possible...

    return 0;
}