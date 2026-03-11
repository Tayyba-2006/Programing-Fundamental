#include<iostream>
using namespace std;
main()
{
int n, w , h , wallspainted;
cout<<"Enter paint area: ";
cin>>n;
cout<<" Enter width: ";
cin>>w;
cout<<" Enter height: ";
cin>>h;
wallspainted = n/(w*h);
cout<<"Walls painted = "<<wallspainted;
}