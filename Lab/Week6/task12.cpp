#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
     cout<<"Enter "<<n<<" numbers, one per line:\n";
    int arr[n], unique[n];
    int k = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        bool dup = false;
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << "Already Entered: " << arr[i] << endl;
                dup = true;
                break;
            }
        }

        if(dup == false)
        {
            unique[k] = arr[i];
            k++;
        }
    }

    cout << "Unique numbers: ";
    for(int i = 0; i < k; i++)
    {
        cout << unique[i] << " ";
    }
    return 0;
}