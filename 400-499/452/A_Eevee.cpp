#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<string> E7={"jolteon","flareon","leafeon","umbreon","glaceon","sylveon"};
string e6="espeon";
string e8="vaporeon";
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==6)cout<<e6;
    else if(n==8)cout<<e8;
    else{
        for(int i=0;i<6;i++){
            bool aux=true;
            for(int j=0;j<7;j++){
                if(s[j]=='.')continue;
                if(s[j]!=E7[i][j])aux=false;
            }
            if(aux){
                cout<<E7[i];
                return 0;
            }
        }
    }
}