/*

Problem Link:
https://codeforces.com/problemset/problem/149/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0, sum = 0;
    cin >> n;
    int a[12];
    for (int i = 0; i < 12; i++)
        cin >> a[i];
    sort(a, a + 12);
    for (int i = 11; i >= 0; i--)
    {
        sum = sum + a[i];
        if (n == 0)
        {
            cout << "0";
            return 0;
        }
        if (sum >= n)
        {
            count++;
            break;
        }
        count++;
    }
    if (sum >= n)
        cout << count;
    else
        cout << "-1";
    return 0;
}