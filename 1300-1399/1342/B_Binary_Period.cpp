#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        bool one=false,zero=false;
        for(char e : a){
            if(e=='1')one=true;
            if(e=='0')zero=true;
        }
        string b;
        if(one and zero){
            for(char e : a){
                b.push_back('0');
                b.push_back('1');
            }
        }
        else{
            b=a;
        }
        cout<<b<<"\n";
    }
}