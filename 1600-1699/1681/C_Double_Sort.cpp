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
        vector<int> V(n),B(n);
        for(int i=0;i<n;i++)cin>>V[i];
        for(int i=0;i<n;i++)cin>>B[i];
        vector<pair<int,int>>sol;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(V[i]>V[j]){
                    sol.push_back({i,j});
                    swap(V[i],V[j]);
                    swap(B[i],B[j]);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(B[i]>B[j] and V[i]==V[j]){
                    sol.push_back({i,j});
                    swap(V[i],V[j]);
                    swap(B[i],B[j]);
                }
            }
        }
        bool ans=true;
        for(int i=1;i<n;i++){
            if(B[i]<B[i-1])ans=false;
        }
        if(ans){
            cout<<sol.size()<<"\n";
            for(auto i : sol){
                cout<<i.first+1<<" "<<1+i.second<<"\n";
            }
        }
        else cout<<"-1\n";
    }
}