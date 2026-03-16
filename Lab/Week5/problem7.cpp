#include<iostream>
using namespace std;
main()
{
    int n1 = 0, n2 = 1, n, next;
    cout<<"Enter the length of the Fibonacci Series: ";
    cin>>n;
    if(n>=2)
    {
    cout<<n1<<" , "<<n2;
    }
    else if(n==1)
    {
    cout<<n1;   
    }
    for(int x=1;x<n-1;x++)
    {
        next=n1+n2;
        cout<<", "<<next;
        n1=n2;
        n2=next;
    }
}