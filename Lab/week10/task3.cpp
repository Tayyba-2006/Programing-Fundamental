#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter Number 01: ";
    cin>> num1;
    cout<<"Enter Number 02: ";
    cin>> num2;
    cout<<"Greater Number: "<< max(num1 , num2);
    return 0;
}