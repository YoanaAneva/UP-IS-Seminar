#include <iostream>
using namespace std;
const int CAPACITY = 15;

int strlen(char *str)
{
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++)
        counter++;
    
    return counter;
}

char *transform(char *str1, char *str2, int k)
{
    int newSize = strlen(str1) - k;
    char *newStr = new char [strlen(str1) + 1];

    for(int i = 0; i < newSize; i++)
        newStr[i] = str1[i];
    
    for(int i = 0; i < k; i++)
        newStr[i + newSize] = str2[i];

    return newStr;
}

int main()
{
    char str1[CAPACITY];
    cout << "Enter str1: " << endl;
    cin.getline(str1, CAPACITY);

    char str2[CAPACITY];
    cout << "Enter str2: " << endl;
    cin.getline(str2, CAPACITY);

    int k;
    cout << "k: ";
    cin >> k;

    char *ptr = transform(str1, str2, k);
    cout << ptr << endl;
    delete[] transform(str1, str2, k);
}