
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float sum;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum = sum + a[i];
    }
    float ans = sum/(n*100);
    cout<<ans*100;
    return 0;
}