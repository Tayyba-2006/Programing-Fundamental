#include<iostream>
using namespace std;
string CalculatePoolState(int V, int P1, int P2, float H)
{
   float TotalWater = (P1+P2)*H;
   if(TotalWater <= V)
   {
    int Pool = (TotalWater/ V) * 100;
    int Pipe1 = (P1 * (H/TotalWater)) * 100;
    int Pipe2 = (P2 * (H/TotalWater)) * 100;
    return "The pool is " + to_string(Pool) + "% full. Pipe 1: " + to_string(Pipe1) + "%. Pipe 2: " + to_string(Pipe2) + "%.";
   }
   else if(TotalWater>V)
   {
    float Overflow = TotalWater - V;
    return "For " + to_string(H) + " hours, the pool overflows with " + to_string(Overflow) + " liters.";
   }
}
int main()
{
    int V, P1, P2;
    float H;
    
    cout<<"Enter volume of the pool in liters: ";
    cin>>V;
    cout<<"Enter flow rate of the first pipe per hour: ";
    cin>>P1;
    cout<<"Enter flow rate of the second pipe per hour: ";
    cin>>P2;
    cout<<"Enter hours that the worker is absent: ";
    cin>>H;
    cout<<CalculatePoolState(V,P1,P2,H);
    return 0 ;
}
