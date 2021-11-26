#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cout << " ";
    }
    for (int j = 0; j < n * 2; j++)
    {
        cout << "* ";
    }
    cout << endl;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = n - 2; j != i; j--)
        {
            cout << " ";
        }
        cout << "*" ;
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < 13; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = i; j < 2; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int i = 0; i < n * 2; i++)
    {
        cout << "* ";
    }
}
