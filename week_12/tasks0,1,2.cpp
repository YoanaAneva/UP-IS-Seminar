#include <iostream>
using namespace std;
// task0
int sumOfDigits(int number)
{
    if (number == 0)
        return 0;
    return number % 10 + sumOfDigits(number / 10);
}

//task1
int recStrlen(const char *str)
{
    if (str[0] == '\0')
        return 0;

    return 1 + recStrlen(str + 1);
}

//task2
int reverse(int number, int helper)
{
    if (number == 0)
        return helper;

    return reverse(number / 10, number % 10 + helper * 10);
}

int main()
{
    cout << sumOfDigits(475) << endl;
    cout << recStrlen("Good evening, sir!") << endl; //18
    cout << reverse(2345, 0) << endl;
}