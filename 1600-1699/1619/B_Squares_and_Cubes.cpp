#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> S;
        for(int i=1;i*i<=n;i++){
            S.insert(i*i);
        }
        for(int i=1;i*i*i<=n;i++){
            S.insert(i*i*i);
        }
        cout<<S.size()<<"\n";
    }
}