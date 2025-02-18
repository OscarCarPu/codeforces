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
        int bef;
        cin>>bef;
        bool up=true;
        bool is=true;
        for(int i=1;i<n;i++){
            int act;
            cin>>act;
            if(up){
                if(act<bef)up=false;
            }
            else{
                if(act>bef)is=false;
            }
            bef=act;
        }
        if(is)cout<<"YES\n";
        else cout<<"NO\n";
    }
}