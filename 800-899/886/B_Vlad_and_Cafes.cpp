#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    set<int> S;
    for(int i=0;i<n;i++){
        cin>>V[i];
        S.insert(V[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(S.size()==1)break;
        if(S.count(V[i]))S.erase(V[i]);
    }
    auto it=S.begin();
    cout<<*it;
}