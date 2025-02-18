#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<int,int> M;
    int m=0;
    int nn=n;
    while(nn--){
        int x;
        cin>>x;
        M[x]++;
        if(M[x]>m){
            m=M[x];
        }
    }
    if(m>(n+1)/2){
        cout<<"NO\n";
    }
    else cout<<"YES\n";
}