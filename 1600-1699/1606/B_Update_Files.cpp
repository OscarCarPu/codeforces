#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        n--;
        int p=1;
        int a=0;
        int d=0;
        while(p<k){
            a+=p;
            d++;
            if(a>=n){
                break;
            }
            p*=2;
        }
        if(a>=n){
            cout<<d<<"\n";
            continue;
        }
        n-=a;
        p=k;
        cout<<d+(n+p-1)/p<<"\n";

    }
}