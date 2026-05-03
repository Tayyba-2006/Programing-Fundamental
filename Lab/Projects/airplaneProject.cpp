#include <iostream>
#include <conio.h>
using namespace std;

// ===== PROTOTYPES =====

bool adminLogin();

void adminMenu(int flightID[], string departure[], string arrival[], string time[], int seats[], int &flightCount, string history[], int &historyCount);

void addFlight(int flightID[], string departure[], string arrival[], string time[], int seats[], int &flightCount, string history[], int &historyCount);

void viewFlights(int flightID[], string departure[], string arrival[], string time[], int seats[], int flightCount);

void updateFlight(int flightID[], string departure[], string arrival[], string time[], int seats[], int flightCount, string history[], int &historyCount);

void deleteFlight(int flightID[], string departure[], string arrival[], string time[], int seats[], int &flightCount, string history[], int &historyCount);

void sortFlights(int flightID[], string departure[], string arrival[], string time[], int seats[], int flightCount);

void showHistory(string history[], int historyCount);

void customerMenu(int flightID[], string departure[], string arrival[], string time[], int seats[], int &flightCount);

void searchFlight(int flightID[], string departure[], string arrival[], string time[], int seats[], int flightCount);

void bookSeat(int flightID[], int seats[], int flightCount);

void cancelBooking(int flightID[], int seats[], int flightCount);

// ===== MAIN =====

int main()
{
    int flightID[100], seats[100];
    string departure[100], arrival[100], time[100];
    string history[100];

    int flightCount = 0;
    int historyCount = 0;

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
        cin >> userOption;

        cout << "You choose " << userOption << "\n";

        if (userOption == "1")
        {
            if (adminLogin())
            {
                adminMenu(flightID, departure, arrival, time, seats, flightCount, history, historyCount);
            }
        }
        else if (userOption == "2")
        {
            customerMenu(flightID, departure, arrival, time, seats, flightCount);
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered the wrong option \n";
            getch();
        }
    }

    cout << "Thnaks for using this software";
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
        cin >> username;

        cout << "Enter password: ";
        string password;
        cin >> password;

        if (username == "admin" && password == "123")
        {
            cout << "Successfully logged in \n";
            getch();
            return true;
        }
        else
        {
            cout << "Username or password is invalid \n";
            getch();
        }
    }
    return false;
}

// ADMIN MENU
void adminMenu(int flightID[], string departure[], string arrival[], string time[], int seats[], int &flightCount, string history[], int &historyCount)
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
        cin >> adminOption;

        if (adminOption == "1")
            addFlight(flightID, departure, arrival, time, seats, flightCount, history, historyCount);

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
void addFlight(int flightID[], string departure[], string arrival[], string time[], int seats[], int &flightCount, string history[], int &historyCount)
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

// VIEW
void viewFlights(int flightID[], string departure[], string arrival[], string time[], int seats[], int flightCount)
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

// UPDATE
void updateFlight(int flightID[], string departure[], string arrival[], string time[], int seats[], int flightCount, string history[], int &historyCount)
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
        cin >> flightID[fCount];

        cout << "Enter new Departure: ";
        cin >> departure[fCount];

        cout << "Enter new Arrival: ";
        cin >> arrival[fCount];

        cout << "Enter new Time: ";
        cin >> time[fCount];

        cout << "Enter new Seats: ";
        cin >> seats[fCount];

        history[historyCount] = "Flight Updated";
        historyCount++;

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
void deleteFlight(int flightID[], string departure[], string arrival[], string time[], int seats[], int &flightCount, string history[], int &historyCount)
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

// SORT
void sortFlights(int flightID[], string departure[], string arrival[], string time[], int seats[], int flightCount)
{
    for (int i = 0; i < flightCount - 1; i++)
    {
        for (int j = 0; j < flightCount - i - 1; j++)
        {
            if (flightID[j] > flightID[j + 1])
            {
                int tempID = flightID[j];
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
void customerMenu(int flightID[], string departure[], string arrival[], string time[], int seats[], int &flightCount)
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

        string customerOption;
        cin >> customerOption;

        if (customerOption == "1")
            viewFlights(flightID, departure, arrival, time, seats, flightCount);

        else if (customerOption == "2")
            searchFlight(flightID, departure, arrival, time, seats, flightCount);

        else if (customerOption == "3")
            bookSeat(flightID, seats, flightCount);

        else if (customerOption == "4")
            cancelBooking(flightID, seats, flightCount);

        else if (customerOption == "5")
            break;

        else
            cout << "Wrong option selected \n";
    }
}

// SEARCH
void searchFlight(int flightID[], string departure[], string arrival[], string time[], int seats[], int flightCount)
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

    if (!found)
        cout << "No matching flight found! \n";

    cout << "Press any key to continue.. \n";
    getch();
}

// BOOK
void bookSeat(int flightID[], int seats[], int flightCount)
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

    if (!found)
        cout << "Flight not found! \n";

    cout << "Press any key to continue.. \n";
    getch();
}

// CANCEL
void cancelBooking(int flightID[], int seats[], int flightCount)
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

    if (!found)
        cout << "Flight not found! \n";

    cout << "Press any key to continue.. \n";
    getch();
}
