#include <iostream>
using namespace std;
const int CAPACITY = 50;
void printStr(char *str);

//task7
int toBinary(int n)
{
    if (n == 0)
        return 0;

    return n % 2 + 10 * toBinary(n / 2);
}

//task8
void evaluate(const char *str, int countSmallLet, int countBigLet, int countNums)
{
    if (str[0] == '\0')
    {
        cout << "Count of small letters: " << countSmallLet << endl;
        cout << "Count of big letters: " << countBigLet << endl;
        cout << "Count of numbers:  " << countNums << endl;
        return;
    }

    if (str[0] >= 'a' && str[0] <= 'z')
        return evaluate(str + 1, countSmallLet + 1, countBigLet, countNums);
    if (str[0] >= 'A' && str[0] <= 'Z')
        return evaluate(str + 1, countSmallLet, countBigLet + 1, countNums);
    if (str[0] >= '0' && str[0] <= '9')
        return evaluate(str + 1, countSmallLet, countBigLet, countNums + 1);
    
    return evaluate(str + 1, countSmallLet, countBigLet, countNums);
}

// task9
void swapcase(char *str)
{
    if (*str == '\0')
        return;
    
    if (*str >= 'A' && *str <= 'Z')
    {
        *str += 'a' - 'A';
        return swapcase(str + 1);
    }
    if (*str >= 'a' && *str <= 'z')
    {
        *str -= 'a' - 'A';
    }
    return swapcase(str + 1);
}

int main()
{
    cout << toBinary(87) << endl;
    const char str[7] = "Hi123J";
    evaluate(str, 0, 0, 0);
    char str1[12] = "Yoana Aneva";
    swapcase(str1);
    printStr(str1);

}

void printStr(char *str)
{
    for (int i = 0 ; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
}