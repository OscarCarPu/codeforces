#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n/2);
    for(int i=0;i<n/2;i++)cin>>V[i];
    sort(V.begin(),V.end());
    int sol=LLONG_MAX;
    int p=0;
    int a=0;
    for(int i=1;i<=n;i+=2){
        a+=abs(i-V[p++]);
    }
    sol=min(sol,a);
    a=0,p=0;
    for(int i=2;i<=n;i+=2){
        a+=abs(i-V[p++]);
    }
    cout<<min(a,sol);
}