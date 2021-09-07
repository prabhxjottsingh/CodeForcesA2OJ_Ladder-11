/*

Problem Link:
https://codeforces.com/problemset/problem/124/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c=0;
    cin>>n>>a>>b;
    
    cout<<min(n-a, b+1);
    return 0;
}