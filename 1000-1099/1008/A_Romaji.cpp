#include <bits/stdc++.h>
using namespace std;
bool isChar(char e){
    if(e=='a' or e=='e' or e=='i' or e=='o' or e=='u')return true;
    return false;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    bool vowel=false;
    for(int i=0;i<s.length();i++){
                if(vowel){
            if(isChar(s[i])==false){
                cout<<"NO";
                return 0;
            }
            vowel=false;
        }
        if(isChar(s[i])==false and s[i]!='n')vowel=true;

    }
    if(vowel)cout<<"NO";
    else cout<<"YES";
}