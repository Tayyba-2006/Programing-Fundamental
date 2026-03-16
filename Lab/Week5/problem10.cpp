#include<iostream>
using namespace std;
main()
{
    int n, sum=0,d;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    cout<<"Sum of digits: "<<sum;
}