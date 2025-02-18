#include <bits/stdc++.h>
using namespace std;
#define int long long
bool comp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>>V(n);
    for(int i=0;i<n;i++){
        cin>>V[i].first;
        V[i].second=i;
    }
    sort(V.begin(),V.end());
    for(int i=0;i<n/2;i++){
        swap(V[i].first,V[n-i-1].first);
    }
    sort(V.begin(),V.end(),comp);
    for(int i=0;i<n;i++)cout<<V[i].first<<" ";
}