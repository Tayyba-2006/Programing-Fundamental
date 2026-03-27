#include<iostream>
using namespace std;
main()
{
  int n;
  cout<<"How many numbers you want to print: ";
  cin>>n;
  int numbers[n];
  for(int idx=0;idx<n;idx++)
  {
    cout<<"Enter number "<<idx+1<<":";
    cin>>numbers[idx];
  }
   cout<<"You entered: ";
  for(int idx=0;idx<n;idx++)
  {
   cout<<numbers[idx]<<" ";
  }
}