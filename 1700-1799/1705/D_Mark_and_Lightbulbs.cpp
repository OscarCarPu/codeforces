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
        string s,t;
        cin>>s>>t;
        if(s[0]!=t[0] or s[n-1]!=t[n-1]){
            cout<<"-1\n";
            continue;
        }
        int sol=0;
        vector<int> ps,pt;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1])ps.push_back(i);
            if(t[i]!=t[i-1])pt.push_back(i);
        }
        if(ps.size()!=pt.size()){
            cout<<"-1\n";
            continue;
        }
        for(int i=0;i<ps.size();i++){
            sol+=abs(ps[i]-pt[i]);
        }
        cout<<sol<<"\n";
    }
}