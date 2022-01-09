#include <iostream>
using namespace std;
int strlen(const char *str);

//task3
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

//task4
bool areEqual (const char *str1, const char *str2)
{
    if (strlen(str1) != strlen(str2))
        return false;

    if (str1[0] == '\0')
        return true;
    
    if (str1[0] != str2[0])
        return false;

    return areEqual(str1 + 1, str2 + 1);
}

//task5
int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2); 
}

//task6
int findMin(int *arr, int size, int min)
{
    if (size == 0)
        return min;

    if (arr[0] < min)
        min = arr[0];

    return findMin(arr + 1, size - 1, min);
}

int main()
{
    cout << factorial(5) << endl;
    const char str1[6] = "Hello";
    const char str2[6] = "Hellp";
    cout << boolalpha << areEqual(str1, str2) << endl;
    cout << fib(6) << endl;
    int arr[6] = {4, 3, 2, 100, 7, 5};
    cout << findMin(arr, 6, arr[0]) << endl;

}

int strlen(const char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}