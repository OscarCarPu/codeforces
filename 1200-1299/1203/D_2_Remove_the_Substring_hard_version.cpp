#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin>>s>>t;
    int ns=s.length();
    int nt=t.length();
    int r[nt];
    for(int i=nt-1;i>=0;i--) {
        int pos=ns-1;
        if(i+1<nt)pos=r[i+1]-1;
        while(s[pos]!=t[i])pos--;
        r[i]=pos;
    }
    int sol=0;
    int pos=0;
    for(int i=0;i<ns;i++){
        int rpos=ns-1;
        if(pos<nt)rpos=r[pos]-1;
        sol=max(sol,rpos-i+1);
        if(t[pos]==s[i])pos++;
    }
    cout<<sol;
}