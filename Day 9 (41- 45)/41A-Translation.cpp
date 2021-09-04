/*

Problem Link:
https://codeforces.com/problemset/problem/41/A

*/

#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string s;
    int n = a.length();
    for (int i = n - 1; i >= 0; i--)
        s = s + a[i];
    if (s == b)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}