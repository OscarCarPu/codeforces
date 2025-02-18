#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    int M=0;
    for(int i=0;i<n;i++)cin>>a[i],M=max(M,a[i]);
    int sol=0,act=0;
    for(int i=0;i<n;i++){
        if(a[i]==M)act++;
        else act=0;
        sol=max(sol,act);
    }
    cout<<sol;
}