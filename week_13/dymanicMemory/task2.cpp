#include <iostream>
using namespace std;
void fillArr(int *arr, int size);
void printArr(int *arr, int size);

//task2
void halfArray(int *arr, int &size)
{
    size /= 2;

    int *newArr = new int [size];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }
    delete [] arr;

    arr = new int [size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = newArr[i];
    }

    delete [] newArr;
}

//task4
void newSize(int *&arr, int size, int newSize)
{
    int *newArr = new int[size];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = new int[newSize];
    for (int i = 0; i < size; i++)
    {
        arr[i] = newArr[i];
    }
    delete[] newArr;
}

int main()
{
    int size;
    cout << "size: "; cin >> size;
    int *arr = new int [size];
    fillArr(arr, size);
    // halfArray(arr, size);
    newSize(arr, size, 9);
    printArr(arr, 9);
    delete [] arr; 
}

void fillArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}