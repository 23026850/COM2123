#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double d,distance,h,radians,angle,height,feetHeight;

    cout << "Enter the horizontal distance between you and the tree in inches: " << endl;
    cin >> d;
    distance= d*0.0833;
    cout << "The horizontal distance in ft is: " << distance << endl;


    cout << "Enter the height at sight: " << endl;
    cin >> h;

    cout << "Enter the angle on the angle-measuring device: " << endl;
    cin >> radians;

    angle= radians*180/M_PI;

    height= h+d*tan(angle);
    cout << "The actual height of the tree in inches is: " << height << endl;
    feetHeight= height*0.0833;
    cout << "The actual height of the tree in ft is: " << feetHeight << endl;
    return 0;
}
