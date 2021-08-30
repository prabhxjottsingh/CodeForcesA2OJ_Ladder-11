/*

Problem Link:
https://codeforces.com/problemset/problem/248/A

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, l1 = 0, l0 = 0, r1 = 0, r0 = 0, x = 0;
    cin >> n;
    int a[2 * n];
    for (int i = 1; i <= 2 * n; i++)
        cin >> a[i];
    for (int i = 1; i <= 2 * n; i = i + 2)
    {
        if (a[i] == 1)
            l1++;
        else
            l0++;
    }
    for (int i = 2; i <= 2 * n; i = i + 2)
    {
        if (a[i] == 1)
            r1++;
        else
            r0++;
    }
    if (l1 >= l0)
    {
        for (int i = 1; i <= 2 * n; i = i + 2)
        {
            if (a[i] == 0)
                x++;
        }
    }
    else if (l0 > l1)
    {
        for (int i = 1; i <= 2 * n; i = i + 2)
        {
            if (a[i] == 1)
                x++;
        }
    }
    if (r1 >= r0)
    {
        for (int i = 2; i <= 2 * n; i = i + 2)
        {
            if (a[i] == 0)
                x++;
        }
    }
    else if (r0 > r1)
    {
        for (int i = 2; i <= 2 * n; i = i + 2)
        {
            if (a[i] == 1)
                x++;
        }
    }
    cout << x;
    return 0;
}