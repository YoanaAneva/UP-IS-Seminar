#include <iostream>
using namespace std;
int countChars(char array[]);
void makeLettersSmall(char name[]);
void connectTwoNames(char firstName[], char secondName[]);
const int SIZE = 50;
int main()
{
    char firstName[SIZE];
    char secondName[SIZE];
    cin.getline(firstName, SIZE);
    cin.getline(secondName, SIZE);

    makeLettersSmall(firstName);
    makeLettersSmall(secondName);

    connectTwoNames(firstName, secondName);
}

int countChars(char array[])
{
    int countChars = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        countChars++;
    }
    return countChars;
}

void makeLettersSmall(char name[])
{
    int size = countChars(name);
    for(int i = 0; i < size; i++)
    {
        if(name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
    }

}

void connectTwoNames(char firstName[], char secondName[])
{
    int sizeFirst = countChars(firstName);
    int sizeBoth = sizeFirst + countChars(secondName);
    char namesConnected[sizeBoth];
    for (int i = 0; i <= sizeBoth; i++)
    {
        if (i < sizeFirst)
        {
            namesConnected[i] = firstName[i];
        }
        if (i == sizeFirst)
        {
            namesConnected[i] = '_';
        }
        if (i > sizeFirst)
        {
            namesConnected[i] = secondName[i - sizeFirst - 1];
        }

    }
    for (int i = 0; i <= sizeBoth; i++)
    {
        cout << namesConnected[i];
    }
}
