#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    for(int i=0; i<word.length();i++)
    {
        if(word[i]=='z')
        {
            word[i]='a';
        }
        else if(word[i]=='Z')
        {
            word[i]='A';
        }
        else
        {
            word[i]=word[i]+1;
        }
    }
    cout<<"Shifted string: "<<word;
}