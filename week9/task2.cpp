#include <iostream>
using namespace std;
void fillArray(int array[], int size);
bool checkIfSubset(int array1[], int array2[], int size1, int size2);
int main()
{
    int size1, size2;
    cout << "Enter the number of elements of the first set(must be equal or smaller than the second): ";
    cin >> size1;
    int firstSet[size1];
    cout << "Enter first set: " << endl;
    fillArray(firstSet, size1);
    cout << "Enter the number of elements of the second set: ";
    cin >> size2;
    int secondSet[size2];
    cout << "Enter second set: " << endl;
    fillArray(secondSet, size2);
    bool isSubset = checkIfSubset(firstSet, secondSet, size1, size2);
    cout << (isSubset ? "Yes, it is subset" : "No, it is not a subset") << endl;
}
void fillArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}
bool checkIfSubset(int array1[], int array2[], int size1, int size2)
{
    int count = 0;
    for(int i = 0; i < size1; i++)
    {
        bool areMatching = false;
        int currentElement = array1[i];

        for (int j = 0; j < size2 && !areMatching; j++)
        {
            if (array2[j] == currentElement)
            {
                areMatching = true;
                count++;
            }
        }
    }
    if (count == size1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
