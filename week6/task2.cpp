#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int firstNum, secondNum;
    cin >> firstNum;
    cin >> secondNum;
    bool flag = false;
    for (int i = 2; i < firstNum; i++)
    {
        if (firstNum % i == 0)
        {
            
            if (secondNum * secondNum % i == 0)
            {
                flag = true;
            }

        }
    }
    cout << (flag ? "Yes" : "No") << endl; 
}