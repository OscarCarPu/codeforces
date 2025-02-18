#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int q;
        cin>>q;
        map<int,pair<int,int>> M;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(M.count(x)){
                M[x].second=i;
            }
            else{
                M[x].first=M[x].second=i;
            }
        }
        while(q--){
            int a,b;
            cin>>a>>b;
            if(M.count(a) and M.count(b) and M[a].first<=M[b].second){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
    }
}