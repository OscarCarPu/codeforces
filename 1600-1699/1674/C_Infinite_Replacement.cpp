#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        if(t=="a"){
            cout<<"1\n";
        }
        else{
            bool aux=false;
            for(char e : t)if(e=='a')aux=true;
            if(aux){
                cout<<"-1\n";
            }
            else{
                cout<<1LL*(1LL<<(s.length()))<<"\n";
            }
        }
    }
}