#include <iostream>
using namespace std;
void fillArr(int *arr, int size);
void printArr(int *arr, int size);

int *copyArr(int *arr, int size)
{
    int *copyArr = new int[size];
    for (int i = 0; i < size; i++)
    {
        copyArr[i] = arr[i];
    }
    delete[] arr;
    return copyArr;
}

int main()
{
    int size = 5;
    int *arr = new int[size];
    fillArr(arr, size);

    printArr(copyArr(arr, size), size);
    delete[] copyArr(arr, size);
}

void fillArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = i + 1;
}
void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}