#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    for(int i=0;i<n;i++){
        cin>>V[i];
        V[i]--;
    }
    bool sol=false;
    for(int i=0;i<n;i++){
        if(V[V[V[i]]]==i){
            sol=true;
        }
    }
    if(sol)cout<<"YES";
    else cout<<"NO";
}