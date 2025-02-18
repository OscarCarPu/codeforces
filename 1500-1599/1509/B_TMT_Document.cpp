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
        vector<int> T,M;
        for(int i=0;i<n;i++){
            char e=s[i];
            if(e=='T')T.push_back(i);
            else M.push_back(i);
        }
        if(T.size()!=M.size()*2)cout<<"NO\n";
        else{
            bool sol=true;
            for(int i=0;i<n/3;i++){
                if(T[i]>=M[i] or T[i+n/3]<=M[i])sol=false;
            }
            if(sol)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}