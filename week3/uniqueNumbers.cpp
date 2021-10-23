#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter 4-digit number: ";
    cin >> num;
    
    int first, second, third, forth;
    if ((num >= 1000) && (num <= 9999)) {
        first = num % 10;
        second = (num / 10) % 10;
        third = (num / 100) % 10;
        forth = num / 1000;
        
        bool hasUniqueDigits = (first != second) &&
                               (first != third)  &&
                               (first != forth)  &&
                               (second != third) &&
                               (second != forth) &&
                               (third != forth);
        if (hasUniqueDigits) {
            cout << "YES, all the numbers are different!" << endl;
        }
        else {
            cout << "NO, not all numbers are different!" << endl;
        }
                
        }
    
    else {
        cout << "This is not a 4-digit number!" << endl;
    }
return 0;
}