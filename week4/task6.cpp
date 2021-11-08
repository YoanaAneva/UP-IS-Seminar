#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    
    cout << endl;
    for (int i = 0; i <= N - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "-";
        }
        for (int j = N - 1; j >= i; j--)
        {
            cout << "+";
        }
        cout << endl;
       
    }
}
// N = 7
// +++++++
// -++++++
// --+++++
// ---++++
// ----+++
// -----++
// ------+