#include <iostream>
using namespace std;
const int MAX_COLS = 10;
void fillMatrix(int matrix[][MAX_COLS], int size);
void printMatrCounterClockwise(int matrix[][MAX_COLS], int size)
{
    int firstRow = 0, lastRow = size - 1, firstCol = 0, lastCol = size - 1;
    while(firstRow < lastRow)
    {
        for (int i = firstRow; i <= lastRow; i++)
        {
            cout << matrix[i][firstCol] << " ";
        }
        firstCol++;
        for (int i = firstCol; i <= lastCol; i++)
        {
            cout << matrix[lastRow][i] << " ";
        }
        lastRow--;
        for(int i = lastRow; i >= firstRow; i--)
        {
            cout << matrix[i][lastCol] << " ";
        }
        lastCol--;
        for(int i = lastCol; i >= firstCol; i--)
        {
            cout << matrix[firstRow][i] << " ";
        }
        firstRow++;
    }
}
int main()
{
    int size;
    cout << "Enter size of matrix: ";
    cin >> size;
    int matrix[MAX_COLS][MAX_COLS];
    cout << "Enter matrix: " << endl;
    fillMatrix(matrix, size);
    printMatrCounterClockwise(matrix, size);    
}
void fillMatrix(int matrix[][MAX_COLS], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
