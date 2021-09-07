/*

Problem Link:
https://codeforces.com/problemset/problem/116/A

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int in = 0, maxcap = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        in = in - a;
        in = in + b;
        maxcap = max(maxcap, in);
    }
    cout << maxcap;
    return 0;
}