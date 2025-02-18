#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        vpii V(n);
        for(int i=0;i<n;i++){
            vi sol(m);
            for(int j=0;j<m;j++)cin>>sol[j];
            sort(sol.begin(),sol.end());
            int act=0;
            for(int j=0;j<m;j++){
                act+=sol[j];
                if(act>h)continue;
                V[i].first++;
                V[i].second+=act;
            }
            //cout<<V[i].first<<" "<<V[i].second<<endl;
        }
        int ans=0;
        for(int i=1;i<n;i++){
            if(V[i].first<V[0].first){
                ans++;
            }
            else if(V[i].first==V[0].first){
                if(V[i].second>=V[0].second){
                    ans++;
                }
            }
        }
        cout<<n-ans<<"\n";
    }
}