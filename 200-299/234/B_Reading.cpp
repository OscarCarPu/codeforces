#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>V(n);
    for(int i=0;i<n;i++){
        cin>>V[i].first;
        V[i].second=i+1;
    }
    sort(V.rbegin(),V.rend());
    cout<<V[k-1].first<<"\n";
    for(int i=0;i<k;i++)cout<<V[i].second<<" ";
}