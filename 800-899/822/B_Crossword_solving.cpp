#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    vector<int> sol;
    for(int i=1;i<=n;i++)sol.push_back(i);
    for(int i=0;i+n<=m;i++){
        vector<int> aux;
        for(int j=0;j<n;j++){
            if(t[i+j]!=s[j]){
                aux.push_back(j+1);
            }
        }
        if(aux.size()<sol.size()){
            sol=aux;
        }
    }
    cout<<sol.size()<<"\n";
    for(int i : sol)cout<<i<<" ";
}