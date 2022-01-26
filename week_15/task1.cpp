#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reverse(int *arr, int size)
{
    for (int i = 0, k = size - 1; i < size / 2; i++, k--)
    {
        swap(arr[i], arr[k]);
    }
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr, 7);
    
    int *arr1 = new int [7];
    for(int i = 0; i < 7; i++)
        arr1[i] = i + 1;
    reverse(arr1, 7);

    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";

    cout << endl;
    for (int i = 0; i < 7; i++)
        cout << arr1[i] << " ";

    delete[] arr1;
}