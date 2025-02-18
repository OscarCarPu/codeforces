#include <bits/stdc++.h>

using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define vb vector<bool>
#define vc vector<char>
#define vvc vector<vc>
#define vvb vector<vb>
#define si set<int>
#define mii map<int,int>

const int MOD=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int cnt=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if((x-(i%k))%k!=0)cnt++;
        }
        if(cnt==0)cout<<"0\n";
        else if(cnt==2)cout<<"1\n";
        else cout<<"-1\n";
    }
}

