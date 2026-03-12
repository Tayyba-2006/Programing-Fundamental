#include<iostream>
using namespace std;
int main()
{
    char going;
    cout<<"Are your friends are going?";
    cin>>going;
    if(going=='y'){
        cout<<"You are also going!";
    }
    if(going == 'n'){
        cout<<"You are not going!";
    }
}