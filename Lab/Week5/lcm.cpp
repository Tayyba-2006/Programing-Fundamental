#include<iostream>
using namespace std;
main()
{
   int n1,n2;
   int lcm,hcf;
   int min;
   cout<<"Enter first number: " ;
   cin>>n1;
   cout<<"Enter second number: ";
   cin>>n2;
   if(n1>n2)
   {
     min=n2;
   }
   else
   {
     min=n1;
   }
   for(int i=1; i<=min;i++)
   {
    if(n1%i==0 && n2%i==0)
    {
        hcf=i;
    }
   }
   cout<<"HCF of "<<n1<<" and "<<n2<<" is: "<<hcf<<"\n";
   lcm=(n1*n2)/hcf;
   cout<<"LCM of "<<n1<<" and "<<n2<<" is: "<<lcm;
}