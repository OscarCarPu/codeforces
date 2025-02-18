#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i=s.find("11");
        int j=s.rfind("00");
        if(i!=-1 and j!=-1 and i<j){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
}