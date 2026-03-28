#include<iostream>
using namespace std;
main()
{
    int n;
    int sum = 0;
  cout<<"How many numbers you want to print: ";
  cin>>n;
  int numbers[n];
  cout<<"Enter "<<n<<" numbers: \n";
  for(int idx=0;idx<n;idx++)
  {
    cin>>numbers[idx];
    sum=sum+numbers[idx];
  }
  cout<<"Sum of all elements: "<<sum;
}