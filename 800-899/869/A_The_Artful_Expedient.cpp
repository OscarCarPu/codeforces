#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    set<int> S;
    for(int i=0;i<n;i++)cin>>V[i],S.insert(V[i]);
    int cnt=0;
    vector<int>V2(n);
    for(int i=0;i<n;i++){
        cin>>V2[i];
        S.insert(V2[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(S.count(V[i]^V2[j]))cnt++;
        }
    }
    if(cnt%2)cout<<"Koyomi";
    else cout<<"Karen";
}