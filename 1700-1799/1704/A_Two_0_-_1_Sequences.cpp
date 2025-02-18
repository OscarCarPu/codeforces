#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        bool pos=true;
        for(int i=0;i<m-1;i++){
            if(a[i]!=b[i]){
                pos=false;
            }
        }
        bool ap=false;
        for(int i=m-1;i<n;i++){
            if(a[i]==b[m-1])ap=true;
        }
        pos=pos and ap;
        if(pos)cout<<"YES\n";
        else cout<<"NO\n";
    }
}