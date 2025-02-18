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
        set<char> S;
        int x;
        cin>>x;
        while(x--){
            char e;
            cin>>e;
            S.insert(e);
        }
        int last=0;
        int sol=0;
        for(int i=0;i<n;i++){
            if(S.count(s[i])){
                sol=max(sol,i-last);
                last=i;
            }
        }
        cout<<sol<<"\n";
    }
}