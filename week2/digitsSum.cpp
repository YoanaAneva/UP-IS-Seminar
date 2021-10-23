#include <iostream>
using namespace std;
int main() {
    cout << "Enter 3-digit number: ";
    int number;
    cin >> number;
    int first_digit = number % 10;
    int second_digit = (number / 10) % 10;
    int third_digit = number / 100;
    int sum = first_digit + second_digit + third_digit;
    cout << third_digit << endl;
    cout << second_digit << endl;
    cout << first_digit << endl;
    cout << "Sum: " << sum << endl;
    return 0;
}