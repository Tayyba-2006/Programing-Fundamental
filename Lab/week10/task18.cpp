#include <iostream>
using namespace std;
string PyramidVolume(float l, float w, float h, string unit);
int main()
{
    float l, w, h;
    string unit;
    cout << "Enter length, width, height (in meters): ";
    cin >> l;
    cin >> h;
    cin >> w;
    cout << "Enter output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    cout << PyramidVolume(l, h, w, unit);
    return 0;
}
string PyramidVolume(float l, float w, float h, string unit)
{
    float volume = (l * w * h) / 3;
    if (unit == "millimeters")
    {
        volume = volume * 1000000000;
    }
    else if (unit == "centimeters")
    {
        volume = volume * 1000000;
    }
    else if (unit == "kilometers")
    {
        volume = volume * 1000000000;
    }
    else if (unit == "meters")
    {
        volume = volume;
    }
    return to_string(volume) + " cubic " + unit;
}