#include <iostream>
using namespace std;
void sortArray(int *array, int size);
void printArray(int *array, int size);
void swap(int &a, int &b);
void fillNewArray(int *arr1, int size1, int *arr2, int size2, int *newArr)
{
    newArr = new int[size1 + size2];
    sortArray(arr1, size1);
    sortArray(arr2, size2);
    for(int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if(arr1[i] > arr2[j])
            {
                swap(arr1[i], arr2[j]);
            }
        }
        newArr[i] = arr1[i];
    }
    sortArray(arr2, size2);
    for (int i = 0; i < size2; i++)
    {
        newArr[i + size1] = arr2[i];
    }
    printArray(newArr, size1 + size2);
    delete [] newArr;
}

int main()
{
    int size1 = 1, size2 = 4;
    int firstArray[size1] = {100};
    int secondArray[size2] = {40, 50, 30, 20};
    int newArray[0];
    fillNewArray(firstArray, size1, secondArray, size2, newArray);
}
void sortArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if(array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        swap(array[i], array[minIndex]);
    }
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}