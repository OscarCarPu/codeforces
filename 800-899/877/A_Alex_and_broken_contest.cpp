#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int sol=0;
    vector<string> F={"Danil","Olya","Slava","Ann","Nikita"};
    for(int i=0;i<5;i++){
        for(int j=0;j<=(int)s.length()-(int)F[i].length();j++){
            if(s.substr(j,F[i].length())==F[i])sol++;
        }
    }
    if(sol!=1)cout<<"NO";
    else cout<<"YES";
}