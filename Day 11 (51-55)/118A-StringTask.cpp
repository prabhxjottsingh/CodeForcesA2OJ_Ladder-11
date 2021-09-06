/* 

Problem Link:


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans;
    int i;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
    }
    for (auto c : s)
    {

        if ((c != 'a') && (c != 'e') && (c != 'o') && (c != 'i') && (c != 'u') && (c != 'y'))
        {
            ans = ans + '.';
            ans = ans + c;
        }
    }

    cout << ans;
    return 0;
}