#include <bits/stdc++.h>
using namespace std;
#define int long long
int d(string a,string b){
    int n=a.length();
    int cost=0;
    for(int i=0;i<n;i++){
        cost+=abs(a[i]-b[i]);
    }
    return cost;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> S(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        int sol=LLONG_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sol=min(sol,d(S[i],S[j]));
            }
        }
        cout<<sol<<"\n";
    }
}