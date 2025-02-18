#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        map<int,int> M;
        int ma=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            M[x]++;
            ma=max(ma,M[x]);
        }
        int ned=n-ma;
        int x=0;
        int ans=0;
        while(ned>0){
            ans++;
            x=ma;
            if(ned>=x){
                ma+=x;
                ans+=x;
                ned-=x;
            }
            else{
                ans+=ned;
                ned=0;
            }
            x=0;
        }
        cout<<ans<<"\n";
    }
}