#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

// ===== PROTOTYPES =====

bool adminLogin();

void adminMenu(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int &flightCount, string history[], int &historyCount);

void addFlight(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int &flightCount, string history[], int &historyCount);

void viewFlights(string flightID[], string departure[], string arrival[], string time[], string seats[], int flightCount);

void updateFlight(string flightID[], string departure[], string arrival[], string time[], string seats[], int flightCount, string history[], int &historyCount);

void deleteFlight(string flightID[], string departure[], string arrival[], string time[], string seats[], int &flightCount, string history[], int &historyCount);

void sortFlights(string flightID[], string departure[], string arrival[], string time[], string seats[], int flightCount);

void showHistory(string history[], int historyCount);

void customerMenu(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int &flightCount);

void searchFlight(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int flightCount);

void bookSeat(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int flightCount);

void cancelBooking(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int flightCount);

// FILE HANDLING

void saveData(string flightID[], string departure[], string arrival[], string time[], string seats[], int flightCount);

void loadData(string flightID[], string departure[], string arrival[], string time[], string seats[], int &flightCount);

void saveHistory(string history[], int historyCount);

void loadHistory(string history[], int &historyCount);

// ===== MAIN =====

int main()
{
    // DATA STRUCTURES
    string flightID[100];
    string departure[100], arrival[100], time[100];
    string history[100];
    string seats[100];
    string availableSeats[100];
    int flightCount = 0;
    int historyCount = 0;

    loadData(flightID, departure, arrival, time, seats, flightCount);
    loadHistory(history, historyCount);

    for (int i = 0; i < flightCount; i++)
    {
        if (availableSeats[i] == "")
        {
            availableSeats[i] = seats[i];
        }
    }

    while (true)
    {

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
        getline(cin, userOption);

        cout << "You choose " << userOption << "\n";

        if (userOption == "1")
        {
            if (adminLogin())
            {
                adminMenu(flightID, departure, arrival, time, seats, availableSeats, flightCount, history, historyCount);
            }
        }
        else if (userOption == "2")
        {
            customerMenu(flightID, departure, arrival, time, seats, availableSeats, flightCount);
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered the wrong option \n";
            cout << "Press any key to continue.. \n";
            getch();
        }
    }

    cout << "Thanks for using this software";
    return 0;
}

// ===== FUNCTIONS =====

// LOGIN
bool adminLogin()
{
    for (int i = 0; i < 3; i++)
    {
        system("cls");
        cout << "Admin Menu: Login attempt " << i + 1 << "\n";

        cout << "Enter username: ";
        string username;
        getline(cin, username);

        cout << "Enter password: ";
        string password;
        getline(cin, password);

        if (username == "Admin" && password == "456")
        {
            cout << "Successfully logged in \n";
            cout << "Press any key to continue.. \n";
            getch();
            return true;
        }
        else
        {
            cout << "Username or password is invalid \n";
            cout << "Press any key to continue.. \n";
            getch();
        }
    }
    return false;
}

// ADMIN MENU
void adminMenu(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int &flightCount, string history[], int &historyCount)
{
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
        getline(cin, adminOption);

        if (adminOption == "1")
            addFlight(flightID, departure, arrival, time, seats, availableSeats, flightCount, history, historyCount);

        else if (adminOption == "2")
            viewFlights(flightID, departure, arrival, time, seats, flightCount);

        else if (adminOption == "3")
            updateFlight(flightID, departure, arrival, time, seats, flightCount, history, historyCount);

        else if (adminOption == "4")
            deleteFlight(flightID, departure, arrival, time, seats, flightCount, history, historyCount);

        else if (adminOption == "5")
            sortFlights(flightID, departure, arrival, time, seats, flightCount);

        else if (adminOption == "6")
            showHistory(history, historyCount);

        else if (adminOption == "7")
            break;

        else
        {
            cout << "Wrong option selected \n";
            cout << "Press any key to continue.. \n";
            getch();
        }
    }
}

