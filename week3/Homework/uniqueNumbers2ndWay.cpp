#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    
    if ((number >= 1000) && (number <= 9999)){
        int first, second, third, forth;
        first = number / 1000;
        second = (number / 100) % 10;
        third = (number / 10) % 10;
        forth = number % 10;

        bool hasUniqueDigits = !(first != second) ||
                               !(first != third)  ||
                               !(first != forth)  ||
                               !(second != third) ||
                               !(second != forth) ||
                               !(third != forth);  
                                   
        if (hasUniqueDigits == 0){
            cout << "Yes, all the digits are different!" << endl;
        }
        else{
            cout << "No, not all digits are different!" << endl;
        }

    }
    else {
        cout << "This is not a 4-digit number!";
    }  
}