#include <iostream>
using namespace std;
const int CAPACITY = 20;
int strlen(char *str);
void printStr(char *str);
void addSecondStrToFirst(char *str1, char *str2)
{
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    char strCopy[size1];
    for (int i = 0; i < size1; i++)
    {
        strCopy[i] = str1[i];
    }
    str1 = new char[size1 + size2 + 1];
    for(int i = 0; i < size1; i++)
    {
        str1[i] = strCopy[i];
    }
    for(int i = 0; i < size2; i++)
    {
        str1[i + size1] = str2[i];
    }
    str1[size1 + size2] = '\0';
    printStr(str1);
    delete [] str1;
}
int main()
{
    char str1[CAPACITY];
    cin.getline(str1, CAPACITY);
    char str2[CAPACITY];
    cin.getline(str2, CAPACITY);
    addSecondStrToFirst(str1, str2);
}
int strlen(char *str)
{
    int count = 0;
    for (int i = 0; *(str + i) != '\0'; i++)
    {
        count++;
    }
    return count;
}
void printStr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
}