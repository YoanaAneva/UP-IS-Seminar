#include <iostream>
using namespace std;
double findCicleArea (double r)
{
    double area = 3.14159 * r * r;
    return area;
}
int main ()
{
    double r;
    cin >> r;
    cout << findCicleArea(r) << "cm^2" << endl;
}