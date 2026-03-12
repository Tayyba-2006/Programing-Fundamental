#include<iostream>
using namespace std;
main()
{
    int num1, num2;
    cout<<"Please Enter the number: ";
    cin>>num1;
    cout<<"Please Enter the second number: ";
    cin>>num2;
    if(num1<num2){
        cout<<"Number "<<num2<<" is greater than "<<num1;
    }
    else{
        cout<<"Number "<<num1<<" is greater than "<<num2;
    }
}