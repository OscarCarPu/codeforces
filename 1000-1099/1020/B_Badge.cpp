#include <bits/stdc++.h>
using namespace std;
vector<int> p;
vector<bool> B;
int sol;
void dfs(int v){
    if(B[v]){
        sol=v;
        return;
    }
    B[v]=true;
    dfs(p[v]);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    p=vector<int>(n);
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        v--;
        p[i]=v;
    }
    for(int i=0;i<n;i++){
        sol=0;
        B=vector<bool>(n,false);
        dfs(i);
        cout<<sol+1<<" ";
    }
}