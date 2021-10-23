#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    double area = 2 * (a * b + a * c + b * c);
    double volume = a * b * c;
    cout << "S: " << area << endl;
    cout << "V: " << volume << endl;
    return 0;
}