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
void TimeTick(int ticks)
{
    if(!gravity)
    {
        return;
    }
    for(int t = 0; t<ticks; t++)
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


        if(isBlackHole)
        {
            for(int j = 0; j<5; j++)
            {
                if(objects[4][j] == '#')
                {
                
                     objects[4][j] = '-';
                     objects[0][j] = '#';
                    
                }
            }
        }
        cout<<"\nAfter tick "<<t+1<<":\n";
        DisplayWorld();
    }
}
int main()
{
    cout<<"Initial World: \n\n";
    DisplayWorld();
    int choice;
    cout<<"\nEnable Gravity? (1 = Yes, 0 = No): ";
    cin >> choice;
    SetGravityStatus(choice);
    cout<<"Enable Black Hole? (1 = yes, 0 = No): ";
    cin >> isBlackHole;
    int ticks;
    cout<<"How many ticks? ";
    cin >> ticks;
    cout<<"\nAfter stimulation: \n\n";
    TimeTick(ticks);
    return 0;
}