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
const int N=1e6+1;
const int LN=LLONG_MAX/10;

string word="abcdefghijklmnopqrstuvwxyz";

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans;
        int sol=2;
        for(int i=2;i<=n;i++){
            if(n%i!=0){
                sol=i;
                break;
            }
        }
        int cur=0;
        for(int i=0;i<n;i++){
            ans+=word[cur];
            cur++;
            if(cur==sol){
                cur=0;
            }
        }
        cout<<ans<<"\n";
    }
}

