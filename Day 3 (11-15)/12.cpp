
#include <bits/stdc++.h>
using namespace std;
bool prime(int m){
    int i;
    for(i=2; i<m; i++){
        if(m%i==0)
            break;
    }
    if(m==i)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int m=n;
    while(1){
        m++;
        if(prime(m))
            break;
    }
    if(m==x)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}