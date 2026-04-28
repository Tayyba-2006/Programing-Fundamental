#include<iostream>
#include<cmath>
using namespace std;
double calculateHeight(float dis, float angle)
{
    double angleRadians = angle / 57.2958;
    return dis * tan(angleRadians);  
}
int main()
{
    double dis, angle;
    cout<<"Enter the distance from the base of the (in feet): ";
    cin>> dis;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin >> angle;
    cout<<"The height of the tree is: "<< calculateHeight(dis, angle);
    return 0;
}