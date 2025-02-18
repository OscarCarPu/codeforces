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
        int n,m;
        cin>>n>>m;
        bool aux=false;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>a>>b;
            if(a==b and m%2==0) aux=true;
            cin>>b; 
        }
        if(aux)cout<<"YES\n";
        else cout<<"NO\n";
    }
}