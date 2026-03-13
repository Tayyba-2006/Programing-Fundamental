#include<iostream>
using namespace std;
int main(){
int holidays;
cout<<"Holidays: ";
cin>>holidays;
int workingdays=365-holidays;
int playtime=(workingdays*63)+(holidays*127); 
int norm=30000, diff, hours, min;
if(playtime>norm)
{
diff=playtime-norm;
hours=diff/60,min=diff%60;
cout<<"Tom will run away\n";
cout<<hours<<" hours and "<<min<<" minutes for play";
}
else
{
diff=norm-playtime;
hours=diff/60,min=diff%60;
cout<<"Tom sleeps well\n";
cout<<hours<<" hours and "<<min<<" minutes less for play";
}
return 0;
}