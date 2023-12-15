// WAP to calculate TSA, CSA, and Volume of the cylinder in a function and display in main.(using the concept of Pass by Reference:)//
#include<iostream>
#include<cmath>
using namespace std;

void calcCylinder(float radius, float height, float& tsa, float& csa, float& volume)
 {
    const float pi = 3.1415;
    tsa = 2 * pi * radius * (radius + height);
    csa = 2 * pi * radius * height;
    volume = pi * pow(radius, 2) * height;
}

int main() {
    float radius, height, tsa, csa, volume;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    calcCylinder(radius, height, tsa, csa, volume);

    cout << "\nCylinder Properties:\n";
    cout << "Total Surface Area (TSA): " << tsa << endl;
    cout << "Curved Surface Area (CSA): " << csa << endl;
    cout << "Volume: " << volume << endl;

    return 0;
}
