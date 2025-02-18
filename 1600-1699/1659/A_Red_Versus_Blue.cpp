#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int p=r/(b+1),q=r%(b+1);
        for(int i=0;i<q;i++)cout<<string(p+1,'R')<<"B";
        for(int i=q;i<b;i++)cout<<string(p,'R')<<"B";
        cout<<string(p,'R')<<"\n";
    }
}