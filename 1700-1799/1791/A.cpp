#include <bits/stdc++.h>

using namespace std;

#define int long long
#define vi vector<int>

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        string w = "codeforces";
        if(w.find(c)<w.length()){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}