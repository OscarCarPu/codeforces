#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>> V(n);
    for(int i=0;i<n;i++){
        cin>>V[i].first>>V[i].second;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(V[i].first+V[i].second==V[j].first and V[j].first+V[j].second==V[i].first){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}