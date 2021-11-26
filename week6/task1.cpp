#include <iostream>
using namespace std;
int findHours(int number)
{
    int hours = number / 100;
    return hours;
}
int findMinutes(int number)
{
    int minutes = number % 100;
}
bool isRealTime(int firstNum, int secondNum)
{
    if (findHours(firstNum) < 24 && findHours(secondNum) < 24 &&
        findMinutes(firstNum) < 60 && findMinutes(secondNum) < 60)
    {
        return true;
    }
    return false;
}
int main()
{
    int firstNum, secondNum;
    do
    {
        cin >> firstNum >> secondNum;
    } while (firstNum < 1000 && secondNum < 1000);

    if (!isRealTime(firstNum, secondNum))
    {
        cout << "Invalid" << endl;
    }
    else
    {
        int firstHours = findHours(firstNum);
        int secondHours = findHours(secondNum);
        int differenceHours;
        if (firstHours > secondHours)
        {
            differenceHours = (24 - firstHours) + secondHours;
        }
        else
        {
            differenceHours = secondHours - firstHours;
        }
        int firstMin = findMinutes(firstNum);
        int secondMin = findMinutes(secondNum);
        int differenceMinutes = abs(firstMin - secondMin);
        if (differenceMinutes < 10)
        {
            cout << differenceHours << "0" << differenceMinutes << endl;
        }
        else
            cout << differenceHours << differenceMinutes << endl;
    }
}