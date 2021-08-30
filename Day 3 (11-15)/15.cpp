/*

Problem Link:
https://codeforces.com/problemset/problem/144/A

*/



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int maxi = 32678, mini = 0, maxim = 0, minim = 32678;
    for(int i=0; i<n; i++){
        maxim = max(maxim, a[i]);
        if(maxim == a[i]){
            maxi = min(maxi, i);
        }

        minim = min(minim, a[i]);
        if(minim == a[i])
           mini = max(mini, i);
    }
    if(maxi < mini)
    cout<<(maxi-1) + (n - mini);
    else
    cout<<(maxi-1) + (n - mini) - 1; 
    
    return 0;
}