#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        vector<pair<int,int>> sol;
        for(int i=0;i<n-1;i++){
            if(V[i]%2==V[n-1]%2){
                sol.emplace_back(i+1,n);
            }
        }
        for(int i=1;i<n;i++){
            if(V[i]%2!=V[0]%2){
                sol.emplace_back(1,i+1);
            }
        }
        cout<<sol.size()<<"\n";
        for(auto u : sol)cout<<u.first<<" "<<u.second<<"\n";
    }
}