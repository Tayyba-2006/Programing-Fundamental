#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number of flights: ";
cin>>n;  
int flight[n];
string des[n];
int  seats[n];
for(int i = 0; i<n; i++)
{
    cout<<"Enter flight number for flight "<<i+1<<": ";
    cin>>flight[i];
    cout<<"Enter destination for flight "<<flight[i]<<": ";
    cin>>des[i];
    cout<<"Enter seats available for "<<flight[i]<<": ";
    cin>>seats[i];
    cout<<"\n";
}
cout<<endl;
cout<<"Flight Information:\n";
cout<<"-------------------\n";
for(int i = 0; i<n; i++)
{
    cout<<"Flight "<<flight[i]<<" to "<<des[i]<<" has "<<seats[i]<<" seats available.\n";
}
cout<<endl;
cout<<"Flights with less than 5 seats available:\n";
cout<<"-----------------------------------------\n";
for(int i = 0; i<n; i++)
{
    if(seats[i] < 5)
    {
        cout<<"Flight "<<flight[i]<<" to "<<des[i]<<" has only "<<seats[i]<<" seats left!\n";
    }
    else
    {
        cout<<"No flights with less than 5 seats availabe.";
    }
}
return 0;
}