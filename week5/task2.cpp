#include <iostream>
using namespace std;

int how_many_times_num_contains_digit(int number, int digit)
{
    int count = 0;
    while (number != 0)
    {
        int currentDigit = number % 10;
        if (currentDigit == digit)
        {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main()
{
    int number, digit;
    do
    {
        cout << "Enter a number > 100: ";
        cin >> number;
    }
    while (number < 100);
    cout << "Enter a digit: " << endl;
    cin >> digit;
    cout << "The digit " << digit << " is contained " << 
    how_many_times_num_contains_digit(number, digit) << " times." << endl;
}