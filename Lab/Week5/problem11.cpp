#include<iostream>
using namespace std;
main()
{
    int min,n1,n2,lcm,hcf;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    if(n1<n2)
    {
        min = n1;
    }
    else
    {
        min = n2;
    }
    for(int i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    lcm=(n1*n2)/hcf;
    cout<<"GCD: "<<hcf<<"\n";
    cout<<"LCM: "<<lcm;
}