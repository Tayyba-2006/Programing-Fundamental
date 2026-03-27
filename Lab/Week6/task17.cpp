#include<iostream>
using namespace std;
int main()
{
    string word = "something ";
    cout<<"Enter the argument 'a': ";
    string a;
    getline(cin,a);
    cout<<"Result: "<<word<<a;
    return 0;
}