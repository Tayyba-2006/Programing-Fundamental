#include<iostream>
using namespace std;
main()
{
float at, ct, ats, cts, charity,  total, d, remaining;
string name;
cout<<" Enter the movie name: ";
cin>>name;
cout<<" Enter the adult ticket price: $";
cin>>at;
cout<<" Enter the child ticket price: $";
cin>>ct;
cout<<" Enter the number of adult tickets sold: ";
cin>>ats;
cout<<" Enter the number of child tickets sold: ";
cin>>cts;
cout<<" Enter the percentage of amount to be donated to charity: ";
cin>>charity;
cout<<"--------------------------------------------------\n";
cout<<" Movie: "<<name<<"\n";
total = at*ats + ct*cts;
d = total*charity/100;
remaining = total-d;
cout<<" Total Amount Generated from Ticket Sales $"<<total<<"\n";
cout<<" Donation to Charity("<<charity<<"): $"<<d<<"\n";
cout<<" Remaining Amount after Donation: $"<<remaining;
}