#include<iostream>
using namespace std;

inline float calcSI(float principal, float time, float rate = 0.15)
 {
    return (principal * rate * time);
}

int main() {
    float principal, time;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the time (in years): ";
    cin >> time;
    float interest = calcSI(principal, time);//calling with inline funcion
    cout << "Simple Interest: " << interest << endl;

    return 0;
}
