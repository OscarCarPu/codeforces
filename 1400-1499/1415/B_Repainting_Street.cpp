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
        vector<int> V(n);
        set<int> S;
        for(int i=0;i<n;i++){
            cin>>V[i];
            S.insert(V[i]);
        }
        int sol=LLONG_MAX;
        for(int c : S){
            int aux=0;
            int pk=0;
            for(int i=0;i<n;i++){
                if(V[i]!=c){
                    if(!pk){
                        pk=k;
                        aux++;
                    }
                }
                pk--;
                pk=max(pk,0LL);
            }
            sol=min(sol,aux);  
        }
        cout<<sol<<"\n";
    }
}