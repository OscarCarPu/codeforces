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
        int ans=0;
        string a,b;
        cin>>a>>b;
        map<char,int> M;
        int cn=0;
        for(int i=0;i<n;i++){
            if(!M.count(a[i])){
                M[a[i]]=cn++;
            }
        }
        for(int bit=0;bit<(1<<10);bit++){
            if(__builtin_popcount(bit)==k){
                int sum=0;
                int seg=0;
                for(int i=0;i<n;i++){
                    if(a[i]==b[i] or ((1<<M[a[i]])&bit))seg++;
                    else{
                        sum+=(seg*(seg+1)/2);
                        seg=0;
                    }
                }
                sum+=(seg*(seg+1)/2);
                ans=max(ans,sum);
            }
            
        }
        cout<<ans<<"\n";
    }
}

