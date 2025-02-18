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
        int ma=0,mi=LLONG_MAX;
        int cnt=0;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            ma=max(k,ma);
            mi=min(mi,k);
            if(ma-mi>2*x){
                ma=k;
                mi=k;
                cnt++;                    
            }
        }
        cout<<cnt<<"\n";
    }
}