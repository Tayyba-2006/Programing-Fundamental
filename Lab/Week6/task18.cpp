#include<iostream>
using namespace std;
int main()
{
    string word;
    string result = "";
    cout<<"Enter a string: ";
    getline(cin,word);
    for(int idx=0; word[idx] != '\0'; idx++ )
    {
        if(!(word[idx]=='A' || word[idx]=='a' || word[idx]=='E' || word[idx]=='e' ||
        word[idx]=='I' || word[idx]=='i' || word[idx]=='O' || word[idx]=='o' ||
        word[idx]=='U' || word[idx]=='u'))
        {
            result += word[idx];
        }
    }
    cout<<"String with vowels removed: "<<result;
    return 0;
}