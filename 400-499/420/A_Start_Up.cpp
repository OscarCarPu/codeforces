#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    set<char> S={'A','H','I','M','O','T','U','X','Y','V','W'};
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(!S.count(s[i]) or s[i]!=s[n-i-1]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}