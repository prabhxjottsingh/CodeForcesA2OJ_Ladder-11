/*  

Problem Link:
https://codeforces.com/problemset/problem/155/A

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = a[0], mini = a[0];
    for (int i = 1; i < n; i++)
    {

        if (a[i] > maxi)
            count++;
        maxi = max(maxi, a[i]);

        if (a[i] < mini)
            count++;
        mini = min(mini, a[i]);
    }
    cout << count;

    return 0;
}