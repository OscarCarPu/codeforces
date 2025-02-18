#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int k;
    cin>>k;
    set<char> S;
    for(char e : s)S.insert(e);
    if(s.size()<k)cout<<"impossible";
    else cout<<max(0,k-(int)S.size());
}