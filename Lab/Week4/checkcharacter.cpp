#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter any character in lower case: ";
    cin >> c;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
    {cout<<"It is a vowel.\n";}
    else if(c >= '0' && c <= '9' )
    {cout<<"It is a number.\n";}
    else if((c >= 'a' &&  c <= 'z')) 
    {cout<<"It is a consonant."<<endl;}
    else
    {cout<<"This is a special character or symbol!";}
    return 0;
}