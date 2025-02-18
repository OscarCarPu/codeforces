#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int can=true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i] and (a[i]=='R' or b[i]=='R'))can=false;
        }
        if(can)cout<<"YES\n";
        else cout<<"NO\n";
    }
}