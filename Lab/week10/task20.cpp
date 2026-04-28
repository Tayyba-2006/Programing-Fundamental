#include<iostream>
using namespace std;
string projectTimeCalculation(int h, int d, int w)
{
    float workD = d * 0.9;
    float totalH = workD * 10 * w;
    if(totalH >= h)
    {
        int leftH = totalH - h;
        return "Yes! " + to_string(leftH) + " hours left.";
    }
    else 
    {
        int needH = h - totalH;
        return "Not enough time! " + to_string(needH) + " hours needed.";
    }
}
int main()
{
    int h , d, w;
    cout<<"Enter needed hours: ";
    cin>>h;
    cout<<"Enter number of days of firm: ";
    cin>>d;
    cout<<"Enter number of workers: ";
    cin>>w;
    cout << projectTimeCalculation(h,d,w) ;
    return 0;
}