#include<iostream>
using namespace std;
main()
{
    char choice='y';
    while(choice!='N' && choice !='n')
    {
        cout<<"I am Happy !\n";
        cout<<"Enter your choice : ";
        cin>>choice;
    }
}
