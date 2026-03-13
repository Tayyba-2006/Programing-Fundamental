#include<iostream>
using namespace std;
int main()
{
    string t1, t2;
    int num; 
    cout<<"Enter the number [0...100]: ";
    cin>>num;
    int num1= num % 10;
    if(num==0) {t1 = "zero";}
    if(num1==1){t1 = "one";} 
    if(num1==2){t1 = "two";}
    if(num1==3){t1 = "three";} 
    if(num1==4){t1 = "four";} 
    if(num1==5){t1 = "five";}
    if(num1==6){t1 = "six";} 
    if(num1==7){t1 = "seven";}
    if(num1==8){t1 = "eight";} 
    if(num1==9){t1 = "nine";}
    if(num==10){t1 = "ten";}
    if(num==11){t1 = "eleven";} 
    if(num==12){t1 = "twelve";} 
    if(num==13){t1 = "thirteen";} 
    if(num==14){t1 = "fourteen";} 
    if(num==15){t1 = "fifteen";}
    if(num==16){t1 = "sixteen";}
    if(num==17){t1 = "seventeen";}
    if(num==18){t1 = "eighteen";}
    if(num==19){t1 = "nineteen";}
    else if(num==100){t2 = "one hundred";} 
    else if(num >= 90){t2 = "ninety";} 
    else if(num >= 80){t2 = "eighty";} 
    else if(num >= 70){t2 = "seventy";} 
    else if(num >= 60){t2 = "sixty";} 
    else if(num >= 50){t2 = "fifty";} 
    else if(num >= 40){t2 = "forty";} 
    else if(num >= 30){t2 = "thirty";} 
    else if(num >= 20){t2 = "twenty";}
    cout<<t2<<" "<<t1;
    return 0;
}