#include <iostream>
using namespace std;
float TaxCalculator(char type, float price)
{
    if (type == 'M')
    {
        float TaxA = price * (6.0 / 100);
        float finalP = price + TaxA;
        return finalP;
    }
    else if (type == 'E')
    {
        float TaxA = price * (8.0 / 100);
        float finalP = price + TaxA;
        return finalP;
    }
    else if (type == 'S')
    {
        float TaxA = price * (10.0 / 100);
        float finalP = price + TaxA;
        return finalP;
    }
    else if (type == 'V')
    {
        float TaxA = price * (12.0 / 100);
        float finalP = price + TaxA;
        return finalP;
    }
    else if (type == 'T')
    {
        float TaxA = price * (15.0 / 100);
        float finalP = price + TaxA;
        return finalP;
    }
}
int main()
{
    float price;
    char type;
    string Vtype;
    float FinalA;
    cout << "Enter Vehicle Type Code (M/E/S/V/T): ";
    cin >> type;
    cout << "Enter Vehicle Price: ";
    cin >> price;
    FinalA = TaxCalculator(type , price);
     if (type == 'M')
    {
        Vtype = "Motorcycle";
    }
    else if (type == 'E')
    {
        Vtype = "Electric";
    }
    else if (type == 'S')
    {
        Vtype = "Sedan";
    }
    else if (type == 'V')
    {
        Vtype = "Van";
    }
    else if (type == 'T')
    {
        Vtype = "Truck";
    }
   
    cout << "The final price on a vehicle of type " << Vtype << " after adding the tax is $" << FinalA;
    return 0;
}