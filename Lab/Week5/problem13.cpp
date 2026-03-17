#include<iostream>
using namespace std;
main()
{
   int toys=0, money=0, inmoney=10;
   int age, powm, upoet;
   int ttp, tmoney;
   cout<<"Enter Lilly's age[1 ... 77]: ";
   cin>>age;
   cout<<"Enter the price of the washing machine[1 ... 10,000]: ";
   cin>>powm;
   cout<<"Enter the unit price of each toy[0 ... 40]: ";
   cin>>upoet;
   for(int i=1;i<=age;i++)
   {
    if(i%2==0)
    {
        money=money+inmoney;
        money=money-1; 
        inmoney=inmoney+10; 
    }
    if(i%2!=0)
    {
        toys++;
    }
   }
    ttp=toys*upoet;
    tmoney= ttp + money;
   if(tmoney>powm)
   {
    cout<<"Yes!\n";
    int ramount = tmoney-powm;
    cout<<ramount;
   }
   else
   {
    cout<<"No!\n";
    int inamount = powm-tmoney;
    cout<<inamount;
   }
}