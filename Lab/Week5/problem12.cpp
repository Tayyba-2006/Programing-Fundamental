#include<iostream>
using namespace std;
int main()
{
    float n, n2, count1=0,count2=0,count3=0,count4=0,count5=0;
    float p1,p2,p3,p4,p5;
    cout<<"Enter numbers count: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter a number: ";
        cin>>n2;
        if(n2<200)
        {count1++;}
        else if(n2<=399)
        {count2++;}
        else if(n2<=599)
        {count3++;}
        else if(n2<=799)
        {count4++;}
        else if (n2>=800)
        {count5++;}   
    }
        p1= (count1*100)/n;
        p2= (count2*100)/n;
        p3= (count3*100)/n;
        p4= (count4*100)/n;
        p5= (count5*100)/n;
    cout<<p1<<"%\n";
    cout<<p2<<"%\n";
    cout<<p3<<"%\n";
    cout<<p4<<"%\n";
    cout<<p5<<"%\n";
    return 0;
}
