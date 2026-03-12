#include<iostream>
using namespace std;
main()
{
    float bill, discount, amount;
    cout<<"Enter bill: ";
    cin>>bill;
    if(bill<=5000){
    discount = bill*5/100;
  }
   else{
    discount = bill*10/100;
  }
   amount=bill - discount;
   cout<<"final amount: "<<amount;
}