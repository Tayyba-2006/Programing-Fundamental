#include<iostream>
using namespace std;
main()
{
int min, fps, frames, s=60;
cout<<" Number of Minutes: ";
cin>> min;
cout<<" Frames per Second: ";
cin>> fps;
frames = min*s*fps;
cout<<" Total Number of Frames: "<<frames;
}