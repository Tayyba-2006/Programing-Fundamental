#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    cout<<"Enter "<<n<<" elements of the array: \n";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bool isSpecial = true;
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0 && arr[i] % 2 !=0)
        {
            isSpecial = false;
            break;
        }
        if(i % 2 != 0 && arr[i] %2 == 0)
        {
            isSpecial = false;
            break;
        }
    }
    if(isSpecial)
    {
    cout<<"The array is special";
    }
    else
    {
        cout<<"The array is not special";
    }
    return 0;
}