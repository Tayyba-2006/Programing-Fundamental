#include<iostream>
using namespace std;
int main() 
{
    int choice;
    string books[10];
    int count = 0;   

    while(true) 
    {
        cout << "\n--- Library System ---\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Borrow Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            if(count < 10) 
            { 
                cout << "Enter book name: ";
                cin >> books[count]; 
                cout << "You added the book: " << books[count] << "\n";
                count++; 
            } 
            else
            {
                cout << "Library is full!\n";
            }
        }
        else if(choice == 2) 
        {
            if(count == 0) 
            {
                cout << "No books available.\n";
            } 
            else 
            {
                cout << "Available books:\n";
                for(int i = 0; i < count; i++) 
            {
                cout << i+1 << ". " << books[i] << "\n";
            }
            }
        }
        else if(choice == 3) 
        {
            if(count == 0)
            {
                cout << "No books to borrow.\n";
            }
            else
            {
                cout << "Borrowed book:\n";
                for(int i = 0; i < count; i++) 
                {
                    cout << i+1 << ". " << books[i] << "\n";
                }
            }
        }
        else if(choice == 4) 
        {
            string b;
            cout << "Enter book name to issue: ";
            cin >> b;
            cout << "Book issued successfully: " << b << "\n";
        }
        else if(choice == 5)
        {
            cout << "Exiting Library System. Goodbye!\n";
            break;
        }
        else 
        {
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}