#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= (i * 2 - 1); j++)
        {
            cout << j << " ";
        }
    }
}