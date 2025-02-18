#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int conta=0;
        bool sol=true;
        bool b=false;
        for(char e : s){
            if(e=='A')conta++,b=false;
            else{
                if(conta<=0)sol=false;
                else conta--;
                b=true;
            }
        }
        if(b==false)sol=false;
        if(sol)cout<<"YES\n";
        else cout<<"NO\n";
    }
}