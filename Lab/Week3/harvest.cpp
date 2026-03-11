#include<iostream>
using namespace std;
main()
{
float vp, fp, total;
int kv, kf;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vp;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fp;
cout<<"Enter total kilograms of vegetables: ";
cin>>kv;
cout<<"Enter total kilograms of fruits: ";
cin>>kf;
total = (kv*vp + kf*fp) / 1.94; 
cout<<"Total earnings in Rupees (Rps): "<<total;
}