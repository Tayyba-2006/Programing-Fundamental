#include<iostream>
using namespace std;
int main()
{
    int choice;
    string book = ""; 
    string b;
    while(true)
    {
        cout<<"\n--- Library System ---\n";
        cout<<"1. Add Book\n";
        cout<<"2. View Book\n";
        cout<<"3. Borrow Book\n";
        cout<<"4. Issue Book\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter book name: ";
            cin>>book;
            cout<<"You added a book: "<<book<<"\n";
        }
        else if(choice==2)
        {
            if(book=="")
                cout<<"No book available.\n";
            else
                cout<<"Available book: "<<book<<"\n";
        }
        else if(choice==3)
        {
            cout<<"Enter book name you want to borrow: ";
            cin>>b;
            cout<<"You borrowed: "<<b<<"\n";
        }
        else if(choice==4)
        {
            cout<<"Enter book name to issue: ";
            cin>>b;
            cout<<"Book issued successfully: "<<b<<"\n"; 
        }
        else if(choice==5)
        {
            cout<<"Exiting Library System. Goodbye!\n";
            break;
        }
        else
        {
            cout<<"Invalid choice!\n";
        }
    }
    return 0;
}