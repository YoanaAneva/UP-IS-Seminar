#include <iostream>
using namespace std;
void fillArray(int *array, int size);
void printArray(int *array, int size);
void removeDuplicates(int *array ,int &size, int number);
void remove(int *array, int &size, int number);
// void removeNumber(int array[], int &size, int number)
// {
//     removeDuplicates(array, size, number);
//     printArray(array, size);
//     cout << endl << size << endl;
//     for (int i = 0; i < size - 1; i++)
//     {
//         if(array[i] == number)
//         {
//             for (int j = i; j < size - 1; j++)
//             {
//                 array[j] = array[j + 1];
//             }
//         }
//     }
//     size--;
// }

int main()
{
    int size, number;
    cout << "Size: ";
    cin >> size;
    int array[size];
    fillArray(array, size);
    cout << "number to be removed: ";
    cin >> number;
    // removeNumber(array, size, number);
    remove(array, size, number);
    printArray(array, size);
}
// void removeDuplicates(int *array ,int &size) 
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size;)
//         {
//             if(array[i] == array[j])
//             {
//                 for (int k = j; k < size - 1; k++)
//                 {
//                     array[k] = array[k + 1];
//                 }
//                 size--;
//             }
//             else 
//             {
//                 j++;
//             }
//         }
//     }
// }

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
void remove(int *array, int &size, int number)
{
    for (int i = 0; i < size;)
    {
        if (array[i] == number)
        {
            for(int j = i; j < size - 1; j++)
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