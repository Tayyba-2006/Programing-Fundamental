#include<iostream>
using namespace std;
main()
{
float population ,n, people ,month=360;
cout<<"Enter the current world population:";
cin>> population;
cout<<"Enter the monthly birth rate(number of birth per month):";
cin>> n;
people = month*n + population; 
cout<<"Population in three decades will be "<<people;
}


