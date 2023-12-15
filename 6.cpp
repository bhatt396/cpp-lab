//ft to m//
#include<iostream>

using namespace std;

class Converter {
private:
    float feet;

public:
    void setFeet(float f) {
        feet = f;
    }
    float feetToMeters() {
        const float feetToMetersConversion = 0.3048;
        return feet * feetToMetersConversion;
    }
};

int main() {
    Converter lengthConverter;

    float userFeet;
    cout << "Enter length in feet: ";
    cin >> userFeet;
    lengthConverter.setFeet(userFeet);
    cout << "Length in meters: " << lengthConverter.feetToMeters() << endl;
    return 0;
}
