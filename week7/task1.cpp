#include <iostream>
using namespace std;
const int SIZE = 33;
int main()
{
    int number;
    do
    {
        cout << "Enter number(1,2,3): ";
        cin >> number;
    } while (number < 1 || number > 3);
    
    char arrayOfChars[SIZE];
    cin.ignore();
    cin.getline(arrayOfChars, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        if (number == 1)
        {
            if ((arrayOfChars[i] >= 'A' && arrayOfChars[i] <= 'Z') || 
                (arrayOfChars[i] >= 'a' && arrayOfChars[i] <= 'z'))
            {
                cout << arrayOfChars[i];
            }
        }
        if (number == 2)
        {
            if (arrayOfChars[i] >= '0' && arrayOfChars[i] <= '9')
            {
                cout << arrayOfChars[i];
            }
        }
        if (number == 3)
        {
            if ((arrayOfChars[i] >= '+' && arrayOfChars[i] <= '.') ||
                arrayOfChars[i] == '!' || arrayOfChars[i] == '?' ||
                arrayOfChars[i] == ')' || arrayOfChars[i] == '(' ||
                arrayOfChars[i] == '{' || arrayOfChars[i] == '}' ||
                arrayOfChars[i] == ']' || arrayOfChars[i] == '[')
            {
                cout << arrayOfChars[i];
            }
        }
    }
}