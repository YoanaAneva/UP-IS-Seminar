#include <iostream>
using namespace std;
int findIndex(double *array, int size)
{
    int wantedIndex;
    for (int i = 1; i < size - 1; i++)
    {
        if (array[i] == (array[i -1] + array[i + 1]) / 2)
        {
            wantedIndex = i;
        }
    } 
    return wantedIndex;
}

int main()
{
    int size = 8;
    double array[size] = {1,2,3,4,5,7,8,9};
    cout << findIndex(array, size) << endl;
}
