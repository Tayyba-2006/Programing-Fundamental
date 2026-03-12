#include<iostream>
using namespace std;
int main()
{
    int salary=10000, months=6, lapprice=50000, adsalary, madsalary, monthsReq;
    adsalary=salary*50/100;
    madsalary=adsalary*months;
    if(madsalary>=lapprice){
        cout<<"Ali can purchase a laptop";
    }
    else{
        monthsReq=lapprice/adsalary;
        cout<<"Months required to buy a laptop "<<monthsReq;
    }
    return 0;
}