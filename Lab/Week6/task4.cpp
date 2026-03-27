#include<iostream>
using namespace std;
int main()
{
 int n[5];
 for(int idx=0;idx<5;idx++)
 {
    cout<<"Enter Number: ";
    cin>>n[idx];
 }
cout<<"The 1st element in array is: "<<n[0]<<"\n";
cout<<"The last element in array is: "<<n[4]<<"\n";
return 0;
}