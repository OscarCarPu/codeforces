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
    int i=0;
    int a=0;
    for(char e : s){
        if(e=='I')i++;
        if(e=='A')a++;
    }
    if(i==1){
        cout<<i;
    }
    else if(i==0){
        cout<<a;
    }
    else cout<<0;
}