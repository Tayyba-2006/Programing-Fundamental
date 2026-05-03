#include<iostream>
using namespace std;
float CalculateSalary(float base, int score, int exp)
{
    float bonus = 0;
    if(score >= 90)
    {
         bonus = base * 20.0/100;
    }
    else if(score >= 75)
    {
         bonus = base * 10.0/100;

    }
    else
    {
         bonus = base * 5.0/100;
    }
    if ( exp >= 5)
    {
        bonus = bonus + ( base * 5.0/100);
    }
    return base + bonus;
}
int main()
{
    float base;
    int score, exp;
    cout<<"Enter base , score and experience in years: ";
    cin>>base;
    cin>> score;
    cin>> exp;
    cout<<"Final Salary: "<< CalculateSalary(base, score,exp);
    return 0;
}