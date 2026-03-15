#include<iostream>
using namespace std;
main()
{
   char ch ='y';
   while(ch =='y')
   {
    cout<<"I am Happy\n";
    cout<<"Press y to continue or any key to exit\n";
    cin>>ch;
   }
}