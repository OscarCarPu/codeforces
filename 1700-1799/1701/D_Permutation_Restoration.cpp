#include <bits/stdc++.h>
using namespace std;
#define int long long
int upDiv(int a,int b){
    return (a+b-1)/b;
}
bool si(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b){
    return abs(a.first.first-a.first.second)<=abs(b.first.first-b.first.second);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<pair<pair<int,int>,int>>N(n);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            N[i-1].second=i;
            if(x==0){
                N[i-1].first.first=i+1;
                N[i-1].first.second=n;
                continue;
            }
            N[i-1].first.first=upDiv(i,x+1);
            N[i-1].first.second=i/x;
        }
        sort(N.begin(),N.end(),si);
        
        
        cout<<"\n";
    }
 }