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
        vector<int> cnt(32,0),V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
            for(int j=30;j>=0;j--){
                if(V[i] & (1<<j))cnt[j]++;
            }
        }
        int ans=0;
        for(int i=30;i>=0;i--){
            int aux=n-cnt[i];
            if(aux<=k){
                k-=aux;
                ans+=(1<<i);
            }
        }
        cout<<ans<<"\n";
    }
}