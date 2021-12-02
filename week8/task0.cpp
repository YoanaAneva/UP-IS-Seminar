#include <iostream>
using namespace std;
void fillArray(int array[], int size);
void findMax(int array[], int size);
void findMin(int array[], int size);
int main()
{
    int size = 5;
    int array[size];
    fillArray(array, size);
    findMax(array, size);
    findMin(array, size);
}
void fillArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    cin >> array[i];
}
void findMax(int array[], int size)
{
    int indexOfMax = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > array[indexOfMax])
        {
            indexOfMax = i;
        }
    }
    cout << "Max: " << array[indexOfMax] << " ";
    //filter
    for(int i = indexOfMax; i < size; i++)
    {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
    int secondMax = array[0];
    for(int i = 1; i < size - 1; i++)
    {
        if (array[i] > secondMax)
        {
            secondMax = array[i];
        }
    }
    cout << "Second Max: " << secondMax << endl;
}
void findMin(int array[], int size)
{
    int indexOfMin = 0;
    for (int i = 1; i < size; i++)
    {
        if (array[i] < array[indexOfMin])
        {
            indexOfMin = i;
        }
    }
    cout << "Min: " << array[indexOfMin] << " " ;
    //filter
    for (int i = indexOfMin; i < size; i++)
    {
        array[i] = array[i + 1];
    }
    size--;
    int secondMin = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] < secondMin)
        {
            secondMin = array[i];
        }
    }
    cout << "Second Min: " << secondMin << endl;
}