#include <iostream>
using namespace std;
bool IsSymmetrical(int number)
{
    bool argument;
    int lastD = number % 10;
    int firstD = number / 100;
    if (firstD == lastD)
    {
        return argument = true;
    }
    else
    {
        return argument = false;
    }
}
int main()
{
    int number;
    cout << "Enter a three didgit number: ";
    cin >> number;
    bool result = IsSymmetrical(number);
    if(result == true)
    {
    cout << "The number (" << number << ") is Symmetrical. " ;
    }
    else
    {
        cout << "The number (" << number << ") is not Symmetrical. " ;
    }
    return 0;
}