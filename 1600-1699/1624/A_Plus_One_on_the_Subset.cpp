#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
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
        int M=0,m=1e9;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            M=max(M,x);
            m=min(m,x);
        }
        cout<<M-m<<"\n";
    }
}