#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter 3 numbers: " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;

   int biggest = num1;
   if (num2 > biggest)
   {
       biggest = num2;
   }
   if (num3 > biggest)
   {
       biggest = num3;
   }
   cout << "The biggest number is: " << biggest << endl;
   return 0;


}
