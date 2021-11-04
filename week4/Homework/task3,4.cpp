#include <iostream>
using namespace std;
int main() {
    // int a, n;
    // cin >> a >> n;
    // int result = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     result *= a;
    // }
    // cout << result << endl;


    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "1";
        }
        if (i == 0 || i == n)
        {
        cout << "";
        }
        else
        {
        cout << "+";
        }

    }
  return 0;  
}
