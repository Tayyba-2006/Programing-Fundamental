#include<iostream>
using namespace std;
const int colS = 2;
void toyotaBlueCars(string cars[][colS], int rows)
{
    cout<<"A. Toyota Blue Cars: \n";
    bool found = false;
    for(int i = 0; i< rows; i++)
    {
        if(cars[i][0] == "Toyota" && cars[i][1] == "Blue")
        {
            cout<< cars[i][0]<<" "<<cars[i][1]<<"\n";
            found = true;
        }
    }
    if(!found)
    {
        cout<<"No Toyota Blue Cars Found.\n\n";
    }
}
int countRedCars(string cars[][colS], int rows)
{
    int count = 0;
    for(int i = 0; i<rows; i++)
    {
        if(cars[i][1] == "Red")
        {
            count ++;
        }
    }
    return count;
}
int countNissanCars(string cars[][colS], int rows)
{
    int count = 0;
    for(int i =  0; i< rows;  i++)
    {
        if(cars[i][0] == "Nissan")
        {
            count++;
        }
    }
    return count;
}

int converter(string cars[][colS], int rows, string color)
{
    int sum = 0;
    for(int i = 0; i<rows; i++ )
    {
        if(cars[i][1] == color)
        {
        sum++;
        }  
    }
    return sum;
}
void printTranspose(string cars[][colS], int rows)
{
    cout<<"Transposed Matrix: \n";
    for(int j = 0; j < colS; j++)
    {
         for(int i = 0; i < rows; i++)
    {
        cout << cars[i][j] << "\t";
    } 
    cout<<"\n";
    }
     cout<<"\n";
}
int main()
{
    int rows;
    cout<<"Enter total number of cars: ";
    cin >> rows;
    string cars[rows][colS];
    for(int i = 0; i< rows ; i++)
    {
        cout<<"Cars "<<i+1 << " - Enter Brand: ";
        cin >> cars[i][0];
        cout<<"Car "<< i+1 <<" - Enter Color: ";
        cin>> cars[i][1];
    }
    cout<<"\n ==== Results ==== \n\n";
    toyotaBlueCars(cars, rows);
    cout<<"B. Total Red cars: " << countRedCars(cars, rows) <<"\n\n";
    cout<<"C. Total Nissan cars: " << countNissanCars(cars , rows) << "\n\n";
    string testColor = "Blue";
    cout << "D. Total " << testColor <<" cars: " << converter(cars, rows, testColor) <<"\n\n";
    printTranspose(cars, rows);
    return 0;
}