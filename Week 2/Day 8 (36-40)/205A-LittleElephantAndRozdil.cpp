/*

Problem Link:
https://codeforces.com/problemset/problem/205/A

*/

#include <iostream>

using namespace std;

int main()
{
    int n, mini = 2147483647, ans = 0, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mini = min(mini, a[i]);
        if (a[i] == mini)
            ans = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (mini == a[i])
            c++;
    }
    if (c > 1)
    {
        cout << "Still Rozdil";
        return 0;
    }
    else
        cout << ans;
    return 0;
}