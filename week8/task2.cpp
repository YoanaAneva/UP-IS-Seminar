#include <iostream>
using namespace std;
void fillArray(int size, int row[]);
bool hasTwoNeighbEquals(int size, int row[]);
int main()
{
    int n;
    cout << "Enter size of row: ";
    cin >> n;
    int row[n];
    fillArray(n, row);
    cout << boolalpha << hasTwoNeighbEquals(n, row) << endl;
}
void fillArray(int size, int row[])
{
    for (int i = 0; i < size; i++)
    {
        cin >> row[i];
    }
}
bool hasTwoNeighbEquals(int size, int row[])
{
    for (int i = 0; i < size - 1; i++)
    {
        if (row[i] == row[i + 1])
        {
            return true;
        }
    }
    return false;
}