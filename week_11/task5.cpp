#include <iostream>
using namespace std;
void fillArray(int *array, int size);
void printArray(int *array, int size);
void removeNumber(int *array, int &size, int number)
{
    for (int i = 0; i < size;)
    {
        if (array[i] == number)
        {
            for (int j = i; j < size - 1; j++)
            {
                array[j] = array[j + 1];
            }
            size--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int size, number;
    cout << "Size: ";
    cin >> size;
    int array[size];
    fillArray(array, size);
    cout << "number to be removed: ";
    cin >> number;
    removeNumber(array, size, number);
    printArray(array, size);
}

void fillArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> *(array + i);
    }
}
void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
