#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    for(int i=0;i<n;i++){
        cin>>V[i];
    }
    sort(V.begin(),V.end());
    set<int> S;
    int x=V[n-1];
    for(int i=0;i<n;i++){
        if(V[n-1]%V[i]==0 and S.count(V[i])==0){
            S.insert(V[i]);
            V[i]=0;
        }
    }
    sort(V.begin(),V.end());
    cout<<x<<" "<<V[n-1];
}