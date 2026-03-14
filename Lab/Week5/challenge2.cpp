#include<iostream>
using namespace std;
main()
{
    int num,digit;
    cout<<"Enter the number ";
    cin >> num;
    cout<<"enter the digit: ";
    cin >> digit;
    int count,f=0;
    for(int i=num; num>0;num=num/10)
    {
        count=num%10;
        
        if(digit==0&&count==0)
        {
          f=f+1;
        }
         else if(digit==1&&count==1)
        {
          f=f+1;
        } else if(digit==2&&count==2)
        {
           f=f+1;
        } else if(digit==3&&count==3)
        {
           f=f+1;
        }  else if(digit==4&&count==4)
        {
          f=f+1;
        } else if(digit==5&&count==5)
        {
           f=f+1;
        } else if(digit==6&&count==6)
        {
          f=f+1;
        } else if(digit==7&&count==7)
        {
          f=f+1;
        } else if(digit==8&&count==8)
        {
           f=f+1;
        } else if(digit==9&&count==9)
        {
        f=f+1;}
        
       }
    cout<<"the frequency = "<<f;
}
