#include <iostream>
using namespace std;

char *convertNumToStr(int number)
{
    int copy = number, digitsCount = 0;
    while(copy != 0)
    {
        digitsCount++;
        copy /= 10;
    }

    char *str = new char[digitsCount + 1];

    for (int i = digitsCount - 1; i > -1; i--)
    {
        str[i] = number % 10 + '0';
        number /= 10;
    }
    str[digitsCount] = '\0';
    return str;
}

int main()
{
    cout << convertNumToStr(1432) << endl;
    delete[]convertNumToStr(1432);
}