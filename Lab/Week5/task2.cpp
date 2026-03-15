#include<iostream>
using namespace std;
main()
{
    int PIN;
    int current_balance=2000;
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter ATM PIN: ";
        cin >> PIN;
        if(PIN==1234)
        {
            cout<<"Login Successful\n";
            break;
        }
        else
        {
            cout<<"Wrong PIN\n";
        }

        if(i == 3 && PIN !=1234)
        {
            cout << "Too many attempts. Card Blocked.\n";
            return 0;
        }
    }
    for(int j=1;j<=5;j++)
    {
    cout<<"\n------ATM MENU------\n";
    cout<<"1. Check Balance\n";
    cout<<"2. Deposit Money\n";
    cout<<"3. Withdraw Money\n";
    cout<<"4. Exit\n";
    cout<<"Enter Choice: ";
    int choice;
    cin>>choice;
    
        if(choice==1)
        {
           cout<<"Current Balance: "<<current_balance<<"\n";
        }
        else if(choice==2)
        {
            cout<<"Enter Amount to Deposit: ";
            int deposit;
            cin>>deposit;
            cout<<"Money Deposited Successfully\n";
            current_balance = current_balance + deposit;
        }
        else if(choice==3)
        {
            cout<<"Enter Amount To Withdraw: ";
            int withdraw;
            cin>>withdraw;
            current_balance = current_balance - withdraw;
        }
        else if(choice==4)
        {
            cout<<"Thank you for using ATM";
            break;
        }
    }
}
