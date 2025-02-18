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
        int sol=-1;
        vector<int> V(150001,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(V[x]){
                sol=max(sol,V[x]+(n-i-1));
            }
            V[x]=i+1;
        }
        cout<<sol<<"\n";
    }
}