#include <bits/stdc++.h>
using namespace std;
#define int long long
bool f(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first)return a.first<b.first;
    else return a.second<b.second;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>V(n);
        for(int i=1;i<=n;i++){
            cin>>V[i-1].first;
            V[i-1].second=i;
        }
        sort(V.begin(),V.end(),f);
        cout<<V[0].second<<" "<<V[n-1].second<<"\n";
    }
}