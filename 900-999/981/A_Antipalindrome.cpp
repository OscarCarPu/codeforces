#include <bits/stdc++.h>
using namespace std;
bool is(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[s.length()-1-i]) return false;
    }
    return true;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    if(is(s)){
        for(int i=s.length()-1;i>0;i--){
            if(s[i]!=s[i-1]){
                cout<<s.length()-1;
                return 0;
            }
        }
        cout<<0;
    }
    else cout<<s.length();
}