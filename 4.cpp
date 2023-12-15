//WAP to calculate the area of a circle, rectangle, and square using the concept of function overloading.//
#include<iostream>
#include<cmath>
using namespace std;

float area(float radius) {
    const float pi = 3.141592653589793;
    return pi * pow(radius, 2);
}


float area(float length, float width) {
    return length * width;
}


float area(float side) {
    return pow(side, 2);
}

int main() {
    float radius, length, width, side;

    // Area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    // Area of a rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Area of the rectangle: " << area(length, width) << endl;

    // Area of a square
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Area of the square: " << area(side) << endl;

    return 0;
}

