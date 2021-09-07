/*

Problem Link:
https://codeforces.com/problemset/problem/118/B?csrf_token=dc825645b0c6e6723acb3a3f224a6e5c

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, j, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cout << " "
             << " ";
        for (j = n - 1; j > i; j--)
            cout << " "
                 << " ";
        for (k = 0; k <= i; k++)
        {
            cout << k << " ";
        }
        for (int l = i - 1; l >= 0; l--)
            cout << l << " ";
        cout << endl;
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < n; j++)
            cout << j << " ";
        for (int x = n; x >= 0; x--)
            cout << x << " ";
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << " "
             << " ";
        for (int j = n - 1; j > i; j--)
            cout << " "
                 << " ";
        for (int k = 0; k <= i; k++)
            cout << k << " ";
        for (int l = i - 1; l >= 0; l--)
            cout << l << " ";
        cout << endl;
    }
    return 0;
}