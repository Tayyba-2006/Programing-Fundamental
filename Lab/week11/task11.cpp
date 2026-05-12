#include<iostream>
using namespace std;
char objects[5][5] = 
{
    {'-','#','#','-','#'},
    {'#','-','-','#','-'},
    {'-','#','-','-','-'},
    {'#','-','#','-','#'},
    {'#','-','-','-','-'}
};
bool gravity = false;
bool isBlackHole = false;
void DisplayWorld()
{
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout<< objects[i][j]<<" ";
        }
        cout<<endl;
    }
}
void SetGravityStatus(bool status)
{
    gravity = status;
}
void TimeTick(int times)
{
    if(gravity == false)
    {
        return;
    }
    for(int t = 0; t<times; t++)
    {
        for(int i = 3; i>=0; i--)
        {
            for(int j= 0; j<5; j++)
            {
                if(objects[i][j] == '#')
                {
                    if(objects[i+1][j] == '-')
                    {
                        objects[i+1][j] = '#';
                        objects[i][j] = '-';
                    }
                }
            }
        }


        if(isBlackHole == true)
        {
            for(int j = 0; j<5; j++)
            {
                if(objects[4][j] == '#')
                {
                    if(objects[0][j] == '-')
                    {
                        objects[0][j] = '#';
                        objects[4][j] = '-';
                    }
                }
            }
        }
    }
}
int main()
{
    cout<<"Initial World: \n\n";
    DisplayWorld();
    SetGravityStatus(true);
    isBlackHole = true;
    cout<<"\n\nAfter 1 Tick: \n\n"  ;
    TimeTick(1);
    DisplayWorld();
    cout<<"\n\n After 2 More Ticks: \n\n";
    TimeTick(2);
    DisplayWorld();
    return 0;
}