#include<iostream>
#include<cmath>
using namespace std;
void discriminant(double a, double b, double c)
{
    double dis = (b*b) - (4 * a* c);
    if (dis > 0)
    {
        double root1 = (-b+sqrt(dis))/(2*a);
        double root2 = (-b - sqrt(dis))/(2*a);
        cout<<"Solutions: x = "<< root1<<" and x = "<<root2;
    }
    else if(dis == 0) 
    {
        double root1;
        double root2;
        root1 = root2 = (-b)/(2*a);
        cout<<"Solution: x = "<< root1;
    }
    else if (dis < 0)
    {
        double i;
        double value1 = (-b/2*a);
        double value2 = sqrt(-dis)/2*a;
        cout<<"Complex Solutions: x = "<< value1<<" + "<<value2<<"i and x = "<<value1<<" - "<<value2<<"i";
    }
}


int main()
{
    double a,b,c;
    cout<<"Enter the value of a: ";
    cin>> a;
    cout<<"Enter the value of b: ";
    cin>> b;
    cout<<"Enter the value of c: ";
    cin>> c;
    discriminant(a,b,c);
    return 0;
}