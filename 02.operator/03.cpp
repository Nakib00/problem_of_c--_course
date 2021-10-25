#include <iostream>
using namespace std;
int main()
{
    int num, reverse = 0, a;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0)
    {
        a = num % 10;
        reverse = reverse * 10 + a;
        num /= 10;
    }
    cout << "Reversed Number: " << reverse;
    return 0;
}