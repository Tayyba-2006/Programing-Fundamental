#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number of students: "  ;
cin>>n;  
string word[n];
cout<<"Enter the names of "<<n<<" students: \n";
for(int i = 0; i<n; i++)
{
    cin>>word[i];
}
for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(word[i] > word[j])
            {
                string temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
    cout<<"\nStudents in alphabetical order:\n";
    for(int i = 0; i<n; i++)
    {
        cout<<word[i]<<endl;
    }
    return 0;
}
