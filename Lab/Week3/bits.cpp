#include<iostream>
using namespace std;
main()
{
float MB = 1024;
float KB = 1024;
float Bytes = 8;
float bits;
cout<<" Enter the size in megabytes (MB):";
float mbs;
cin>>mbs;
bits = MB * KB * Bytes * mbs; 
cout<<mbs<<"MB is equal to "<<bits<<" bits";
}  