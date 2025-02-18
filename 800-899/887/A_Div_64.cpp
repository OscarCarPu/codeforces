#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int cont=0;
    bool one=false;
    for(char e : s){
        if(e=='1')one=true;
        else if(one)cont++;
    }
    if(cont>5)cout<<"yes";
    else cout<<"no";
}