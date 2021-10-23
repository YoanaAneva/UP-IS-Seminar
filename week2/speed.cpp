#include <iostream>
using namespace std;
int main() {
    double speed_km;
    cout << "Input the distance in km: ";
    cin >> speed_km;
    double speed_m = speed_km * 0.621371192;
    cout << "The " << speed_km << "km/hr means "<< 
    speed_m << " m/hr." << endl;
    return 0;

}