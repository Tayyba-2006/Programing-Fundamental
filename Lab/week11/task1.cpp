#include<iostream>
using namespace std;
int getcarsBycolor(int cidx);
int cars[5][5] = {
    {10, 7, 12, 10, 4},
    {18, 11, 15, 7, 2},
    {23, 19, 12, 16, 14},
    {7, 12, 16, 0, 2},
    {3, 5, 6, 2, 1}
};
int main()
{
   int total;
   total = getcarsBycolor(0);
   cout<< total;
}
int getcarsBycolor(int cidx)
{
    int total = 0;
    for (int i = 0; i<= 5; i++)
    {
        total = total + cars [i][cidx];
    }
    return total;
}