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
        set<int> S;
        set<int> aux;
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        int x=V[0];
        aux.insert(V[0]);
        for(int i=1;i<n;i++){
            if(S.count(V[i])){
                for(int j : aux)S.insert(j);
                aux.clear();
                x=0;
            }
            else if(V[i]<x){
                for(int j : aux)S.insert(j);
                aux.clear();
                x=V[i];
                aux.insert(x);
            }
            else{
                x=V[i];
                aux.insert(V[i]);
            }
        }
        cout<<S.size()<<"\n";
    }
}