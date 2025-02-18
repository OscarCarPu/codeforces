#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n*4,-1);
    int m;
    cin>>m;
    int x=1;
    for(int i=1;i<n*4;i+=2){
        V[i]=x++;
        if(x>m)break;
    }
    for(int i=0;i<n*4 and x<=m;i+=2){
        V[i]=x++;
    }
    for(int i=0;i<n*4;i++){
        if(V[i]!=-1)cout<<V[i]<<" ";
    }
}