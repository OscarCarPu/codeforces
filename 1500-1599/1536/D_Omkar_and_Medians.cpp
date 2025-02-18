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
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        set<int> S;
        bool sol=true;
        S.insert(a[0]);
        for(int i=1;i<n;i++){
            int prv=a[i-1];
            if(prv!=a[i]){
                if(prv<a[i]){
                    auto it=S.upper_bound(prv);
                    if(it!=S.end() and (*it<a[i])){
                        sol=false;
                        break;
                    }
                }
                if(prv>a[i]){
                    auto it=S.lower_bound(prv);
                    if(it!=S.begin() and (*(--it)>a[i])){
                        sol=false;
                        break;
                    }
                }
            }
            S.insert(a[i]);
        }
        if(sol)cout<<"YES\n";
        else cout<<"NO\n";
    }   
}