#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool act=false,b=false,r=false,pos=true;
        for(int i=0;i<n;i++){
            if(act){
                if(s[i]=='B')b=true;
                if(s[i]=='R')r=true;
                if(s[i]=='W'){
                    if(!b or !r)pos=false;
                    act=false;
                    b=false;
                    r=false;
                }
            }
            else{
                if(s[i]=='B'){
                    act=true;
                    b=true;
                }
                if(s[i]=='R'){
                    act=true;
                    r=true;
                }
            }
        }
        if(act){
            if(!b or !r)pos=false;
        }
        if(pos)cout<<"YES\n";
        else cout<<"NO\n";
    }
}