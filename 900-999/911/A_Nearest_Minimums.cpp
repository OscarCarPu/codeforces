#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int m=LLONG_MAX;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        m=min(m,a[i]);
    }
    int sol=LLONG_MAX;
    int p=-1;
    for(int i=0;i<n;i++){
        if(a[i]==m){
            if(p==-1)p=i;
            else{
                sol=min(sol,i-p);
                p=i;
            }
        }
    }
    cout<<sol;
}