#include <iostream>
using namespace std;
void fillArray(int array[], int size);
void checkInterestingNums(int array[], int size);
int main()
{
    int size;
    cin >> size;
    int array[size];
    fillArray(array, size);
    checkInterestingNums(array, size);
}
void fillArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}
void checkInterestingNums(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool areDescending = false;
        while(array[i] != 0)
        {
            if (array[i] % 10 < array[i] / 10 % 10)
            {
                areDescending = true;
            }
            array[i] /= 10;
        }
        cout << (areDescending ? "No" : "Yes") << endl;
    }
}