#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> P(n),V(n);
        for(int i=0;i<n;i++){
            cin>>P[i];
            V[i]=i+1;
        }
        if(n==1){
            cout<<"-1"<<"\n";
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(V[i]==P[i]){
                swap(V[i],V[i+1]);
            }
        }
        if(V[n-1]==P[n-1])swap(V[n-2],V[n-1]);
        for(int i : V)cout<<i<<" ";
        cout<<"\n";
    }
}