#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
int poW(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a%mod,p/2)%mod*(p%2?a:1)%mod;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int aux=-1;
        int ans=0;
        while(k>0){
            aux++;
            if(k%2==1)ans+=poW(n,aux);
            ans%=mod;
            k/=2;
        }
        cout<<ans<<"\n";
    }
}