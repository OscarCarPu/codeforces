#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string aux="Timur";
    sort(aux.begin(),aux.end());
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s==aux)cout<<"YES\n";
        else cout<<"NO\n";
    }
}