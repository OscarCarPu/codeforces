#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> V(n);
        
        for(int i=0;i<n;i++)cin>>V[i];
        reverse(V.begin(),V.end());
        int m;
        int p=n-1;
        cin>>m;
        while(m--){
            int b;
            cin>>b;
            p-=b;
            p+=n;
            p%=n;
        }
        cout<<V[p]<<"\n";
    }
}