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
        int c=0;
        int sol=0;
        for(int i=0;i<(int)s.length();i++){
            if(s[i]=='R'){
                sol=max(sol,i+1-c);
                c=i+1;
            }
        }
        sol=max(sol,(int)s.length()+1-c);
        cout<<sol<<"\n";
    }
}