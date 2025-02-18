#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n*2);
        for(int i=0;i<n*2;i++)cin>>a[i];
        sort(a.begin(),a.end());
        bool pos=true;
        for(int i=0;i<n;i++){
            if(a[i+n]-a[i]<x)pos=false;
        }
        if(pos)cout<<"YES\n";
        else cout<<"NO\n";
    }
}