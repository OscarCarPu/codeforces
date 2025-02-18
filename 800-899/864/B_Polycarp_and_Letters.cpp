#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sol=0;
    set<char> S;
    for(int i=0;i<n;i++){
        if(s[i]>='A' and s[i]<='Z'){
            sol=max(sol,(int)S.size());
            S.clear();
        }
        else{
            S.insert(s[i]);
        }
    }
    sol=max(sol,(int)S.size());
    cout<<sol;
}