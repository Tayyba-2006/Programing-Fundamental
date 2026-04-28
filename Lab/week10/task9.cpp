#include<iostream>
using namespace std;
string CheckAlphabet (char a);
int main()
{
    char a;
    cout<<"Enter a character (A/a): ";
    cin>> a;
    cout<< CheckAlphabet(a);
    return 0;
}
string CheckAlphabet(char a)
{
    if(a == 'A')
    {
      return "You have entered Capital A ";
    }
    else if(a == 'a')
    {
        return "You have entered small a ";
    }
}