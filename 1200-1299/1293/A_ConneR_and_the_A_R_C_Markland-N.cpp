#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,s,k;
        cin>>n>>s>>k;
        set<int> S;
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            S.insert(x);
        }
        for(int i=0;i<=1000;i++){
            if(s-i>0){
                if(!S.count(s-i)){
                    cout<<i;
                    break;
                }
            }
            if(s+i<=n){
                if(!S.count(s+i)){
                    cout<<i;
                    break;
                }
            }
        }
        cout<<"\n";
    }
}