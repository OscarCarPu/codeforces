#include <bits/stdc++.h>
using namespace std;
#define int long long
bool f(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first)return a.first<b.first;
    return a.second<b.second;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    int sol=abs(x)+abs(y);
    vector<pair<int,int>>V;
    if(y<0)V.emplace_back(0,-1*sol);
    else V.emplace_back(0,sol);
    if(x<0)V.emplace_back(-1*sol,0);
    V.emplace_back(sol,0);
    sort(V.begin(),V.end(),f);
    cout<<V[0].first<<" "<<V[0].second<<" "<<V[1].first<<" "<<V[1].second;
}