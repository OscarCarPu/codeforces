#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int f,l;
        vi V(n);
        int sol=0;
        for(int i=0;i<n;i++){
            cin>>V[i];
            if(i)sol=max(sol,V[i-1]-V[i]);
        }
        sol=max(sol,V[n-1]-V[0]);
        for(int i=0;i<n;i++){
            if(i)sol=max(V[i]-V[0],sol);
            if(i!=n-1)sol=max(sol,V[n-1]-V[i]);
        }
        cout<<sol<<"\n";
    }
}