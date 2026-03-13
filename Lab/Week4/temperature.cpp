#include<iostream>
using namespace std;
int main(){
 float temp1, temp2 , diff;
 cout<<"Temperature of City 1: ";
 cin>>temp1;
 cout<<"Temperature of City 2: ";
 cin>>temp2;
 diff = temp1 - temp2;
 if(diff>10){cout<<"Difference is too Big.\n";}
 cout<<"Program Ends";
 return 0;
}