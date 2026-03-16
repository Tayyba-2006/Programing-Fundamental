#include<iostream>
using namespace std;
main()
{
   int  multi1;
   int  t=5;
     cout<<"Multiplication Table of 5:\n";
    for(int i=1; i<=10;i++)
    {
        multi1=t*i;
        cout<<t<<" * "<<i<<" = "<<multi1<<"\n";
    }
}