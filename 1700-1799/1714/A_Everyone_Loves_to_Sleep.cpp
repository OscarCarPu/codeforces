#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,H,M;
        cin>>n>>H>>M;
        int sol=LLONG_MAX;
        for(int i=0;i<n;i++){
            int h,m;
            cin>>h>>m;
            int ah=h,am=m;
            int cnt=0;
            while(ah!=H or am!=M){
                am--;
                cnt++;
                if(am==-1){
                    am=59;
                    ah--;
                }
                if(ah==-1){
                    ah=23;
                }
            }
            sol=min(sol,cnt);
        }
        cout<<sol/60<<" "<<sol%60<<"\n";
    }
}