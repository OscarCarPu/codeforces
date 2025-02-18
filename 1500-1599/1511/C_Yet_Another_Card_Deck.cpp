#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    while(q--){
        int x;
        cin>>x;
        int p=find(V.begin(),V.end(),x)-V.begin();
        cout<<p+1<<" ";
        rotate(V.begin(),V.begin()+p,V.begin()+p+1);
    }
}