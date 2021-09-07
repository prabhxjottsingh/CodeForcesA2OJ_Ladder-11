/*

Problem Link:
https://codeforces.com/problemset/problem/233/A

*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
        cout << "-1";
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                cout << i - 1 << " ";
            else
                cout << i + 1 << " ";
        }
    }
    return 0;
}