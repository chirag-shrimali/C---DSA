/*
    Given a Point (x , y) , write the program to find out if it lies in the first quadrant ,

    the second quadrant , the third quadrant , the fourth quadrant , on the x - axis ,

    on the y - axis or at the origin...
*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int x , y;

    cout << "\nEnter the Point - 1 : ";

    cin >> x;

    cout << "\nEnter the Point - 2 : ";

    cin >> y;

    if((x > 0 && y > 0)) cout << "\nFirst Quadrant...";

    else if((x < 0 && y > 0)) cout << "\nSecond Quadrant...";

    else if((x < 0 && y < 0)) cout << "\nThird Quadrant...";

    else if((x > 0 && y < 0)) cout << "\nFourth Quadrant...";

    else if(y == 0 && x != 0) cout << "\nOn the X - Axis...";

    else if(x == 0 && y != 0) cout << "\nOn the Y - Axis...";

    else cout << "\nAt the Origin...";

    return 0;
}