// Create a class named time with data members days, hours, minutes, and seconds.
// Use the necessary member function and WAP to add two times and display.
#include<iostream>

using namespace std;

class Time {
private:
    int days;
    int hours;
    int minutes;
    int seconds;

public:
    // Member function to set the time
    void setTime(int d, int h, int m, int s) {
        days = d;
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Member function to add two times
    Time addTime(const Time& t2) const {
        Time result;
        result.seconds = seconds + t2.seconds;
        result.minutes = minutes + t2.minutes + result.seconds / 60;
        result.seconds %= 60;
        result.hours = hours + t2.hours + result.minutes / 60;
        result.minutes %= 60;
        result.days = days + t2.days + result.hours / 24;
        result.hours %= 24;
        return result;
    }

    // Member function to display the time
    void displayTime() const {
        cout << "Days: " << days << ", Hours: " << hours << ", Minutes: " << minutes << ", Seconds: " << seconds << endl;
    }
};

int main() {
    Time time1, time2, result;

    // Set the first time
    int d1, h1, m1, s1;
    cout << "Enter Time 1 (days hours minutes seconds): ";
    cin >> d1 >> h1 >> m1 >> s1;
    time1.setTime(d1, h1, m1, s1);

    // Set the second time
    int d2, h2, m2, s2;
    cout << "Enter Time 2 (days hours minutes seconds): ";
    cin >> d2 >> h2 >> m2 >> s2;
    time2.setTime(d2, h2, m2, s2);

    // Add two times
    result = time1.addTime(time2);

    // Display the result
    cout << "\nTime 1: ";
    time1.displayTime();

    cout << "Time 2: ";
    time2.displayTime();

    cout << "\nSum of Time 1 and Time 2: ";
    result.displayTime();

    return 0;
}
