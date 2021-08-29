
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p[n];
    for(int i=1; i<=n; i++)
        p[i]=i;
    for(int i=1; i<=n; i++){
        if(i%2==0)
        cout<<p[i-1];
        else
            cout<<p[i+1];
        cout<<
        " ";
    }
    return 0;
}