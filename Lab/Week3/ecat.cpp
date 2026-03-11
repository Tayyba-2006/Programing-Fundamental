#include<iostream>
using namespace std;
main()
{
cout<<"Enter the student's name:";
string name;
cin>> name;
cout<<"Enter the matriculation marks (out of 1100):";
float matricmarks;
cin>> matricmarks;
cout<<"Enter the intermediate marks ( out of 555):";
float intermarks;
cin>> intermarks;
cout<<"Enter ECAT Marks (out of 400):";
float ecatmarks;
cin>> ecatmarks;
float aggregate;
aggregate = (ecatmarks/400)*50+(intermarks/555)*40+(matricmarks/1100)*10;
cout<<"Aggregate score for "<<name<<"is"<<aggregate<<"%";
} 





