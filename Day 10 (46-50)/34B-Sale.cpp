/*

Problem Link:
https://codeforces.com/problemset/problem/34/B

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]<0 && m>0){
            m--;
            sum = sum + a[i];
        }
    }
    cout<<-sum;
    return 0;
}