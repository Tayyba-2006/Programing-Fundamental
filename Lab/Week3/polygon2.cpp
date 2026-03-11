#include<iostream>
using namespace std;
main()
{
int n, degree=180, angles;
cout<<"Enter the number of sides of the polygon: ";
cin>> n;
angles= (n-2)*degree;
cout<<"The total sum of internal angles of a "<<n<<"-sided polygon is : "<<angles<<" degrees";
} 