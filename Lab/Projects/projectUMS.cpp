#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int TOTAL_STUDENTS = 1000; // total size
    int index = 7;

    // data structures
    string nameArray[TOTAL_STUDENTS] = {"ali", "ammar", "sara", "ahmed", "zain", "nida", "tariq"};
    int ageArray[TOTAL_STUDENTS] = {19, 20, 21, 22, 20, 23, 19};
    float matricArray[TOTAL_STUDENTS] = {1050, 950, 940, 960, 910, 879, 1000};
    float interArray[TOTAL_STUDENTS] = {980, 880, 900, 950, 940, 960, 910};
    float ecatArray[TOTAL_STUDENTS] = {300, 350, 280, 350, 298, 310, 270};
    string pref1Array[TOTAL_STUDENTS] = {"CE", "CS", "CE", "CS", "EE", "EE", "CE"};
    string pref2Array[TOTAL_STUDENTS] = {"CS", "CE", "CS", "EE", "CS", "CE", "EE"};
    string pref3Array[TOTAL_STUDENTS] = {"EE", "EE", "EE", "CE", "CE", "CS", "CS"};
    float aggriArray[TOTAL_STUDENTS];

    // CRUD Create, Read, Update, Delete
    while (true)
    {
        // main header of ums
        system("cls");
        cout << "------------------------------------------------------\n";
        cout << "------- University Admission Management System -------\n";
        cout << "------------------------------------------------------\n";

        cout << "User menu \n";
        cout << "1 Admin \n";
        cout << "2 Student \n";
        cout << "3 to Exit \n";
        cout << "Choose option : ";
        string userOption;
        cin >> userOption;

        cout << "You choose " << userOption << endl;
        if (userOption == "1")
        {
            // write here the admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu: Login attempt " << i + 1 << endl;
                cout << "Enter username: ";
                string username;
                cin >> username;
                cout << "Enter password: ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Successfully logged in \n";

                    while (true)
                    {
                        system("cls");
                        cout << "1 Show all students\n";
                        cout << "2 Search Student \n";
                        cout << "3 Update student record\n";
                        cout << "4 Generate Merit List\n";
                        cout << "5 Delete Record by Name \n";
                        cout << "6 Logout \n";
                        cout << "Choose the option : ";
                        string adminoption;
                        cin >> adminoption;
                        if (adminoption == "1")
                        {
                            cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3 \n";
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << "\n";
                                }
                            }
                        }
                        else if (adminoption == "2")
                        {
                            // find student by name
                            cout << "Enter the name you want to search : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name " << name << "\n";
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3 \n";
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << "\n";
                            }
                        }
                        else if (adminoption == "3")
                        {
                            // update record
                            cout << "Enter the name you want to update record of : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {

                                cout << "---------- Old Record ---------- \n";
                                cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3 \n";
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << "\n";

                                cout << "Enter new record for update \n";
                                cout << "Enter your name : ";
                                string name;
                                cin >> name;
                                cout << "Enter age : ";
                                int age;
                                cin >> age;
                                cout << "Enter Matric Marks : ";
                                float matric;
                                cin >> matric;
                                cout << "Enter FSC Marks : ";
                                float fsc;
                                cin >> fsc;
                                cout << "Enter ECAT Marks : ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS, CE, EE as your preferences \n";
                                cout << "Enter your 1st preference : ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your 2nd preference : ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd preference : ";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found \n";
                            }
                        }
                        else if (adminoption == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArray[i] / 1050.0 * 100.0 * 0.30 + interArray[i] / 1100.0 * 100.0 * 0.4 + ecatArray[i] / 400.0 * 100.0 * 0.3;
                                aggriArray[i] = aggri;
                            }
                            // sorting the data on the basis of aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i+1; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {
                                        // swaping names

                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // swapping  matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // Swapping inter

                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // Swapping ecat

                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // Swapping preferences

                                        string tempPref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempPref1;

                                        string tempPref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempPref2;

                                        string tempPref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempPref3;

                                        // swaping aggregate
                                        float tempaggri = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempaggri;


                                    }
                                }
                            }

                            // code to display all data with aggrigate
                            cout << "Name\tAge\tAggregte \n";
                            for (int i = 0; i < index; i++)
                            {

                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggriArray[i] << "\n";
                                }
                            }
                            
                        }
                        else if (adminoption == "5")
                        {
                            // Delete Student Record
                            cout << "Enter the name you want to delete record of : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << "Record of " << name << " Deleted \n";
                            }
                            else
                            {
                                cout << "Record not found \n";
                            }
                        }

                        else if (adminoption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected \n";
                        }
                        cout << "Press any key to continue.. \n";
                        getch();
                    }
                    cout << "Press any key to continue.. \n";
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or password is invalid \n";
                }
                cout << "Press any key to continue.. \n";
                getch();
            }
        }
        else if (userOption == "2")
        {
            // write here the student code
            system("cls");
            cout << "Wlcome to UMS Student Menu \n";
            cout << "Enter your name : ";
            string name;
            cin >> name;
            cout << "Enter age : ";
            int age;
            cin >> age;
            cout << "Enter Matric Marks : ";
            float matric;
            cin >> matric;
            cout << "Enter FSC Marks : ";
            float fsc;
            cin >> fsc;
            cout << "Enter ECAT Marks : ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS, CE, EE as your preferences \n";
            cout << "Enter your 1st preference : ";
            string pref1;
            cin >> pref1;
            cout << "Enter your 2nd preference : ";
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd preference : ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;
            cout << "Your data has been saved \n";
            cout << "Press any key to continue.. \n";

            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option \n";
        }
    } // end of our main while loop

    cout << "Thanks for using this software";
}