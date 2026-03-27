#include<iostream>
using namespace std;
main()
{
   int sum = 0;
   float ave = 0;
   int n[5] = {1,2,3,4,5};
   for( int idx = 0; idx<5; idx++)
   {
    sum=sum+n[idx];
   }
   ave = sum/5;
   cout<<"Sum: "<<sum<<"\n";
   cout<<"Average: "<<ave<<"\n";
}