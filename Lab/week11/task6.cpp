#include<iostream>
using namespace std;
string fire(char board[5][5] , string coordinate)
{
    int row = coordinate[1] - '1' ;
    int col = coordinate[0] - 'A' ;
    if(board[row][col] == '*')
    {
        return "BOOM";
    }
    else
    {
    return "Splash";
    }
}
int main()
{
    char board[5][5] = 
    {
        {'.','.','.','*','.'},
        {'.','*','.','.','.'},
        {'*','.','*','.','.'},
        {'*','.','*','.','*'},
        {'.','.','*','.','*'}
    };
    string coordinate;
    cout<<"Enter coordinate to fire torpedo (e.g. A1, B3, E5): ";
    cin>> coordinate;
    cout<<"Result: " << fire(board, coordinate);
    return 0;
}
