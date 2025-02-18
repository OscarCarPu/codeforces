#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int bef;
        cin>>bef;
        bool sol=true;
        for(int i=1;i<n;i++){
            int act=0;
            cin>>act;
            if(act<bef)sol=false;
            bef=act;
        }
        if(sol)cout<<"NO";
        else cout<<"YES";
        cout<<"\n";
    }
}