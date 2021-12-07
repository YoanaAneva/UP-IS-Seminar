#include <iostream>
using namespace std;
const int MAX_COLS = 100;
void fillMatrix(int matrix[][MAX_COLS], int rows, int cols);
void multiplyMatrixes(int firstMatrix[][MAX_COLS], int secondMatrix[][MAX_COLS], int multipliedMatrix[][MAX_COLS], 
                      int rows1, int cols, int rows2, int cols2);
int main()
{
    int rows1, cols1, rows2, cols2;
    int firstMatrix[MAX_COLS][MAX_COLS];
    int secondMatrix[MAX_COLS][MAX_COLS];
    int multipliedMatrix[MAX_COLS][MAX_COLS];
    cout << "Enter first matrix's rows: "; cin >> rows1;
    cout << "Enter first matrix's columns: "; cin >> cols1;
    cout << "Enter first matrix: " << endl; 
    fillMatrix(firstMatrix, rows1, cols1);
    cout << "Enter second matrix's rows: "; cin >> rows2;
    cout << "Enter second matrix's columns: "; cin >> cols2;
    cout << "Enter second matrix: " << endl; 
    fillMatrix(secondMatrix, rows2, cols2);
    if (cols1 != rows2)
    {
        cout << "Matrixes cannot be multiplied" << endl;
    }
    else
    {
        cout << "YES" << endl;
        multiplyMatrixes(firstMatrix, secondMatrix, multipliedMatrix, rows1, cols1, rows2, cols2);
    }
}

void fillMatrix(int matrix[][MAX_COLS], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

}

void multiplyMatrixes(int firstMatrix[][MAX_COLS], int secondMatrix[][MAX_COLS], int multipliedMatrix[][MAX_COLS], 
                      int rows1, int cols1, int rows2, int cols2)
{
    for(int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
          multipliedMatrix[i][j] = 0;
          for (int k = 0; k < cols2; k++)
          {
              multipliedMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];

          }

        }
    }
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << multipliedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
