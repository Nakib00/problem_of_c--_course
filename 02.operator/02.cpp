#include <iostream>
using namespace std;
int main()
{
    float fahrenheit, Celsius, Kelvin;
    cout << "Enter the fahrenheit=";
    cin >> fahrenheit;
    Celsius = 0.55 * fahrenheit - 17.77;
    Kelvin = Celsius + 273.15;
    cout << "Celsius= " << Celsius << endl;
    cout << "Kelvin= " << Kelvin;
    return 0;
}