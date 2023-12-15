//Create a class named distance with data members' 
//feet and inches. Use the necessary member function and WAP to add two distances and display the result in main().
#include<iostream>

using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Member function to set the distance
    void setDistance(int ft, float in) {
        feet = ft;
        inches = in;
    }

    // Member function to add two distances
    Distance addDistance(const Distance& d2) const {
        Distance result;
        result.feet = feet + d2.feet;
        result.inches = inches + d2.inches;

        // Adjust if inches exceed 12
        if (result.inches >= 12.0) {
            result.inches -= 12.0;
            result.feet++;
        }

        return result;
    }

    // Member function to display the distance
    void displayDistance() const {
        cout << "Result: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance distance1, distance2, result;

    // Set the first distance
    int feet1;
    float inches1;
    cout << "Enter Distance 1 (feet inches): ";
    cin >> feet1 >> inches1;
    distance1.setDistance(feet1, inches1);

    // Set the second distance
    int feet2;
    float inches2;
    cout << "Enter Distance 2 (feet inches): ";
    cin >> feet2 >> inches2;
    distance2.setDistance(feet2, inches2);

    // Add two distances
    result = distance1.addDistance(distance2);

    // Display the result
    cout << "\nDistance 1: " << feet1 << " feet " << inches1 << " inches" << endl;
    cout << "Distance 2: " << feet2 << " feet " << inches2 << " inches" << endl;

    result.displayDistance();

    return 0;
}
