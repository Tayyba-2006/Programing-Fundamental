#include<iostream>
using namespace std;
int main()
{
    int n;
    float sum=0;
    cout<<"Enter the number of resistors in the series circuit: ";
    cin >> n;
    cout<<"Enter the resistence values (in ohms) of the "<<n<<" resistors, one per line:\n";
    float arr[n];
     for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"The total resistence of the series circuit is "<<sum<<" ohms.\n";
    return 0;
}