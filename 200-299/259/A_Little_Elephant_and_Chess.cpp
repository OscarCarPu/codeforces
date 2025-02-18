#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    bool sol=true;
    for(int i=0;i<8;i++){
        cin>>s;
        for(int j=1;j<8;j++){
            if(s[j]==s[j-1])sol=false;
        }
    }
    if(sol)cout<<"YES";
    else cout<<"NO";
}