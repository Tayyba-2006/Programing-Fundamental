#include<iostream>
using namespace std;
int countIdenticalArrays(int arr[][3], int rows)
{
    int count = 0;
    for(int i = 0; i < rows ; i++)
    {
        for(int j = i+1; j < rows; j++)
        {
            bool same = true;
            for(int k = 0; k < 3; k++)
            {
                if(arr[i][k] != arr[j][k])
                {
                    same = false;
                    break;
                }
            }
            if(same)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    int arr[rows][3];
    cout << "Enter the elements of the matrix: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter elements at position [" << i << "][" << j << "]:";
            cin >> arr[i][j];
        }
    }
    cout<<"Count of identical arrays = "<<countIdenticalArrays(arr, rows);
    return 0;
}