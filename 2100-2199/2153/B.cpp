#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

const int MOD = 1e9+7;

void solve() {
    int x,y,z;
    cin>>x>>y>>z;
    bool can = true;
    for(int bit=0;bit<64;bit++){
        if((((x>>bit)&1)+((y>>bit)&1)+((z>>bit)&1))==2)can=false;
    }
    if(can)cout<<"YES\n";
    else cout<<"NO\n";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)solve();
}
