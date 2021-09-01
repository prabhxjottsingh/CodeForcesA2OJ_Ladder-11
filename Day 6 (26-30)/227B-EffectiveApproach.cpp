/*

Problem link:
https://codeforces.com/problemset/problem/227/B

*/

//This code is giving TLE error.

//Still Finding the right solution, whenever I will find the solution, I will update this code.

//This can be done Using STL, and I am still learning STL.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l=0, f=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; i<n; j++)
        {
            f++;
            if(a[j]==b[i])
                break;
            
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=(n-1); j>=0; j--)
        {
            l++;
            if(a[j]==b[i])
                break;
            
        }
    }
    cout<<f<<" "<<l;
    return 0;
}

