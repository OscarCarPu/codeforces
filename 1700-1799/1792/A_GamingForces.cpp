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
#define vvb vector<vb>z
#define si set<int>
#define mii map<int,int>

const int mod=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int o=0;
        int n;
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1){
                o++;
                if(o==2){
                    o=0;
                    ans++;
                }
            }
            else{
                ans++;
            }
        }
        ans+=o;
        cout<<ans<<"\n";
    }
}

