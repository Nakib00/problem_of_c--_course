#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any Number=";
    cin >> num;
    if ((num % 3 == 0) && (num % 5 == 0))
    { 
        cout << "Divisible by 3 or 5";
    }
    else
        cout << num << " Not divisible by 3 or 5";