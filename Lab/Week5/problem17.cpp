#include<iostream>
using namespace std;
int main()
{
    int choice;
    int n1,n2, result;
    while(true)
    {
    cout<<"\n--- Simple Calculator --- \n";
    cout<<"1. Addition\n";
    cout<<"2. Subtraction\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    cout<<"5. Clear Screen\n";
    cout<<"6. Exit\n";
    cout<<"Enter your choice (1-6): ";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter first number: ";
        cin>>n1;
        cout<<"Enter second number: ";
        cin>>n2;
        result=n1+n2;
        cout<<"Result: "<<result;
    }
    else if(choice==2)
    {
        cout<<"Enter first number: ";
        cin>>n1;
        cout<<"Enter second number: ";
        cin>>n2;
        result=n1-n2;
        cout<<"Result: "<<result;
    }
    else if(choice==3)
    {
        cout<<"Enter first number: ";
        cin>>n1;
        cout<<"Enter second number: ";
        cin>>n2;
        result=n1*n2;
        cout<<"Result: "<<result;
    }
    else if(choice==4)
    {
        cout<<"Enter first number: ";
        cin>>n1;
        cout<<"Enter second number: ";
        cin>>n2;
        if(n2!=0)
        {
            result=n1/n2;
            cout<<"Result: "<<result;
        }
        else
        {
            cout<<"Math Error\n";
        }
    }
    else if(choice==5)
    {
        system("cls");
        cout<<"Screen cleared.\n";
    }
    else if(choice==6)
    {
        cout<<"Exiting Calculator. Goodbye!\n";
        break;
    }
    }  
    return 0;
}