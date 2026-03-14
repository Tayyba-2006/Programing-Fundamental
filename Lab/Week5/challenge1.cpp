#include<iostream>
using namespace std;
int main()
{
    int multi1, multi2, multi3, t1=24, t2=50, t3=29;
    cout<<"Multiplication Table of 24:\n";
    for(int i=1; i<=10;i++)
    {
        multi1=t1*i;
        cout<<t1<<" * "<<i<<" = "<<multi1<<"\n";
    }
    cout<<"\n";
    cout<<"Multiplication Table of 50:\n";
    for(int i=1; i<=10;i++)
    {
        multi2=t2*i;
        cout<<t2<<" * "<<i<<" = "<<multi2<<"\n";
    }
    cout<<"\n";
    cout<<"Multiplication Table of 29:\n";
    for(int i=1; i<=10;i++)
    {
        multi3=t3*i;
        cout<<t3<<" * "<<i<<" = "<<multi3<<"\n";
    }
    return 0;
}