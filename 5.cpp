#include<iostream>
#include<cmath>

using namespace std;

class Circle {
private:
    float radius;

public:
    void inputRadius(float r) {
        radius = r;
    }

    float calculateArea() {
        const float pi = 3.14;
        return pi * pow(radius, 2);
    }

    float calculatePerimeter() {
        const float pi = 3.14159;
        return 2 * pi * radius;
    }
};

int main() {
    Circle c1;

    float r1;
    cout << "Enter the radius of the circle: ";
    cin >>r1;

    c1.inputRadius (r1);

    cout << "Area of the circle: " << c1.calculateArea() << endl;
    cout << "Perimeter (Circumference) of the circle: " << c1.calculatePerimeter() << endl;

    return 0;
}
