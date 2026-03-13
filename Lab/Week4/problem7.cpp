#include<iostream>
using namespace std;
int main(){
    float a, s, l, w, pi=3.141592654, r, b, h;
    string shape;
    cout<<"Shape: ";
    cin>>shape;
    if(shape=="Square")
    {
    cout<<"Length: ";
    cin>>s;
    a=s*s;
    cout<<"Area: "<<a;
    }
    if(shape=="Rectangle")
    {
    cout<<"Length: ";
    cin>>l;
    cout<<"Width: ";
    cin>>w;
    a=l*w;
    cout<<"Area: "<<a;
    }
    if(shape=="Circle")
    {
    cout<<"Radius: ";
    cin>>r;
    a=pi*r*r;
    cout<<"Area: "<<a;
    }
    if(shape=="Triangle")
    {
    cout<<"Base: ";
    cin>>b;
    cout<<"Height: ";
    cin>>h;
    a=(b*h)/2;
    cout<<"Area: "<<a;
    }
    return 0;
}