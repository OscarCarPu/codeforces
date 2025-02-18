#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,b,p;
    cin>>n>>b>>p;
    int aux=n;
    int s=0;
    while(aux>1){
        s+=(aux/2)*b*2+(aux/2);
        aux-=aux/2;
    }
    cout<<s<<" "<<n*p;
}