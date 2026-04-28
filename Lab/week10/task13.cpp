#include<iostream>
using namespace std;
string Number(int num)
{
    string t1, t2;
    int num1= num % 10;
    if(num==0) {t1 = "Zero";}
    if(num1==1){t1 = "One";} 
    if(num1==2){t1 = "Two";}
    if(num1==3){t1 = "Three";} 
    if(num1==4){t1 = "Four";} 
    if(num1==5){t1 = "Five";}
    if(num1==6){t1 = "Six";} 
    if(num1==7){t1 = "Seven";}
    if(num1==8){t1 = "Eight";} 
    if(num1==9){t1 = "Nine";}
    if(num==10){t1 = "Ten";}
    if(num==11){t1 = "Eleven";} 
    if(num==12){t1 = "Twelve";} 
    if(num==13){t1 = "Thirteen";} 
    if(num==14){t1 = "Fourteen";} 
    if(num==15){t1 = "Fifteen";}
    if(num==16){t1 = "Sixteen";}
    if(num==17){t1 = "Seventeen";}
    if(num==18){t1 = "Eighteen";}
    if(num==19){t1 = "Nineteen";} 
    else if(num >= 90){t2 = "Ninety";} 
    else if(num >= 80){t2 = "Eighty";} 
    else if(num >= 70){t2 = "Seventy";} 
    else if(num >= 60){t2 = "Sixty";} 
    else if(num >= 50){t2 = "Fifty";} 
    else if(num >= 40){t2 = "Forty";} 
    else if(num >= 30){t2 = "Thirty";} 
    else if(num >= 20){t2 = "Twenty";}
    return t2 + t1;
}
int main ()
{
    int num;
    cout<<"Enter a number (1-99): ";
    cin>> num;
    cout<<Number(num);
    return 0;
}