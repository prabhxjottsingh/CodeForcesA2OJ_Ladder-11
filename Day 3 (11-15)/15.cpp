
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxim = 0,maxi,j, mini, minim = 32678;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        int temp = maxim;
        maxim = max(maxim, a[i]);
        if(maxim == a[i] && temp!=maxim)
            maxi = i;
        
        int temp2 = minim;
        minim = min(minim, a[i]);
        if(minim == a[i] && temp2!=minim)
            mini = i;
    }
    if(maxi<mini){
        cout<<(maxi-1) + (n - mini);
    }
    else
        cout<<(maxi-1) + (n - mini)-1;
    
    return 0;
}