#include<iostream>
using namespace std;
bool isIdentity(int matrix[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j]  != 0))
            return false;
        }
    }
    return true;
}
int main()
{
    int matrix[3][3];
    cout<<"Enter the elements of the matrix: \n";
    for(int i = 0; i < 3; i++ )
    {
        for(int j = 0; j < 3 ; j++)
        {
           cout<<"Enter elements at position [" << i <<"][" << j << "]:";
           cin>>matrix[i][j];
        }
    }
    cout<<"The matrix you entered is: \n";
    for(int i = 0; i < 3; i++ )
    {
        for(int j = 0; j < 3 ; j++)
        {
           cout<<matrix[i][j]<<"\t";  
        }
         cout<<"\n";
    }
    if(isIdentity(matrix))
    {
        cout<<"The entered matrix is an identity matrix.";
    }
    else
    {
        cout<<"The entered matrix is not an identity matrix.";
    }
    return 0;
}