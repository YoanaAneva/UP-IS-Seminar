#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int increaseValue(int &m, int &n)
{
    while(m < 2*n)
    {
        m++;
    }
    return m;
}
int main()
{
    int a = 0, b = 9;
    swap(a, b);
    cout << a << " " << b << endl;
    int m = 5, n = 7;
    cout << m << " " << n << endl;
    cout << increaseValue(m, n) << " " << n << endl;
}