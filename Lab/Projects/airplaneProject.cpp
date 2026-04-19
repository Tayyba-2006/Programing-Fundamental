#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // Data Structures
    int flightID[100], seats[100];
    string departure[100], arrival[100], time[100];
    string history[100];
    int flightCount = 0;
    int historyCount = 0;

    // CRUD Create, Read, Update, Delete
    while (true)
    {
        // main header of AMS
        system("cls");
        cout << "======================================================\n";
        cout << "------------- Airplane Management System -------------\n";
        cout << "======================================================\n\n";

        cout << "USER MENU  \n";
        cout << "1 Admin    \n";
        cout << "2 Customer \n";
        cout << "3 to Exit  \n";
        cout << "Choose option : ";
        string userOption;
        cin >> userOption;
        cout << "You choose " << userOption << "\n";
        if (userOption == "1")
        {
            // write here the admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu: Login attempt " << i + 1 << "\n";
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
                        cout << "========== ADMIN MENU ==========\n";
                        cout << "1 Add Flight                    \n";
                        cout << "2 View Flights                  \n";
                        cout << "3 Update Flight                 \n";
                        cout << "4 Delete Flight                 \n";
                        cout << "5 Sorting (by ID)               \n";
                        cout << "6 History                       \n";
                        cout << "7 Logout                        \n";
                        cout << "Choose the option : ";
                        string adminOption;
                        cin >> adminOption;
                        // add flight
                        if (adminOption == "1")
                        {
                            cout << "Enter Flight ID: ";
                            cin >> flightID[flightCount];
                            cout << "Enter Departure: ";
                            cin >> departure[flightCount];
                            cout << "Enter Arrival: ";
                            cin >> arrival[flightCount];
                            cout << "Enter Time: ";
                            cin >> time[flightCount];
                            cout << "Enter Seats: ";
                            cin >> seats[flightCount];
                            history[historyCount] = "Flight Added";
                            historyCount++;
                            flightCount++;

                            cout << "Flight Added Successfully!  \n";
                            cout << "Press any key to continue.. \n";
                            getch();
                        }
                        // view flights
                        else if (adminOption == "2")
                        {
                            if (flightCount == 0)
                            {
                                cout << "No flights available!\n";
                            }
                            else
                            {
                                for (int i = 0; i < flightCount; i++)
                                {
                                    cout << "Flight ID: " << flightID[i] << "\n";
                                    cout << "Departure: " << departure[i] << "\n";
                                    cout << "Arrival: " << arrival[i] << "\n";
                                    cout << "Time: " << time[i] << "\n";
                                    cout << "Seats: " << seats[i] << "\n\n";
                                    cout << "-------------------------------\n\n";
                                }
                            }
                            cout << "Press any key to continue.. \n";
                            getch();
                        }
                        // update
                        else if (adminOption == "3")
                        {
                            int id;
                            cout << "Enter Flight ID to update the record: ";
                            cin >> id;
                            bool found = false;
                            int fCount = -1;
                            for (int i = 0; i < flightCount; i++)
                            {
                                if (flightID[i] == id)
                                {
                                    fCount = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "---------- Old Record ---------- \n";
                                cout << "Flight ID: " << flightID[fCount] << "\n";
                                cout << "Departure: " << departure[fCount] << "\n";
                                cout << "Arrival: " << arrival[fCount] << "\n";
                                cout << "Time: " << time[fCount] << "\n";
                                cout << "Seats: " << seats[fCount] << "\n\n";

                                cout << "---------- New Record ---------- \n";
                                cout << "Enter Flight ID: ";
                                int Newid;
                                cin >> Newid;
                                cout << "Enter new Departure: ";
                                string Departure;
                                cin >> Departure;
                                cout << "Enter new Arrival: ";
                                string Arrival;
                                cin >> Arrival;
                                cout << "Enter new Time: ";
                                string Time;
                                cin >> Time;
                                cout << "Enter new Seats: ";
                                int seat;
                                cin >> seat;
                                history[historyCount] = "Flight Updated";
                                historyCount++;
                                cout << "Updated Successfully! \n";

                                flightID[fCount] = Newid;
                                departure[fCount] = Departure;
                                arrival[fCount] = Arrival;
                                time[fCount] = Time;
                                seats[fCount] = seat;
                            }
                            else
                            {
                                cout << "Record not found \n";
                            }
                            cout << "Press any key to continue.. \n";
                            getch();
                        }
                        // delete
                        else if (adminOption == "4")
                        {
                            int ID;
                            cout << "Enter Flight ID to delete: ";
                            cin >> ID;
                            for (int i = 0; i < flightCount; i++)
                            {
                                if (flightID[i] == ID)
                                {
                                    for (int j = i; j < flightCount - 1; j++)
                                    {
                                        flightID[j] = flightID[j + 1];
                                        departure[j] = departure[j + 1];
                                        arrival[j] = arrival[j + 1];
                                        time[j] = time[j + 1];
                                        seats[j] = seats[j + 1];
                                    }
                                    flightCount--;
                                    history[historyCount] = "Flight Deleted";
                                    historyCount++;

                                    cout << "Deleted Successfully! \n";
                                    break;
                                }
                            }
                            cout << "Press any key to continue.. \n";
                            getch();
                        }
                        // sorting by ID
                        else if (adminOption == "5")
                        {
                            for (int i = 0; i < flightCount - 1; i++)
                            {
                                for (int j = 0; j < flightCount - i - 1; j++)
                                {
                                    if (flightID[j] > flightID[j + 1])
                                    {
                                        // swap flightID
                                        int tempID = flightID[j];
                                        flightID[j] = flightID[j + 1];
                                        flightID[j + 1] = tempID;

                                        // swap departure
                                        string tempDep = departure[j];
                                        departure[j] = departure[j + 1];
                                        departure[j + 1] = tempDep;

                                        // swap arrival
                                        string tempArrival = arrival[j];
                                        arrival[j] = arrival[j + 1];
                                        arrival[j + 1] = tempArrival;

                                        // swap time
                                        string temptime = time[j];
                                        time[j] = time[j + 1];
                                        time[j + 1] = temptime;

                                        // swap seats
                                        int tempseat = seats[j];
                                        seats[j] = seats[j + 1];
                                        seats[j + 1] = tempseat;
                                    }
                                }
                            }
                            for (int i = 0; i < flightCount; i++)
                            {
                                cout << "Flight ID: " << flightID[i] << "\n";
                                cout << "Departure: " << departure[i] << "\n";
                                cout << "Arrival: " << arrival[i] << "\n";
                                cout << "Time: " << time[i] << "\n";
                                cout << "Seats: " << seats[i] << "\n\n";
                                cout << "-------------------------------\n\n";
                            }
                            cout << "Flights sorted by ID successfully! \n";
                            cout << "Press any key to continue.. \n";
                            getch();
                        }
                        // history
                        else if (adminOption == "6")
                        {
                            for (int i = 0; i < historyCount; i++)
                            {
                                cout << i + 1 << ". " << history[i] << "\n";
                            }
                            cout << "Press any key to continue.. \n";
                            getch();
                        }
                        // logout
                        else if (adminOption == "7")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected \n";
                            cout << "Press any key to continue.. \n";
                            getch();
                        }
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
            // write here the customer code
            while (true)
            {
                system("cls");
                cout << "========== CUSTOMER MENU ==========\n";
                cout << "1 View Flights                     \n";
                cout << "2 Search Flight                    \n";
                cout << "3 Book Seat                        \n";
                cout << "4 Cancel Booking                   \n";
                cout << "5 Exit                             \n";
                string customerOption;
                cin >> customerOption;

                // view flights
                if (customerOption == "1")
                {
                    if (flightCount == 0)
                    {
                        cout << "No flights available! \n";
                    }
                    else
                    {
                        for (int i = 0; i < flightCount; i++)
                        {
                            cout << "Flight ID: " << flightID[i] << "\n";
                            cout << "Departure: " << departure[i] << "\n";
                            cout << "Arrival: " << arrival[i] << "\n";
                            cout << "Time: " << time[i] << "\n";
                            cout << "Seats: " << seats[i] << "\n\n";
                            cout << "-------------------------------\n\n";
                        }
                    }
                }
                // search flight
                else if (customerOption == "2")
                {
                    string from, to;
                    cout << "Enter Departure: ";
                    cin >> from;
                    cout << "Enter Arrival: ";
                    cin >> to;
                    bool found = false;
                    for (int i = 0; i < flightCount; i++)
                    {
                        if (departure[i] == from && arrival[i] == to)
                        {
                            cout << "Flight ID: " << flightID[i] << "\n";
                            cout << "Departure: " << departure[i] << "\n";
                            cout << "Arrival: " << arrival[i] << "\n";
                            cout << "Time: " << time[i] << "\n";
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << "No matching flight found! \n";
                    }
                }
                // book seat
                else if (customerOption == "3")
                {
                    int IdToBook;
                    cout << "Enter Flight ID to book: ";
                    cin >> IdToBook;
                    bool found = false;
                    for (int i = 0; i < flightCount; i++)
                    {
                        if (flightID[i] == IdToBook)
                        {
                            if (seats[i] > 0)
                            {
                                seats[i]--;
                                cout << "Seat Booked Successfully! \n";
                            }
                            else
                            {
                                cout << "No seats available! \n";
                            }
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << "Flight not found! \n";
                    }
                }
                // cancel booking
                else if (customerOption == "4")
                {
                    int Flightid;
                    cout << "Enter Flight ID to cancel: ";
                    cin >> Flightid;
                    bool found = false;
                    for (int i = 0; i < flightCount; i++)
                    {
                        if (flightID[i] == Flightid)
                        {
                            seats[i]++;
                            cout << "Booking Cancelled! \n";
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << "Flight not found! \n";
                    }
                }
                // exit
                else if (customerOption == "5")
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
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered the wrong option \n";
        }

    } // end of our main while loop
    cout << "Thnaks for using this software";
    return 0;
}
