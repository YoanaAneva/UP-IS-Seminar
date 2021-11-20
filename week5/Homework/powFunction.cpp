#include <iostream>
using namespace std;
double pow(double number, int power);

int main()
{
    double number;
    int power;
    cin >> number;
    cin >> power;
    cout << pow(number, power) << endl;
}
double pow (double number, int power)
{
    double numberOnPow = 1;
    for (int i = 1; i <= power; i++)
    {
        numberOnPow *= number;
    }
    return numberOnPow;
}