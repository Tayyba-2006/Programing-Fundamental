#include<iostream>
using namespace std;
main()
{
float age, moves, averageyears;
cout<<" Enter the person's age: ";
cin>> age;
cout<<" Enter the number of times they've moved: ";
cin>> moves;
averageyears = age/(moves+1);
cout<<" Average number of years lived in the same house: "<<averageyears;
}
