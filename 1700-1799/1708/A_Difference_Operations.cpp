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
        int x;
        cin>>x;
        bool can=true;
        for(int i=1;i<n;i++){
            int a;
            cin>>a;
            if(a%x!=0)can=false;
        }
        if(can)cout<<"YES\n";
        else cout<<"NO\n";
    }
}