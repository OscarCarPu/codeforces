#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    sort(V.rbegin(),V.rend());
    swap(V[0],V[1]);
    bool pos=V[1]<V[0]+V[2];
    if(pos){
        cout<<"YES\n";
        for(int i : V)cout<<i<<" ";
    }
    else cout<<"NO";
}