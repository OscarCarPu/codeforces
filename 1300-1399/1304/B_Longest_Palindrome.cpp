#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    set<string> S;
    vector<string> V(n);
    for(int i=0;i<n;i++){
        cin>>V[i];
        S.insert(V[i]);
    }
    vector<string> l,r;
    string mid="";
    for(int i=0;i<n;i++){
        string t=V[i];
        reverse(t.begin(),t.end());
        if(t==V[i]){
            mid=t;
        }
        else if(S.count(t)){
            l.push_back(V[i]);
            r.push_back(t);
            S.erase(V[i]);
            S.erase(t);
        }
    }
    cout<<l.size()*m*2+mid.size()<<"\n";
    for(string s : l)cout<<s;
    cout<<mid;
    reverse(r.begin(),r.end());
    for(string s : r)cout<<s;
}