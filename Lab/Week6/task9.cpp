#include<iostream>
using namespace std;
main()
{
string word ;
cout<<"Enter a word: ";
cin>>word;
cout<<"Reversed String: ";
for(int i = word.length(); i>=0; i--)
    {
      cout<<word[i];
    }
}