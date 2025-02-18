#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int> M;
    map<char,int> F;
    for(int i=0;i<n;i++){
        M[s[i]]=i;
        if(!F.count(s[i]))F[s[i]]=i;
    }
    int o=0;
    int sol=0;
    for(int i=0;i<n;i++){
        if(F[s[i]]==i)o++;
        
        sol=max(sol,o);
        if(M[s[i]]==i)o--;
    }
    if(sol>k)cout<<"YES";
    else cout<<"NO";
}