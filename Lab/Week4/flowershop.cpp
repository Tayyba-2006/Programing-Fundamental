#include<iostream>
using namespace std;
int main(){
    float redrosenum, whiterosenum, tulipsnum, original_price, dis, priceafterdis;
    cout<<"Enter the number of red roses: ";
    cin>>redrosenum;
    cout<<"Enter the number of white roses: ";
    cin>>whiterosenum;
    cout<<"Enter the number of tulips: ";
    cin>>tulipsnum;
    original_price= (redrosenum*2.00)+(whiterosenum*4.10)+(tulipsnum*2.50);
    if(original_price>200)
    {dis=original_price*20/100;
     priceafterdis=original_price-dis; 
     cout<<"Original price: $"<<original_price;
     cout<<"Price after discount: $"<<priceafterdis;
    }
    return 0;
}