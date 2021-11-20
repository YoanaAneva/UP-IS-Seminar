#include <iostream>
using namespace std;

bool checkPrimeNumbers (int number)
{
    for (int i = 2; i <= number / 2; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool checkPairedPrimeNumbers (int A, int B)
{
    if (checkPrimeNumbers(A) && checkPrimeNumbers(B) && A + 2 == B)
    {
        return true;
    }
    return false;
}
int main()
{
    int A, B;
    cin >> A >> B;
    cout << boolalpha << checkPairedPrimeNumbers (A, B) << endl;
}