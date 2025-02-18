#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        set<char> S;
        char e;
        for(int i=0;i<4;i++){
            cin>>e;
            S.insert(e);
        }
        cout<<S.size()-1<<"\n";
    }
}