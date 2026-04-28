#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float num1, num2;
    cout << "Enter Number 01: ";
    cin >> num1;
    cout << "Enter Number 02: ";
    cin >> num2;
    cout << "The minimum of " << num1 << " and " << num2 << " is: " << min(num1, num2);
    return 0;
}