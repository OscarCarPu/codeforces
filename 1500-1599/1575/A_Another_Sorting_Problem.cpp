#include <bits/stdc++.h>
using namespace std;
#define int long long
int m;
bool comp(pair<string,int> a,pair<string,int> b){
    for(int i=0;i<m;i++){
        if(a.first[i]!=b.first[i]){
            if(i%2)return a.first[i]>b.first[i];
            else return a.first[i]<b.first[i];
        }
    }
    return true;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n>>m;
    vector<pair<string,int>> V(n);
    for(int i=0;i<n;i++)cin>>V[i].first,V[i].second=i+1;
    sort(V.begin(),V.end(),comp);
    for(auto i : V)cout<<i.second<<" ";
}