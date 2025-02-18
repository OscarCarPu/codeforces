#include <bits/stdc++.h>
using namespace std;
#define int long long
int upDiv(int a,int b){
    return (a+b-1)/b;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cost=LLONG_MAX;
        for(int i=0;i*i-i<=n;i++){
            int aux=i;
            aux+=upDiv(n-1-i,aux+1);
            cost=min(cost,aux);
        }
        cout<<cost<<"\n";
    }
}