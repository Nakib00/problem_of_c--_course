#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], r, c;

    cout << "Enter 9 numbers\n";
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            cin >> a[r][c];
        }
    }

    cout << "\nEven Numbers\n";
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (a[r][c] % 2 == 0)
            {
                cout << a[r][c] << " ";
            }
        }
    }
    return 0;
}