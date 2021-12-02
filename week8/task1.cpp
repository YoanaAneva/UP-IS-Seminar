#include <iostream>
using namespace std;
void fillArray(int array[], int size);
int findOneMissing(int array[], int size);
int main()
{
    int N;
    cout << "Enter N(number of array elements): ";
    cin >> N;
    int array[N];
    fillArray(array, N);
    cout << "Missing number: " << findOneMissing(array, N) << endl;
}
void fillArray(int array[], int size)
{
    cout << "Enter numbers from 1 to " << size + 1 << " (leave one out): ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}
int findOneMissing(int array[], int size)
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
        int copy = array[i];
        array[i] = array[minIndex];
        array[minIndex] = copy;
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] + 1 != array[i + 1])
        {
            return array[i] + 1;
        }
    }
}