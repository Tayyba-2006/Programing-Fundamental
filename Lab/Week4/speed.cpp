#include<iostream>
using namespace std;
int main(){
    int speed;
    cin>>speed;
    cout<<"Speed: "<<speed<<"km/h\n";
    if(speed>100){cout<<"Halt....YOU WILL BE CHALLANED!!!";}
    else{cout<<"PERFECT! You are going good.";}
    return 0;
}