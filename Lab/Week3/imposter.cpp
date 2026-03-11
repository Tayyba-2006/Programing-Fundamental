#include<iostream>
using namespace std;
main()
{
int i, p, chance ;
cout<<" Enter imposters: ";
cin>> i;
cout<<" Enter p: ";
cin>> p;
chance = 100*(i/p);
cout<<" Total chance = "<<chance<<"%";
}