#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int number;
    cin >> number;
    bool isDivisible = false;
    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            isDivisible = true;
            break;
        }
    }
    if (isDivisible)
    {
        cout << "not prime" << endl;
    }
    else 
    {
    //     cout << "prime" << endl;
    }
    
    