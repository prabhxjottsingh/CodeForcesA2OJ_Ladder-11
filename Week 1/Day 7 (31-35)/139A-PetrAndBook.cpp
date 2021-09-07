/*

Problem Link:
https://codeforces.com/problemset/problem/139/A

*/
#include <iostream>
using namespace std;

int main()
{
    int x, ans = 0, i;
    cin >> x;

    int n = x;
    int a[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }

    while (n > 0)
    {
        for (i = 0; i < 7; i++)
        {

            n = n - a[i];
            if (n <= 0)
            {
                ans = i;
                break;
            }
        }
        if (n <= 0)
        {
            ans = i;
            break;
        }
    }

    cout << ans + 1 << endl;
    return 0;
}