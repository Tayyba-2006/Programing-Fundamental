#include <iostream>
using namespace std;
main()
{
    string username[3];
    string password[3];
    int choice;
    string studentName[3];
    int studentAge[3];
    string courseName[3];
    int studentCount = 0;
    int courseCount = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Username: ";
        cin >> username[i];

        cout << "Enter Password: ";
        cin >> password[i];

        if (username[i] == "admin" && password[i] == "1234")
        {
            cout << "Login Successful" << endl;
            break;
        }
        else
        {
            cout << "Wrong Login" << endl;
        }
        if (i == 2 && !(username[i] == "admin" && password[i] == "1234"))
        {
            cout << "Too many attempts. Program End." << endl;
            return 0;
        }
    }

    while (true)
    {
        cout << endl
        << "---- University Management System ----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Student" << endl;
        cout << "3. Add Course" << endl;
        cout << "4. Add Course" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (studentCount < 3)
            {
                cout << "Enter Student Name: ";
                cin >> studentName[studentCount];
                cout << "Enter Student Age: ";
                cin >> studentAge[studentCount];
                studentCount++;
                cout << "Student Added Successfully" << endl;
            }
            else
            {
                cout << "Limit Full\n";
            }
        }
        else if (choice == 2)
        {
            if (studentCount == 0)
            {
                cout << "No Student Record Found" << endl;
            }
            else
            {
                for (int i = 0; i < studentCount; i++)
                {
                    cout << "Student " << i + 1 << ": " << studentName[i] << " Age: " << studentAge[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            if (courseCount < 3)
            {
                cout << "Enter Course Name: ";
                cin >> courseName[courseCount];
                cout << "Course Added: " << courseName[courseCount] << endl;
                courseCount++;
            }
            else
            {
                cout << "Limit Full\n";
            }
        }
        else if (choice == 4)
        {
            if (courseCount == 0)
            {
                cout << "No Course added\n";
            }
            else
            {
                for (int i = 0; i < courseCount; i++)
                {
                    cout <<"course "<<i+1<<": "<<courseName[i] << endl;
                }
            }
        }
        else if (choice == 5)
        {
            cout << "Program Exit" << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
}
