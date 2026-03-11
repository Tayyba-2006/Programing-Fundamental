#include<iostream>
using namespace std;
main()
{
int min, fps, frames, s=60;
cout<<" Enter minutes: ";
cin>> min;
cout<<" Enter fps: ";
cin>> fps;
frames = min*s*fps;
cout<<" Total frames = "<<frames;
}