// ADD
void addFlight(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int &flightCount, string history[], int &historyCount)
{
    if (flightCount <= 100)
    {
        cout << "Enter Flight ID: ";
        getline(cin, flightID[flightCount]);

        cout << "Enter Departure: ";
        getline(cin, departure[flightCount]);

        cout << "Enter Arrival: ";
        getline(cin, arrival[flightCount]);

        cout << "Enter Time: ";
        getline(cin, time[flightCount]);

        cout << "Enter Seats: ";
        getline(cin, seats[flightCount]);

        history[historyCount] = "Flight " + flightID[flightCount] + " Added";
        historyCount++;
        flightCount++;
        availableSeats[flightCount-1] = seats[flightCount-1];

        saveData(flightID, departure, arrival, time, seats, flightCount);
        saveHistory(history, historyCount);

        cout << "Flight Added Successfully!  \n";
        cout << "Press any key to continue.. \n";
        getch();
    }
    else
    {
        cout << "Flight cannot be added! \n";
        cout << "Press any key to continue.. \n";
        getch();
    }
}

// VIEW
void viewFlights(string flightID[], string departure[], string arrival[], string time[], string seats[], int flightCount)
{
    if (flightCount == 0)
    {
        cout << "No flights available!\n";
    }
    else
    {
        cout << "\n";
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

// UPDATE
void updateFlight(string flightID[], string departure[], string arrival[], string time[], string seats[], int flightCount, string history[], int &historyCount)
{
    string id;
    cout << "Enter Flight ID to update the record: ";

    getline(cin, id);

    bool found = false;
    int fCount = -1;

    for (int i = 0; i < flightCount; i++)
    {
        if (flightID[i] == id)
        {
            fCount = i;
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "---------- Old Record ---------- \n";
        cout << "Flight ID: " << flightID[fCount] << "\n";
        cout << "Departure: " << departure[fCount] << "\n";
        cout << "Arrival: " << arrival[fCount] << "\n";
        cout << "Time: " << time[fCount] << "\n";
        cout << "Seats: " << seats[fCount] << "\n\n";

        cout << "---------- New Record ---------- \n";

        cout << "Enter Flight ID: ";
        getline(cin, flightID[fCount]);

        cout << "Enter new Departure: ";
        getline(cin, departure[fCount]);

        cout << "Enter new Arrival: ";
        getline(cin, arrival[fCount]);

        cout << "Enter new Time: ";
        getline(cin, time[fCount]);

        cout << "Enter new Seats: ";
        getline(cin, seats[fCount]);

        history[historyCount] = "Flight " + flightID[fCount] + " Updated";
        historyCount++;

        saveData(flightID, departure, arrival, time, seats, flightCount);
        saveHistory(history, historyCount);

        cout << "Updated Successfully! \n";
    }
    else
    {
        cout << "Record not found \n";
    }

    cout << "Press any key to continue.. \n";
    getch();
}

// DELETE
void deleteFlight(string flightID[], string departure[], string arrival[], string time[], string seats[], int &flightCount, string history[], int &historyCount)
{
    string ID;
    cout << "Enter Flight ID to delete: ";

    getline(cin, ID);
    bool found = false;
    for (int i = 0; i < flightCount; i++)
    {
        if (flightID[i] == ID)
        {
            cout << "\n";
            cout << "Record that you want to delete: \n\n";
            cout << "Flight ID: " << flightID[i] << "\n";
            cout << "Departure: " << departure[i] << "\n";
            cout << "Arrival: " << arrival[i] << "\n";
            cout << "Time: " << time[i] << "\n";
            cout << "Seats: " << seats[i] << "\n";
            for (int j = i; j < flightCount - 1; j++)
            {
                flightID[j] = flightID[j + 1];
                departure[j] = departure[j + 1];
                arrival[j] = arrival[j + 1];
                time[j] = time[j + 1];
                seats[j] = seats[j + 1];
            }

            flightCount--;
            history[historyCount] = "Flight " + ID + " Deleted";
            historyCount++;

            saveData(flightID, departure, arrival, time, seats, flightCount);
            saveHistory(history, historyCount);

            cout << "Deleted Successfully! \n";
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "Flight " << ID << " not found. \n";
    }
    cout << "Press any key to continue.. \n";
    getch();
}

// SORT
void sortFlights(string flightID[], string departure[], string arrival[], string time[], string seats[], int flightCount)
{
    for (int i = 0; i < flightCount - 1; i++)
    {
        for (int j = 0; j < flightCount - i - 1; j++)
        {
            if (flightID[j] > flightID[j + 1])
            {
                string tempID = flightID[j];
                flightID[j] = flightID[j + 1];
                flightID[j + 1] = tempID;

                string tempDep = departure[j];
                departure[j] = departure[j + 1];
                departure[j + 1] = tempDep;

                string tempArrival = arrival[j];
                arrival[j] = arrival[j + 1];
                arrival[j + 1] = tempArrival;

                string temptime = time[j];
                time[j] = time[j + 1];
                time[j + 1] = temptime;

                string tempseat = seats[j];
                seats[j] = seats[j + 1];
                seats[j + 1] = tempseat;
            }
        }
    }
    cout << "\n";

    for (int i = 0; i < flightCount; i++)
    {
        cout << "Flight ID: " << flightID[i] << "\n";
        cout << "Departure: " << departure[i] << "\n";
        cout << "Arrival: " << arrival[i] << "\n";
        cout << "Time: " << time[i] << "\n";
        cout << "Seats: " << seats[i] << "\n\n";
        cout << "-------------------------------\n\n";
    }

    saveData(flightID, departure, arrival, time, seats, flightCount);
    cout << "Flights sorted by ID successfully! \n";
    cout << "Press any key to continue.. \n";
    getch();
}

// HISTORY
void showHistory(string history[], int historyCount)
{
    for (int i = 0; i < historyCount; i++)
    {
        cout << i + 1 << ". " << history[i] << "\n";
    }
    cout << "Press any key to continue.. \n";
    getch();
}

// CUSTOMER MENU
void customerMenu(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int &flightCount)
{
    while (true)
    {
        system("cls");
        cout << "========== CUSTOMER MENU ==========\n";
        cout << "1 View Flights                     \n";
        cout << "2 Search Flight                    \n";
        cout << "3 Book Seat                        \n";
        cout << "4 Cancel Booking                   \n";
        cout << "5 Exit                             \n";
        cout << "Choose any option: ";

        string customerOption;
        getline(cin, customerOption);

        if (customerOption == "1")
            viewFlights(flightID, departure, arrival, time, seats, flightCount);

        else if (customerOption == "2")
            searchFlight(flightID, departure, arrival, time, seats, availableSeats, flightCount);

        else if (customerOption == "3")
            bookSeat(flightID, departure, arrival, time, seats, availableSeats, flightCount);

        else if (customerOption == "4")
            cancelBooking(flightID, departure, arrival, time, seats, availableSeats, flightCount);

        else if (customerOption == "5")
            break;

        else
            cout << "Wrong option selected \n";
    }
}

// SEARCH
void searchFlight(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int flightCount)
{
    string from, to;
    cout << "Enter Departure: ";

    getline(cin, from);
    cout << "Enter Arrival: ";
    getline(cin, to);

    bool found = false;

    for (int i = 0; i < flightCount; i++)
    {
        if (departure[i] == from && arrival[i] == to)
        {
            if (availableSeats[i] == "")
            {
                availableSeats[i] = seats[i];
            }
            cout << "Flight ID: " << flightID[i] << "\n";
            cout << "Departure: " << departure[i] << "\n";
            cout << "Arrival: " << arrival[i] << "\n";
            cout << "Time: " << time[i] << "\n";
            cout << "Total seats: " << seats[i] << "\n";
            if (availableSeats[i] == "0")
            {
                cout << "This flight is fully booked.\n";
            }
            else
            {
                cout << "Available Seats: " << availableSeats[i] << "\n";
            }
            cout <<"-----------------------------------------\n\n";

            found = true;
        }
    }

    if (!found)
        cout << "No matching flight found! \n";

    cout << "Press any key to continue.. \n";
    getch();
}

// BOOK SEAT
void bookSeat(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int flightCount)
{
    string IdToBook;
    cout << "Enter Flight ID to book: ";

    getline(cin, IdToBook);

    bool found = false;

    for (int i = 0; i < flightCount; i++)
    {
        if (flightID[i] == IdToBook)
        {
            found = true;
            cout << "From " << departure[i] << " to " << arrival[i] << " at " << time[i] << "\n";
            if (availableSeats[i] == "")
            {
                availableSeats[i] = seats[i];
            }
            int seatsRightNow = stoi(availableSeats[i]);
            if (seatsRightNow > 0)
            {
                cout << "Available Seats: " << seatsRightNow << "\n";
                seatsRightNow--;
                availableSeats[i] = to_string(seatsRightNow);
                cout << "Seat Booked Successfully! \n";
            }
            else
            {
                cout << "This flight is fully booked.\n";
            }
            break;
        }
    }

    if (!found)
        cout << "Flight not found! \n";

    cout << "Press any key to continue.. \n";
    getch();
}

// CANCEL BOOKING
void cancelBooking(string flightID[], string departure[], string arrival[], string time[], string seats[], string availableSeats[], int flightCount)
{
    string Flightid;
    cout << "Enter Flight ID to cancel: ";

    getline(cin, Flightid);

    bool found = false;

    for (int i = 0; i < flightCount; i++)
    {
        if (flightID[i] == Flightid)
        {
            found = true;
            if (availableSeats[i] == "")
            {
                availableSeats[i] = seats[i];
            }
            int total = stoi(seats[i]);
            int seatsRightNow = stoi(availableSeats[i]);
            if (seatsRightNow < total)
            {
                seatsRightNow++;
                availableSeats[i] = to_string(seatsRightNow);
            }
            cout << "Booking Cancelled! \n";
            break;
        }
    }

    if (!found)
        cout << "Flight not found! \n";

    cout << "Press any key to continue.. \n";
    getch();
}
// ====== FILE HANDLING ======
// LOAD DATA
void loadData(string flightID[], string departure[], string arrival[], string time[], string seats[], int &flightCount)
{
    fstream file;
    file.open("flights.txt", ios::in);
    while (getline(file, flightID[flightCount]))
    {

        getline(file, departure[flightCount]);
        getline(file, arrival[flightCount]);
        getline(file, time[flightCount]);
        getline(file, seats[flightCount]);
        flightCount++;
    }
    file.close();
}

// SAVE DATA
void saveData(string flightID[], string departure[], string arrival[], string time[], string seats[], int flightCount)
{
    fstream file;
    file.open("flights.txt", ios::out);

    for (int i = 0; i < flightCount; i++)
    {
        file << flightID[i] << "\n";
        file << departure[i] << "\n";
        file << arrival[i] << "\n";
        file << time[i] << "\n";
        file << seats[i] << "\n";
    }
    file.close();
}

// LOAD HISTORY
void loadHistory(string history[], int &historyCount)
{
    fstream file;
    file.open("history.txt", ios::in);
    while (getline(file, history[historyCount]))
    {
        historyCount++;
    }
    file.close();
}

// SAVE HISTORY
void saveHistory(string history[], int historyCount)
{
    fstream file;
    file.open("history.txt", ios::out);
    for (int i = 0; i < historyCount; i++)
    {
        file << history[i] << "\n";
    }
    file.close();
}