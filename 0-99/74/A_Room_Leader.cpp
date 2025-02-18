#include <bits/stdc++.h>
using namespace std;
#define int long long
bool comp(pair<string,int> a,pair<string,int> b){
    return a.second>b.second;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<string,int>> V(n);
    for(int i=0;i<n;i++){
        cin>>V[i].first;
        int x;
        cin>>x;
        V[i].second=x*100;
        cin>>x;
        V[i].second-=x*50;
        for(int j=0;j<5;j++){
            cin>>x;
            V[i].second+=x;
        }
    }
    sort(V.begin(),V.end(),comp);
    cout<<V[0].first;
}