#include<iostream>
using namespace std;
int main(){
float s;
cout<<"Speed: ";
cin>>s;
if(s<=10){cout<<"Slow.";}
if(s>10 && s<=50){cout<<"Average.";}
if(s>50 && s<=150){cout<<"Fast.";}
if(s>150 && s<=1000){cout<<"Ultra fast";}
if(s>1000){cout<<"Extremely fast";}
return 0;
}