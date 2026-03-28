#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number of products: "  ;
cin>>n;  
string word[n];
float price[n];
float quantity[n];
float pro[n];
for(int i = 0; i<n; i++)
{
    cout<<"Enter name of product "<<i+1<<": ";
    cin>>word[i];
    cout<<"Enter price of "<<word[i]<<": $";
    cin>>price[i];
    cout<<"Enter quantity of "<<word[i]<<": ";
    cin>>quantity[i];
    pro[i] = price[i] * quantity[i];
    cout<<"\n";
}
cout<<endl;
cout<<"Product Inventory Report\n";
cout<<"------------------------\n";
for(int i = 0; i<n; i++)
{
    cout<<word[i]<<": $"<<price[i]<<", "<<quantity[i]<<" in stock, Total value: $"<<pro[i]<<"\n";
}
return 0;
}