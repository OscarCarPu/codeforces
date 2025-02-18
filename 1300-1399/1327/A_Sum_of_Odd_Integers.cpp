#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k%2!=n%2)cout<<"NO\n";
        else{
            if(k*k<=n)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}