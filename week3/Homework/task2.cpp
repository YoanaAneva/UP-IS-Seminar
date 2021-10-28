#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, biggest;
    cout << "Enter 3 numbers: " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    if (num1 > num2)
    {
        if (num1 > num3)   //num1 > num2 & num3
        {
            biggest = num1; 
        }
        else  //num3 > num1 > num2
        {
            biggest = num3;
        }
    }
    else if (num2 > num1)
    {
        if (num2 > num3)  //num2 > num1 & num3
        {
            biggest = num2;
        }
        else  // num3 > num2 and num3 > num2 > num1
        {
            biggest = num3;
        }
    }
    cout << "The biggest number is: " << biggest << endl;
    return 0;

}

    
