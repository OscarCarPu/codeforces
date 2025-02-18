#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y%x==0){
            cout<<"1 "<<y/x<<"\n";
        }
        else cout<<"0 0\n";
    }
}