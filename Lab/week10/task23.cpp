#include<iostream>
using namespace std;
float calculateBalance(float balance, int years);
int main()
{
    cout<<"Enter Balance and years: ";
    float balance;
    int years;
    cin >> balance >> years;
    cout<<"Update Balance: " << calculateBalance(balance, years);
    return 0;
}
float calculateBalance(float balance, int years)
{
    float interest = 0;
    if(balance < 10000)
    {
        interest = balance * 5 / 100;
    }
    else if (balance <= 50000)
    {
        interest = balance * 7 / 100;
    }
    else if(balance > 50000)
    {
        interest = balance * 10 / 100;
    }
    if ( years >= 3)
    {
        interest = interest + (balance * 2 / 100);
    }
    float updateBalance = balance + interest;
    return updateBalance;
}