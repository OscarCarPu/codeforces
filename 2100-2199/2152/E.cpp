#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin>>n;
    vi ord(n*n+1);
    iota(all(ord),0);
    auto query = [&](vi v) {
        cout<<"? "<<sz(v);
        for (auto &x : v)cout<<" "<<x+1;
        cout<<endl;
        int y;
        cin>>y;
        v.resize(y);
        for (auto &x : v)cin>>x,x--;
        return v;
    };
    vi dp(n*n+1,n);
    for(int i=0;i<n;i++){
        auto cur_ord = query(ord);
        if (sz(cur_ord) > n){
            cout<<"!";
            for (int i=0;i<n+1;i++)cout<<" "<<cur_ord[i]+1;
            cout<<endl;
            return;
        }
        vi new_ord;
        for (auto &x : ord){
            if (!binary_search(all(cur_ord),x)) {
                new_ord.push_back(x);
            } else dp[x]=i;
        }
        ord=new_ord;
    }
    int cur = n;
    vi ans;
    for (int i=n*n;i>=0;i--){
        if(dp[i]==cur){
            ans.push_back(i);
            cur--;
        }
    }
    if(sz(ans)!=n+1){
        cerr<<cur<<endl;
        for(auto &x : dp)cerr<<x<<" ";
        cerr<<endl;
    }
    reverse(all(ans));
    assert(sz(ans) == n+1);
    cout<<"!";
    for(auto &x : ans)cout<<" "<<x+1;
    cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)solve();
}
