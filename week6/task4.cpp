#include <iostream>
using namespace std;
int main()
{
    double priceTicket;
    int numberOfPeople;
    cin >> numberOfPeople;
    cin >> priceTicket;
    if (numberOfPeople >= 5 && numberOfPeople <= 10)
    {
        priceTicket = priceTicket - priceTicket * 0.05;
    }
    if (numberOfPeople > 10 && numberOfPeople <= 20)
    {
        priceTicket = priceTicket - priceTicket * 0.1;
        cout << priceTicket << endl;
    }
    if (numberOfPeople > 20)
    {
        priceTicket = priceTicket - priceTicket * 0.15;
    }
    cout <<numberOfPeople * priceTicket << endl;
}