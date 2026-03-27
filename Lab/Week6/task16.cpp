#include<iostream>
using namespace std;
int main()
{
    int coin[4];
    cout<<"Enter quarters: ";
    cin>>coin[0];
    cout<<"Enter dimes: ";
    cin>>coin[1];
    cout<<"Enter nickels: ";
    cin>>coin[2];
    cout<<"Enter pennies: ";
    cin>>coin[3];
    float adue;
    cout<<"Enter the total amount due: $";
    cin>>adue;
    float tamount = coin[0]*0.25 + coin[1]*0.10 + coin[2]*0.05 + coin[3]*0.01;
    cout<<"Can you pay the amount? ";
    if(tamount>=adue)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
