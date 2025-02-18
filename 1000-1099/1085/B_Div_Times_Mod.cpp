#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int sol=LLONG_MAX;
    for(int i=1;i<k;i++){
        if(n%i==0){
            int aux=n/i;
            sol=min(sol,aux*k+i);
        }
    }
    cout<<sol;
}