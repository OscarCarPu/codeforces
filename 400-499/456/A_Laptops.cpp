#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a=0;
    vector<pair<int,int>>V(n);
    for(int i=0;i<n;i++){
        cin>>V[i].first>>V[i].second;
    }
    sort(V.begin(),V.end());
    for(int i=1;i<n;i++){
        if(V[i].second<V[i-1].second){
            cout<<"Happy Alex\n";
            return 0;
        }
    }
    cout<<"Poor Alex\n";
} 