#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        k*=2;l*=2;
        vi V(n);
        for(int& i : V){
            cin>>i;
            i*=2;
        }
        int sol = V[0];
        int pos = 0;
        int S = 0;
        for(int i=1;i<n;i++){
            int next_pos = min(l,min(V[i]+sol,max(pos+k,(V[i]-sol+pos+k)/2)));
            sol += max(0LL,next_pos-pos-k);
            S += min(k,next_pos-pos);
            pos=next_pos;
        }
        S += min(k,l-pos);
        cout<<((l-S+V[0]))<<"\n";
        
    }
}