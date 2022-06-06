#include <iostream>
#include <math.h>
using namespace std;

double degrees_to_radians (double deg) {
    double rad = deg * (M_PI/180);
    return rad;
}

int main() {
    static double x1, x2;
    static double z1, z2;
    static double angle1, angle2, rad1, rad2;

    cout << endl << "********** Sam's Brain **********" << endl;
    cout << "You may enter numbers up to 3 decimals." << endl;
    cout << "Angles MUST be exact. Read the angle on the left side." << endl;
    cout << "Example: (123.4 / xxx.x)" << endl << endl;
    
    cout << "Enter x1: ";
    cin >> x1;
    cout << endl;

    cout << "Enter z1: ";
    cin >> z1;
    cout << endl;

    cout << "Enter Angle 1: ";
    cin >> angle1;
    cout << endl;
    rad1 = degrees_to_radians(angle1);

    cout << "Enter x2: ";
    cin >> x2;
    cout << endl;

    cout << "Enter z2: ";
    cin >> z2;
    cout << endl;

    cout << "Enter Angle 2: ";
    cin >> angle2;
    cout << endl;
    rad2 = degrees_to_radians(angle2);

    double x = (z1 - z2 + (1/tan(rad1)) * x1 - (1/tan(rad2)) * x2) / ((1/tan(rad1)) - (1/tan(rad2)));
    double z = -(1/tan(rad1)) * (x - x1) + z1;

    cout << "Estimated x coordinate: " << x << endl;
    cout << "Estimated z coordinate: " << z << endl;
    cout << "Estimated x Nether coordinate: " << x / 8 << endl;
    cout << "Estimated z Nether coordinate: " << z / 8 << endl;
    return 0;
}