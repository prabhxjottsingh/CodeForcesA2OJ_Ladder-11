/*

Problem Link:
https://codeforces.com/problemset/problem/450/A

*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m, last;
    double t, max(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= max)
        {
            last = i;
            max = ceil(t / m);
        }
    }

    cout << last << endl;
    return 0;
}

//ceil function is used to return the smallest integer value that is equals to or larger than the anser that is passed.