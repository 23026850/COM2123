#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double d,h,angle,height;

    cout << "Enter the horizontal distance between you and the tree: " << endl;
    cin >> d;

    cout << "Enter the height at sight: " << endl;
    cin >> h;

    cout << "Enter the angle on the angle-measuring device: " << endl;
    cin >> angle;

    height= h+d*tan(angle);
    cout << "The actual height of the tree is: " << height;
    return 0;
}
