#include <iostream>
using namespace std;
int main()
{
    int size = 6;
    int array[size] = {-53, 1, 7, 77, 93, -2};
    for (int i = 1; i < size; i++)
    {
        array[i - 1] = array[i];
    }
    for (int i = size - 2; i != 0; i--)
    {
        array[i] = array[i - 1];
    }
    for (int i = 0; i < size - 2; i++)
    {
        array[i] = array[i + 1];
    }
    for (int i = 0; i < size - 2; i++)
    {
        cout << array[i] << " ";
    }
}