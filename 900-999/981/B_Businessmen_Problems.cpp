#include <bits/stdc++.h>
using namespace std;
#define int long long
map<int,int> M;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--){
        int i,x;
        cin>>i>>x;
        M[i]=x;
    }
    cin>>n;
    while(n--){
        int i,x;
        cin>>i>>x;
        if(M.count(i))M[i]=max(M[i],x);
        else M[i]=x;
    }
    int sol=0;
    for(auto it : M){
        sol+=it.second;
    }
    cout<<sol;
}