#include <iostream>
using namespace std;
const int MAX_SIZE = 50;
int findSizeOfName(char name[]);
void convertToNickname(char name[], int size);
void printArray(char name[], int size);

int main()
{
    char name[MAX_SIZE];
    cin.getline(name, MAX_SIZE);

    int sizeOfName = findSizeOfName(name);
    convertToNickname(name, sizeOfName);
    printArray(name, sizeOfName);
}

int findSizeOfName(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void convertToNickname(char name[], int size)
{
    for (int i = 0; i < findSizeOfName(name); i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }

        if (name[i] == 'A')
        {
            name[i] = '4';
        }
        if (name[i] == 'E')
        {
            name[i] = '3';
        }
        if (name[i] == 'I')
        {
            name[i] = '1';
        }
        if (name[i] == 'O')
        {
            name[i] = '0';
        }
        if (name[i] == ' ')
        {
            name[i] = '_';
        }
    }
}

void printArray(char name[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << name[i];
    }
}