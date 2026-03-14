#include<iostream>
using namespace std;
main()
{
    int value;
    cout<<"Please enter a positive Number: ";
    cin>>value;
    while (value <=0)
    {
        cout<<"Error: "<<value<<" is not a Positive Number.\n";
        cout<<"Please enter a Positive Number: ";
        cin>>value;
    }
    cout<<"Program Ends\n";
}