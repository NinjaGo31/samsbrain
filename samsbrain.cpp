#include <iostream>
#include <math.h>
using namespace std;

double degrees_to_radians (double deg) {
    double rad = deg * (M_PI/180);
    return rad;
}

double cot (double deg) {
    if (deg == 0.0 || deg == 180.0) {
        cout << "Error: Tangent of 0.0 and 180.0 degrees is zero.\nConsider adding a 0.01 to get results.\n";
        exit(1);
    }
    double rad = degrees_to_radians(deg);
    return 1/tan(rad);
}

int main() {
    static double x1, x2;
    static double z1, z2;
    static double angle1, angle2;

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

    cout << "Enter x2: ";
    cin >> x2;
    cout << endl;

    cout << "Enter z2: ";
    cin >> z2;
    cout << endl;

    cout << "Enter Angle 2: ";
    cin >> angle2;
    cout << endl;

    double x = (z1 - z2 + cot(angle1) * x1 - cot(angle2) * x2) / (cot(angle1) - cot(angle2));
    double z = -(cot(angle1)) * (x - x1) + z1;

    cout << "Estimated x coordinate: " << x << endl;
    cout << "Estimated z coordinate: " << z << endl;
    cout << "Estimated x Nether coordinate: " << x / 8 << endl;
    cout << "Estimated z Nether coordinate: " << z / 8 << endl;
    return 0;
}
