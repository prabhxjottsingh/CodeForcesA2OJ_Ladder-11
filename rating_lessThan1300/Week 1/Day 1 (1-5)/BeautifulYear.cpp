/*

It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

Examples

inputCopy
1987
outputCopy
2013

inputCopy
2013
outputCopy
2014

Problem Link:
https://codeforces.com/problemset/problem/271/A

*/

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    int i = 1;
    while (i)
    {
        n++;
        stringstream ss;
        ss << n;
        ss >> s;
        if ((s[0] != s[1]) && (s[1] != s[2]) && (s[2] != s[3]) && (s[0] != s[2]) && (s[0] != s[3]) && (s[3] != s[1]))
        {
            break;
        }
    }
    cout << s;
    return 0;
}