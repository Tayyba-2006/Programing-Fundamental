#include <iostream>
using namespace std;
void largestColumnFirst(int matrix[][5], int rowSize)
{
    int maxSum = 0;
    int maxCol = 0;
    for (int i = 0; i < rowSize; i++)
    {
        maxSum = maxSum + matrix[i][0];
    }
    for (int j = 1; j < 5; j++)
    {
        int sum = 0;
        for (int i = 0; i < rowSize; i++)
        {
            sum += matrix[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxCol = j;
        }
    }
    for (int i = 0; i < rowSize; i++)
    {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][maxCol];
        matrix[i][maxCol] = temp;
    }
}
int main()
{
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;
    cout << "Enter the elements of the matrix: \n";
    int matrix[rowSize][5];
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter elements at position [" << i << "][" << j << "]:";
            cin >> matrix[i][j];
        }
    }
    cout << "\n";
    cout << "Original Matrix: \n";
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    largestColumnFirst(matrix, rowSize);
    cout << "\n";
    cout << "Matrix after largest column moved to first: \n";
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}