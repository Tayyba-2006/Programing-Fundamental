#include<iostream>
using namespace std;
main()
{
    int n,d;
    cout<<"Enter the number ";
    cin >> n;
    cout<<"enter the digit: ";
    cin >> d;
    int count=0;
    while(n>0)
    {
      if(n%10==d)
      {
        count++;
      }
      n=n/10;
    }
    cout<<"Frequency of digit "<<d<<" is: "<<count;
}
