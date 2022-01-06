#include <iostream>
using namespace std;
void fillArray(int *arr, int size);
void printArray(int *arr, int size);

void pushBack(int *&arr, int &size, int number)
{
    int *newArr = new int [size];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }
    delete [] arr;
    size++;
    arr = new int [size];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = newArr[i];
    }
    arr[size - 1] = number;
    delete [] newArr;
}

void pushFront(int *&arr, int &size, int number)
{
    int *newArr = new int [size + 1];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }
    delete [] arr;
    size++;
    arr = new int [size];
    arr[0] = number;
    for (int i = 1; i < size; i++)
    {
        arr[i] = newArr[i - 1];
    }
    delete [] newArr;
}

void copy(int *&arr, int *userArr, int &size, int userSize)
{
    delete [] arr;
    arr = new int [userSize];
    for (int i = 0; i < userSize; i++)
    {
        arr[i] = userArr[i];
    }
    size = userSize;
}

void pop_back(int *&arr, int &size)
{
    size--;
    int *newArr = new int[size];
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

void pop_front(int *&arr, int &size)
{
    size--;
    int *newArr = new int [size];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i + 1];
    }
    delete [] arr;
    arr = new int [size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = newArr[i];
    }
    delete [] newArr;
}

int main()
{
    int size;
    cout << "Enter array's size: "; cin >> size;
    int *arr = new int[size];
    cout << "Enter array's elements: " << endl;
    fillArray(arr, size);
    int choice;
    do
    {
        cout << endl << "Enter a command\n(0 - print\n1 - pushBack\n2 - pushFront\n3 - copy\n4 - pop_back\n5 - pop_front): ";
        cin >> choice;
        if (choice == 1)
        {
            int number;
            cout << "Enter a number: "; cin >> number;
            pushBack(arr, size, number);
        }
        if (choice == 2)
        {
            int number;
            cout << "Enter a number: "; cin >> number;
            pushFront(arr, size, number);
        }
        if (choice == 3)
        {
            int size1;
            cout << "Enter the new size: "; cin >> size1;
            int *arr1 = new int [size1];
            cout << "Enter the new array: " << endl;
            fillArray(arr1, size1); 
            copy(arr, arr1, size, size1);
            delete [] arr1;
        }
        if (choice == 4)
        {
            pop_back(arr, size);
        }
        if (choice == 5)
        {
            pop_front(arr, size);
        }
    } while (choice != 0);
    if (choice == 0);
    {
        printArray(arr, size);
    }
    delete [] arr;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void fillArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}