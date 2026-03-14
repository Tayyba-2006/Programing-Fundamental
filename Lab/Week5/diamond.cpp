#include<iostream>
using namespace std;
main()
{
  int i,r=5,j;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        cout<<"*";
        cout<<"\n";
    }
    for(i=1;i<=r;i++)
    {
        for(j=5;j>=i;j--)
        cout<<"*";
        cout<<"\n";
    }
}