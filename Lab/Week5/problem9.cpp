#include<iostream>
using namespace std;
main()
{
   int n, d, count =0;
   cout<<"Enter a number: ";
   cin>>n;
   cout<<"Enter the digit to check: ";
   cin>>d;
   while(n!=0)
   {
    if(n%10==d)
    {
        count++;
    }
      n=n/10;
   }
    cout<<"Frequency: "<<count;
}