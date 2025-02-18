#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> V(n);
        for(int i=0;i<n;i++)cin>>V[i];
        sort(V.rbegin(),V.rend());
        for(int i=1;i<n;i++){
            V[i]+=V[i-1];
        }
        
        while(q--){
            int x;
            cin>>x;
            auto it=lower_bound(V.begin(),V.end(),x);
            if(it==V.end()){
                cout<<"-1\n";
            }
            else cout<<it-V.begin()+1<<"\n";
        }
    }
}