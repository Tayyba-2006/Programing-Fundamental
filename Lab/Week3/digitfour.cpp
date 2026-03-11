#include<iostream>
using namespace std;
main()
{
int sum, done, dtwo, dthree, dfour, num;
cout<<"Enter a 4-digit number: ";
cin>>num;
done = num % 10;
dtwo = (num/10) % 10;
dthree = (num/100) % 10;
dfour = (num/1000) % 10;
sum = done + dtwo + dthree + dfour;
cout<<"Sum of individual digits: "<<sum;
}
