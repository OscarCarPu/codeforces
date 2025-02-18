#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n*2);
    cin>>V[0];
    bool sol=false;
    for(int i=1;i<n*2;i++){
        cin>>V[i];
        if(V[0]!=V[i])sol=true;
    }
    sort(V.begin(),V.end());
    if(sol){
        for(int i : V)cout<<i<<" ";
    }
    else cout<<"-1";
}