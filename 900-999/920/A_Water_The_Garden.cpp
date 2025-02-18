#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int l,n;
        cin>>l>>n;
        int bef;
        cin>>bef;
        int sol=0;
        sol=max(sol,bef);
        for(int i=1;i<n;i++){
            int act;
            cin>>act;
            sol=max(sol,(act-bef+2)/2);
            bef=act;
        }
        sol=max(sol,l-bef+1);
        cout<<sol<<"\n";
    }
}