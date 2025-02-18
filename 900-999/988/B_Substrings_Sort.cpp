#include <bits/stdc++.h>
using namespace std;
#define int long long
bool comp(string a,string b){
    return a.length()<b.length();
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s.begin(),s.end(),comp);
    for(int i=0;i<n-1;i++){
        if(s[i+1].find(s[i])==string::npos){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    for(auto a : s)cout<<a<<"\n";
}