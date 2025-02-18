#include <bits/stdc++.h>
using namespace std;
#define int long long
int sum[666666];
int SUM(int i,int j){
    return sum[j]-sum[i-1];
}
int n;
int V[666666];
map<pair<int,int>,int> M;
int solve(int i,int j){
    if(M.count({i,j}))return M[{i,j}];
    if(SUM(i,j)>0)return j-i+1;
    if(i==j){
        if(V[i]<0)return -1;
        else return 0;
    }
    int sol=-LLONG_MAX;
    for(int l=i+1;l<=j;l++){
        sol=max(sol,solve(i,l-1)+solve(l,j));
        //if(i==1 and j==n)cout<<solve(i,l-1)+solve(l,j)<<endl;
    }
    M[{i,j}]=sol;
    return sol;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        M.clear();
        for(int i=1;i<=n;i++){
            cin>>V[i];
            sum[i]=V[i]+sum[i-1];
        }
        cout<<solve(1,n)<<"\n";
        
    }
}