#include<iostream>
using namespace std;
int main()
{
  int age=18, year, inheritance, spend;
  cout<<"Enter Money[1 ... 1,000,000]: $";
  cin>>inheritance;
  cout<<"Enter Year[1801 ... 1900]: ";
  cin>>year;
  for(int i=1800; i<=year; i++)
  {
    if(i%2==0)
    {
      spend = 12000;
    }
    else
    {
      spend = 12000 + 50 * age;
    }
    inheritance=inheritance-spend;
    age++;
  }
  if(inheritance>=0)
  {
    cout<<"Yes! He will live a carefree life and will have $"<<inheritance<<" left.\n";
  }
  else
  {
    cout<<"He will need $"<<-inheritance<<" to survive.\n";
  }
  return 0;
}