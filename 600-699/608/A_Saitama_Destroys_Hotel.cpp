#include <bits/stdc++.h>
using namespace std;
#define int long long
bool f(pair<int,int> a,pair<int,int> b){
    return a.first>b.first;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,s;
    cin>>n>>s;
    vector<pair<int,int>> V(n);
    for(int i=0;i<n;i++){
        cin>>V[i].first>>V[i].second;
    }
    sort(V.begin(),V.end(),f);
    int time=0;
    int f=s;
    for(int i=0;i<n;i++){
        time+=f-V[i].first;
        time=max(time,V[i].second);
        f=V[i].first;
    }
    time+=f;
    cout<<time;
}