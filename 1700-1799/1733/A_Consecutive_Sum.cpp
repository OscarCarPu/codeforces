#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> V(k,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            V[i%k]=max(V[i%k],x);
        }
        int sol=0;
        for(int i : V)sol+=i;
        cout<<sol<<"\n";
    }
}