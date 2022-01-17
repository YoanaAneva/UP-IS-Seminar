#include <iostream>
using namespace std;
int numOfDigits(int n);
void printStr(char *str);

char *convert(int number)
{
    int size = numOfDigits(number); 
    char *str = new char[size + 1];
    for (int i = size - 1; i > -1; i--)
    {
        str[i] = (number % 10) + 48;
        number /= 10;
    }
    str[size] = '\0';
    return str;
}

int main()
{
    int number = 12345;

    printStr(convert(number));
    delete[] convert(number);
}

int numOfDigits(int n)
{
    int count = 0;
    while(n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

void printStr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        cout << str[i];
}