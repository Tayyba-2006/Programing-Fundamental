#include <iostream>
using namespace std;
string timetravel(int h, int m)
{
    m = m + 15;
    if (m >= 60)
    {
        m = m - 60;
        h = h + 1;
    }
    if (h >= 24)
    {
        h = 0;
    }
    return to_string(h) + ":" + to_string(m);
}
int main()
{
    int h, m;
    cout << "Enter Hours: ";
    cin >> h;
    cout << "Enter Minutes: ";
    cin >> m;
    cout << "Future Time: " << timetravel(h, m);
    return 0;
}
