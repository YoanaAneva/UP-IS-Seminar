#include <iostream>
using namespace std;
int strlen(char *str);
void reverseStr(char *str);

void deleteElement(char *str)
{
    if(str[0] == '\0')
        return;
    
    str[0] = str[1];
    return deleteElement(str + 1);
}

void truncate(char* src, int n)
{
    if(n == 0)
        return;

    deleteElement(src);
    return truncate(src, n - 1);
}

int main()
{
    char str[] = "hello sir";
    int n = 5;
    reverseStr(str);
    truncate(str, strlen(str) - n);
    reverseStr(str);
    cout << str;
}

void reverseStr(char *str)
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int strlen(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}