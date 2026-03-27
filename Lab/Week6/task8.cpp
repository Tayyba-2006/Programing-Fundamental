#include<iostream>
using namespace std;
main()
{
    string word ;
    cout<<"Enter a word: ";
    cin>>word;
    for(int idx=0; word[idx] != '\0'; idx++)
    {
       cout<<word[idx]<<" found at position "<<idx<<"\n";
    }
}