#include <iostream>
using namespace std;
const int CAPACITY = 50;

void printWord(const char *str, int firstLetter, int lastLetter);
char *copyStr(const char *str);
int countLetters(const char *str, int firstLetter, int lastLetter);

void findWords(const char *str, int &count, int &shortFrstInd, int &shortLastInd)
{
    if (str[0] == '\0')
        return;
    
    if (str[0] != ' ')
    {
    count++;
    return findWords(str + 1, count, shortFrstInd, shortLastInd);
    }
    
}

int main()
{
    char *str;
    cin.getline(str, CAPACITY);

}

char *copyStr(const char *str, char *copyStr)
{
    for (int i = 0; str[i] != '\0'; i++)
        copyStr[i] = str[i];
}

int countLetters(const char *str, int firstLetter, int lastLetter)
{
    int count = 0;
    for (int i = firstLetter; i < lastLetter + 1; i++)
        count++;
    return count;
}

void printWord(const char *str, int firstLetter, int lastLetter)
{
    for (int i = firstLetter; i < lastLetter + 1; i++)
    {
        cout << str[i];
    }
}