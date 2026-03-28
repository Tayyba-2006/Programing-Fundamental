#include<iostream>
using namespace std;
int main()
{
string word[5];
cout<<"Enter names of 5 students: \n";
for(int i = 0; i<5; i++)
{
    cin>>word[i];
}
cout<<"Student Names are: \n";
for(int i = 0; i<5; i++)
{
    cout<<word[i]<<"\n";
}
return 0;
}