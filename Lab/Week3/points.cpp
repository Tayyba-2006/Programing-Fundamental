#include<iostream>
using namespace std;
main()
{
float w= 3, d= 1, l=0;
float points, wins, draws, losses;
cout<<"Enter the number of wins:";
cin>>wins;
cout<<"Enter the number of draws:";
cin>>draws;
cout<<"Enter the number of losses:";
cin>>losses;
points = wins*w + draws*d + losses*l; 
cout<<"Pakistan has obtained "<<points<< " points in Asia cup Tournament";
}