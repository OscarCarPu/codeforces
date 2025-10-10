#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

const int MOD = 1e9+7;

int three(int a,int b,int c){
    return max({a,b,c})-min({a,b,c});
}

int linear(vi a){
    int n=sz(a);
    if(n==0)return 0;
    vi dp(n+1,LLONG_MAX);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        if(i>=2 and dp[i-2]!=LLONG_MAX){
            dp[i]=dp[i-2]+abs(a[i-1]-a[i-2]);
        }
        if(i>=3 and dp[i-3]!=LLONG_MAX){
            dp[i]=min(dp[i],dp[i-3]+three(a[i-1],a[i-2],a[i-3]));
        }
    }
    return dp[n];
}

void solve() {
    int n;
    cin>>n;
    vi a(n);
    for(int &i : a)cin>>i;
    int sol=linear(a);

    vi b=a;
    b.erase(b.begin());
    b.pop_back();
    int cost=linear(b);
    if(cost!=LLONG_MAX){
        sol=min(sol,cost+abs(a[n-1]-a[0]));
    }

    if(n>3){
        b=a;
        b.erase(b.begin());
        b.pop_back();
        b.pop_back();
        cost=linear(b);
        if(cost!=LLONG_MAX){
            sol=min(sol,cost+three(a[n-2],a[n-1],a[0]));
        }

        b=a;
        b.erase(b.begin());
        b.erase(b.begin());
        b.pop_back();
        cost=linear(b);
        if(cost!=LLONG_MAX){
            sol=min(sol,cost+three(a[n-1],a[0],a[1]));
        }
    }
     
    cout<<sol<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)solve();
}
