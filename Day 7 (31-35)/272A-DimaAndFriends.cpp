/*

Probelm Link:
https://codeforces.com/problemset/problem/272/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        sum = sum + a[i];
    }
    for (int i = 1; i < 6; i++)
    {
        int temp = sum;
        temp = temp + i;
        if (temp % (n + 1) != 1)
            c++;
    }
    cout << c;

    return 0;
}