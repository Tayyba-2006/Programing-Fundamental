#include<iostream>
using namespace std;
main()
{
float v,u,a,t;
cout<<" Enter Initial Velocity (m/s): ";
cin>>u;
cout<<" Enter Acceleration (m/s^2): ";
cin>>a;
cout<<" Enter Time (s): "; 
cin>>t;
v = u+a*t;
cout<<" Final Velocity (m/s): "<<v;
}