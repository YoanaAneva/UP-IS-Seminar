#include <iostream>
using namespace std;
double abs (double number);
int main()
{
    double number;
    cin >> number;
    cout << abs(number) << endl;
    return 0;
}
double abs (double number)
{
    if (number < 0)
    {
        number *= (-1);
    }
    return number;
}