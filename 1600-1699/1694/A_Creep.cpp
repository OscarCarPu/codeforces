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
        while(a>0 and b>0){
            cout<<"01";
            a--;
            b--;
        }
        while(a>0){
            cout<<"0";
            a--;
        }
        while(b>0){
            cout<<"1";
            b--;
        }
        cout<<"\n";
    }
}