#include <bits/stdc++.h>
using namespace std;
#define int long long
int sum(int n){
    int sol=0;
    while(n>0){
        sol+=n%10;
        n/=10;
    }
    return sol;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int ans=0,d=0;
    while(n%10==9){
        ans+=9;
        n/=10;
    }
    if(n){
        while(n){
            ans+=n%10;
            d++;
            n/=10;
        }
    }
    cout<<ans+(max(0LL,d-1)*9);
}