#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    bool containsOne = false;
    while(number != 0 && !containsOne)
    {
        if (number % 10 == 1)
        {
            containsOne = true;
        }
        number /= 10;
    }
    cout << (containsOne ? "Yes" : "No") << endl; 
}
