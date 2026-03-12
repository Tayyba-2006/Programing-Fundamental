#include<iostream>
using namespace std;
int main()
{
string op;
float num1, num2, ans;
cout<<"Welcome to the calculator\n";
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the operator: ";
cin>>op;
cout<<"Enter the second number: ";
cin>>num2;
if(op=="+"){
 ans=num1-num2;
 cout<<num1<<" - "<<num2<<" = "<<ans;}
if(op=="-"){
 ans=num1+num2;
 cout<<num1<<" + "<<num2<<" = "<<ans;}
if(op=="*"){
 ans=num1/num2;
 cout<<num1<<" / "<<num2<<" = "<<ans;}
if(op=="/"){
 ans=num1*num2;
 cout<<num1<<" * "<<num2<<" = "<<ans;}
 return 0;
}