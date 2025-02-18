#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int p;
        cin>>p;
        int cost=0;
        for(char e : s){
            cost+=(e-'a'+1);
        }
        for(char e='z';e>='a';e--){
            for(int i=0;i<s.length();i++){
                if(cost>p and s[i]==e){
                    cost-=(s[i]-'a'+1);
                    s[i]='+';
                }
            }
            if(cost<=p)break;
        }
        for(char e : s){
            if(e=='+')continue;
            cout<<e;
        }
        cout<<"\n";
    }
}