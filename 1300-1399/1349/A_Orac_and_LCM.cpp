#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/(gcd(a,b));
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> suf(n),pre(n);
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    suf[0]=V[0];
    for(int i=1;i<n;i++){
        suf[i]=gcd(suf[i-1],V[i]);
    }
    pre[n-1]=V[n-1];
    for(int i=n-2;i>=0;i--){
        pre[i]=gcd(pre[i+1],V[i]);
    }
    int sol=pre[1];
    for(int i=1;i<n;i++){
        if(i==n-1){
            sol=lcm(sol,suf[i-1]);
            continue;
        }
        sol=lcm(sol,gcd(pre[i+1],suf[i-1]));
    }
    cout<<sol;
}   
/*

*/