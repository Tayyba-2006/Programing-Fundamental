#include<iostream>
using namespace std;
int main(){
    string country;
    float price, dis, priceafterdis;
    cout<<"Enter the name of country: ";
    cin>>country;
    cout<<"Enter the price of the ticket in dollars: $";
    cin>>price;
    if(country=="Ireland"){dis=price*10/100;}
    else {dis=price*5/100;}
    priceafterdis=price-dis;
    cout<<"Discount Price: $"<<priceafterdis;
    return 0;
}