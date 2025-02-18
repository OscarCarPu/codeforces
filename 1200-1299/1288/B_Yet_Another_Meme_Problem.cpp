#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int aux=b+1;
        int d=0;
        while(aux>0){
            d++;
            aux/=10;
        }
        d--;
        cout<<d*a<<"\n";
    }
}