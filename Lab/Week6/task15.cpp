#include<iostream>
using namespace std;
int main()
{
    int n, x;
    cout<<"Enter the number of elements for the first array (must be 2): ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements for the first array, one per line: \n";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number of elements for the second array: ";
    cin>>x;
    cout<<"Enter "<<x<<" elements for the second array, one per line: \n";
    int arr2[x];
    for(int j = 0; j<x; j++)
    {
        cin>>arr2[j];
    }
    cout<<"Resulting array: ["<<arr[0]<<", ";
    for(int k = 0; k<x; k++)
    {
        cout<<arr2[k]<<", ";
    }
    cout<<arr[1]<<"]\n";
    return 0;
}