#include<iostream>
using namespace std;
main()
{
float weight, price, area, priceperpound, costpersqfoot;
cout<<" Enter the size of the fertilizer bag in pounds: ";
cin>>weight;
cout<<" Enter the cost of the bag: $";
cin>>price;
cout<<" Enter the area in square feet that can be covered by the bag: ";
cin>>area;
priceperpound = price/weight;
costpersqfoot = price/area;
cout<<" Cost of fertilizer per pound: $"<<priceperpound<<"\n";
cout<<" Cost of fertilizing per square foot: $"<<costpersqfoot;
}


