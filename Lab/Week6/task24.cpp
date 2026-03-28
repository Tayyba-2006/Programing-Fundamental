#include<iostream>
using namespace std;
int main()
{
int n;
int count = 0;
    cout<<"Enter the number of elements: ";
    cin >> n;
    cout<<"Enter "<<n<<" elements of the array: \n";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n ; i++)
    {
        if( arr[i] %2 == 0)
        {
            count++;
        } 
    }
    cout<<"Total Even Numbers: "<<count;
    return 0;
}
    
  