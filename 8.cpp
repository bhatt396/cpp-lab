//Create a class named complex with data members real and imaginary.
// Use the necessary member function to add two complex numbers and display the result.
#include<iostream>

using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    // Member function to set the complex number
    void setComplex(float r, float i) {
        real = r;
        imaginary = i;
    }

    // Member function to add two complex numbers
    Complex addComplex(const Complex& c2) const {
        Complex result;
        result.real = real + c2.real;
        result.imaginary = imaginary + c2.imaginary;
        return result;
    }

    // Member function to display the complex number
    void displayComplex() const {
        cout << "Result: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex complex1, complex2, result;

    // Set the first complex number
    float real1, imaginary1;
    cout << "Enter Complex Number 1 (real imaginary): ";
    cin >> real1 >> imaginary1;
    complex1.setComplex(real1, imaginary1);

    // Set the second complex number
    float real2, imaginary2;
    cout << "Enter Complex Number 2 (real imaginary): ";
    cin >> real2 >> imaginary2;
    complex2.setComplex(real2, imaginary2);

    // Add two complex numbers
    result = complex1.addComplex(complex2);

    // Display the result
    cout << "\nComplex Number 1: " << real1 << " + " << imaginary1 << "i" << endl;
    cout << "Complex Number 2: " << real2 << " + " << imaginary2 << "i" << endl;

    result.displayComplex();

    return 0;
}
