#include <iostream>
using namespace std;

//task1
int multiply(int n, int k)
{
    if (n == 1)
        return n;

    return n * multiply(n - k, k);
}

// task2
void compareStr(char *str1, char *str2)
{
    if (str1[0] == '\0' && str2[0] == '\0')
    {
        cout << "Strings are equal" << endl;
        return;
    }
    if (str1[0] > str2[0] || str2[0] == '\0')
    {
        cout << "First string is bigger" << endl;
        return;
    }
    if (str2[0] > str1[0] || str1[0] == '\0')
    {
        cout << "Second string is bigger" << endl;
        return;
    }
    return compareStr(str1 + 1, str2 + 1);
}

int main()
{
    int n = 25, k = 6;
    cout << endl << multiply(n, k) << endl;

    char str1[] = "Hio";
    char str2[] = "Hio";
    cout << endl;
    compareStr(str1, str2);

}
