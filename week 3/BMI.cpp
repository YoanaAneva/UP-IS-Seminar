#include <iostream>
using namespace std;
int main() {
    double W, h;
    cout << "Enter your weight (in kg): ";
    cin >> W;
    cout << "Enter your height (in meters): ";
    cin >> h;

    double bmi = W / (h * h);
    cout << "Your body mass index (BMI) is: " << bmi << endl;
    cout << "P.S. The body mass index in norm is 18.5-24.9" << endl;
    return 0;
}