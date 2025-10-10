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
    int n;
    cin>>n;
    set<int> s;
    while(n--){
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<sz(s)<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)solve();
}
