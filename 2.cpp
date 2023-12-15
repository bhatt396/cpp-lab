// WAP to find the greatest among two numbers using the concept of return by reference.//
#include<iostream>

using namespace std;

int& findGreatest(int& num1, int& num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int& greatest = findGreatest(num1, num2);
    cout << "The greatest number is: " << greatest << endl;

    return 0;
}
