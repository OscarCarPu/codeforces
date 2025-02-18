#include <bits/stdc++.h>
using namespace std;
#define int long long
bool is(int n){
    bool zero=true;
    int z=0,o=0;
    while(n>0){
        if(n%2){
            zero=false;
            o++;
        }
        else{
            if(zero==false)return false;
            z++;
        }
        n/=2;
    }
    if(o-1==z)return true;
    return false;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sol=1;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(is(i))sol=max(sol,i);
            if(is(n/i))sol=max(sol,n/i);
        }
    }
    cout<<sol;
}