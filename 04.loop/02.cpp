#include <iostream>
using namespace std;
int main()
{
    int i, x;
    float sum, average;
    x = 1;
    sum = 0;
    for (i = 0; x != 0; i = i + 1)
    { 
        cout << "Enter an integer Number =";
        cin >> x;
        sum = sum + x;
    }
    average = sum / (i - 1);
    cout << "You enter " << (i - 1) << " Number of integer" << endl;
    cout << "The Average is =" << average;
    return 0;
}