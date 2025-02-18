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
        int n=s.length();
        vector<int> pos;
        int op=n/2,cl=n/2;
        for(int i=0;i<n;i++){
            if(s[i]=='?')pos.push_back(i);
            if(s[i]=='(')op--;
            if(s[i]==')')cl--;
        }
        for(int i=0;i<pos.size();i++){
            if(i<op)s[pos[i]]='(';
            else s[pos[i]]=')';
        }
        bool ok=true;
        if(op>0 and cl>0){
            swap(s[pos[op-1]],s[pos[op]]);
            int bal=0;
            for(char c : s){
                if(c=='(')bal++;
                else bal--;
                if(bal<0)break;
            }
            if(bal==0)ok=false;
        }
        if(ok)cout<<"YES\n";
        else cout<<"NO\n";
    }
}