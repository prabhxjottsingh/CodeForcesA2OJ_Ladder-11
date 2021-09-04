/* 

Problem Link:
https://codeforces.com/problemset/problem/43/A

*/

#include <iostream>

using namespace std;

int main()
{
    int n, c = 0, c2 = 0;
    cin >> n;
    string s[n], ans;
    cin >> s[0];
    c++;
    for (int i = 1; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == s[0])
            c++;
        else
        {
            c2++;
            ans = s[i];
        }
    }
    if (c > c2)
        cout << s[0];
    else
        cout << ans;
    return 0;
}