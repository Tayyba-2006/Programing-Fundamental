#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number of customers: "  ;
cin>>n;  
string word[n];
cout<<"Enter the names of "<<n<<" customers: \n";
for(int i = 0; i<n; i++)
{
    cin>>word[i];
}
char letter;
cout<<"Enter the character you want to find: ";
cin>>letter;
int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(word[i][0] == letter)  
        {
            count++;
        }
    }
    cout<<"total names starting with "<<letter<<" = "<<count;
    return 0;   
}