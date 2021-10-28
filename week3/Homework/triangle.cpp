#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter triangle sides: ";
    cin >> a;
    cin >> b;
    cin >> c;
    cout << a << endl << b << endl << c << endl;
    bool isTriangle = (a < (b + c)) && 
                      (b < (a + c)) &&
                      (c < (a + b));

    if (isTriangle == 1){
        
            cout << "exists, ";
        if (a == b && b == c)
        {
             cout << "equilateral" << endl;
        }
        else if (a == b && a != c) 
        {
            cout << "isoceles" << endl;
        }
        else
        {
            cout << "scalene";
        }
     } 
     else 
     {
         cout << "does not exist!";
     }                 
    return 0;
}