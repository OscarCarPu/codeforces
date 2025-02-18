#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n*=2;
        vector<int> odd,even;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2)odd.push_back(i+1);
            else even.push_back(i+1);
        }
        vector<pair<int,int>> ans;
        for(int i=0;i+1<odd.size();i+=2){
            ans.push_back({odd[i],odd[i+1]});
        }
        for(int i=0;1+i<even.size();i+=2){
            ans.push_back({even[i],even[i+1]});
        }
        for(int i=0;i<(n/2)-1;i++){
            cout<<ans[i].first<<" "<<ans[i].second<<"\n";
        }
    }
}