#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int sol=a[n-1]-1;
    for(int i=0;i<n-1;i++){
        sol=min(sol,max(a[i]-1,1000000-a[i+1]));
    }
    sol=min(sol,1000000-a[0]);
    cout<<sol;
}