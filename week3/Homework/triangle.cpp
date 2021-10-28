#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter triangle sides: ";
    cin >> a, b, c;
    // bool isTriangle = (a < (b + c)) && 
    //                   (b < (a + c)) &&
    //                   (c < (a + b));

    bool x = (a < (b + c));
    bool y = (b < (a + c));
    bool z = (c < (a + b));
    

    cout << x << endl << y << endl << z << endl;
}
//     if (isTriangle = 1)
//     {
//         cout << "exists";
//         if (a == b && b == c)
//         {
//              cout << "equilateral" << endl;
//         }
//         else if (a == b && a != c) 
//         {
//             cout << "isoceles" << endl;
//         }
//         else
//         {
//             cout << "scalene";
//         }
//      } 
//      else 
//      {
//          cout << "does not exist!";
//      }                 
// return 0;
// }