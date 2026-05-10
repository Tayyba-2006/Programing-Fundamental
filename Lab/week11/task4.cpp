#include<iostream>
using namespace std;
int sum(int matrix[][3], int rowSize);
int main()
{
    int rowSize;
    cout<<"Enter row size: ";
    cin>>rowSize;
    cout<<"Enter the elements of the matrix: \n";
    int matrix[rowSize][3];
    for(int i = 0; i < rowSize ; i++)
    {
        for(int j = 0; j < 3 ; j++)
        {
           cout<<"Enter elements at position [" << i <<"][" << j << "]:";
           cin>>matrix[i][j];
        }
    }
    cout<<"The sum of elements in the matrix is: "<< sum(matrix,rowSize);
    return 0;
}
int sum(int matrix[][3], int rowSize)
{
    int sum = 0;
   for(int i = 0; i < rowSize ; i++)
    {
        for(int j = 0; j < 3 ; j++)
        {
            sum = sum + matrix[i][j];
        }
    }  
    return sum;
}