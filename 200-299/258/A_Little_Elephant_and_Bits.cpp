#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    bool done=false;
    for(int i=0;i<s.length();i++){
        if(done==false and (s[i]=='0' or i==s.length()-1)){
            done=true;
            continue;
        }
        cout<<s[i];
    }
}