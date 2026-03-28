#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of chords: ";
    cin>>n;
    cout<<"Enter "<<n<<" chords, one per line: \n";
    string chords[n];
    for(int i = 0; i<n ;i++)
    {
        cin>>chords[i];
    }
    for(int i = 0; i < n; i++) 
    {
        if(chords[i].back() != '7')
        {
            chords[i] += '7';
        }
    }
    cout << "Jazzified chords: [";
    for(int i = 0; i < n; i++) {
        cout << chords[i] << ", ";
    }
    cout <<"]";
    return 0;
}
