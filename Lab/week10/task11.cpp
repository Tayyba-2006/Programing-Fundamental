#include<iostream>
using namespace std;
string DeterminesAnumber(int digits)
{
    int digit1 = digits%10;
    int digit2 = (digits/10) % 10;
    int digit3 = (digits/100) % 10;
    int digit4 = (digits/1000) % 10;
    int digit5 = (digits/10000) % 10;
    int sum = digit1 + digit2+ digit3+ digit4+ digit5;
    if(sum%2 == 0)
    {
        return "Evenish";
    }
    else
    {
        return "Oddish";
    }
}
int main()
{
    int digits;
    cout<<"Enter a five-digit number: ";
    cin>> digits;
    cout<<DeterminesAnumber(digits);
    return 0;
}
