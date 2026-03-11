#include<iostream>
using namespace std;
int main()
{
    int cost;
    cout<<"Enter the cost of the dress: ";
    cin>>cost;
    if(cost>2000){
        cout<<"Buy the dress";
    }
    if(cost<2000){
        cout<<"Do not buy the dress";
    }
}