#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN=1e6;
int  n1[MAXN],n0[MAXN];
const int mod=1e9+7;
int N1(int i,int j){
    return n1[j]-n1[i-1];
}
int N0(int i,int j){
    return n0[j]-n0[i-1];
}
int poW(int a,int p){
    if(p==0)return 1LL;
    if(p==1)return a;
    return (poW(a*a%mod,p/2)%mod)*(p%2?a:1LL)%mod;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        n1[i+1]+=n1[i];
        char e;
        n0[i+1]+=n0[i];
        cin>>e;
        if(e=='1')n1[i+1]++;
        else n0[i+1]++;
    }
    while(q--){
        int i,j;
        cin>>i>>j;
        cout<<(poW(2,N1(i,j))-1LL)*poW(2,N0(i,j))%mod<<"\n";
    }
}