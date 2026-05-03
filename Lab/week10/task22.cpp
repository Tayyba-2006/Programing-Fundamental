#include<iostream>
using namespace std;
int factorial(int n)
{
    int f = 1;
    for(int i = 1; i <= n ; i++)
    {
        f = f * i;
    }
    return f;
}
bool isStrong(int num)
{
    int original = num;
    int sum = 0; 
    while(num > 0)
    {
        int digit = num % 10;
        sum = sum + factorial(digit);
        num = num / 10;
    }
    if (sum == original)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num;
    cout<<"Enter number: ";
    cin >> num;
    if(isStrong(num))
    {
        cout<<"Strong Number";
    }
    else 
    {
        cout<<"Not Strong";
    }
    return 0;
}