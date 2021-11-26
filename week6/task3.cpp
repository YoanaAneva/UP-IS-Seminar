#include <iostream>
using namespace std;
int main()
{
    bool isNew, hasAirConditioner;
    cout << "Is the car new? ";
    cin >> isNew;
    cout << "Does it have air conditioner? ";
    cin >> hasAirConditioner;
    int km, horsepower, price;
    cout << "Km: ";
    cin >> km;
    cout << "Housepower: ";
    cin >> horsepower;
    cout << "Price: ";
    cin >> price;
    bool TraichoWillBuyIt = (!isNew && hasAirConditioner &&
                             km < 115000 && horsepower >= 70 && price <= 6000) ||
                            (!isNew && !hasAirConditioner && km < 180000 &&
                             horsepower >= 60 && price <= 2000) ||
                            (isNew && horsepower >= 70 && horsepower <= 90 && price <= 25000);
    cout << (TraichoWillBuyIt ? "Traicho will buy it!" : "Traicho won't buy it!") << endl;
}