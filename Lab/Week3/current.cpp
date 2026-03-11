#include<iostream>
using namespace std;
main()
{
float charge, time, current;
cout<<"Enter the charge in coulombs:";
cin>> charge;
cout<<" Enter the time in seconds :";
cin>> time;
current = charge / time;
cout<<"The current is="<<current<<"Amperes";
}