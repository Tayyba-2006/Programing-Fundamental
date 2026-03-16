#include<iostream>
using namespace std;
main()
{
    int n,d;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==0)
    {
     d=1;
    }
    else
    {
        while(n!=0)
        {
            n = n/10;
            d++;
        }

    }
     cout<<"Total number of digits: "<<d;
    
}