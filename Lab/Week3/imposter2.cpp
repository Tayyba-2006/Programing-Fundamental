#include<iostream>
using namespace std;
main()
{
float i, p, chance ;
cout<<" Enter Imposter Count: ";
cin>> i;
cout<<" Enter Player Count: ";
cin>> p;
chance = 100*(i/p);
cout<<" Chance of being an imposter: "<<chance<<"%";
}