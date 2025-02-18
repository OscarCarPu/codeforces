#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int n;
    cin>>s>>n;
    if(s[0]=='f'){
        if(n==1)cout<<"L";
        else cout<<"R";
    }
    else{
        if(n==1)cout<<"R";
        else cout<<"L";
    }
}