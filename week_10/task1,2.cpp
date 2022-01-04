#include <iostream>
using namespace std;
void printArray(int *array, int size);
void swap(int &a, int &b);
void reverseArray(int *array, int size);
void sortArrayinAscendingOrder(int *array, int size);
void sortArrayinDescendingOrder(int *array, int size);
int main()
{
    // task1
    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverseArray(array, 9);
    printArray(array, 9);
    cout << endl;

    // task2
    int array2[8] = {5, 3, 12, 2, 7, 99, 4, 17};
    sortArrayinAscendingOrder(array2, 8);
    printArray(array2, 8);
    cout << endl;
    sortArrayinDescendingOrder(array2, 8);
    printArray(array2, 8);
}

void reverseArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        swap(array[i], array[size - 1]);
        size--;
    }
}

void sortArrayinAscendingOrder(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        swap(array[i], array[minIndex]);
    }
}

void sortArrayinDescendingOrder(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int maxIndex = i;
        {
            for (int j = i + 1; j < size; j++)
            {
                if(array[j] > array[maxIndex])
                {
                    maxIndex = j;
                }
            }
            swap(array[i], array[maxIndex]);
        }
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
        cout << *(array + i) << " ";
    }
}