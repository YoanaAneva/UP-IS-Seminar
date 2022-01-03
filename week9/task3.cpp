#include <iostream>
using namespace std;
void printMatrix(int matrix[][3], int rows);
void transpose(int matrix[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < rows; j++)
        {
            int temp = matrix[j][i];
            matrix[j][i] = matrix[i][j];
            matrix[i][j] = temp;
        }
    }
}
void reverse(int matrix[][3], int rows)
{
    for(int i = 0; i < rows; i++)
    {
        int k = rows - 1;
        for (int j = 0; j < rows / 2; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
            k--;
        }
    }
}
void rotate(int matrix[][3], int rows)
{
    transpose(matrix, rows);
    reverse(matrix,rows);
}
int main()
{
    int matrix[][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};
    rotate(matrix, 3);
    printMatrix(matrix, 3);
}

void printMatrix(int matrix[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}