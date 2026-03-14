#include<iostream>
using namespace std;
main()
{
    int n1= 0, n2=1, n, next;
    cout<<"How many numbers of Fibonacci Series you want to print: ";
    cin>>n;
    cout<<n1<<", "<<n2;
    for(int x=1;x<n-1;x++)
    {
        next=n1+n2;
        cout<<", "<<next;
        n1=n2;
        n2=next;
    }
}