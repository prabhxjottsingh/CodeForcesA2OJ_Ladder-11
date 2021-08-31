/* 

Problem Link:
https://codeforces.com/problemset/problem/236/A

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[10000] = {0};
    int n = s.length();
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        char k;
        k = s[i];
        a[k] = 1;
    }
    for (int i = 0; i < 10000; i++)
    {
        if (a[i] == 1)
            c++;
    }
    if (c % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}