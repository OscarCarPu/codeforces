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
        bool solved=false;
        for(int i=0;i<=n;i++){
            int j=n-i;
            if(i*(i-1)/2+j*(j-1)/2==k){
                cout<<"YES\n";
                solved=true;
                for(int x=0;x<i;x++){
                    cout<<"-1 ";
                }
                for(int x=i;x<n;x++){
                    cout<<"1 ";
                }
                i=n+1;
                cout<<"\n";
                break;
            }
        }
        if(!solved)cout<<"NO\n";
    }
}

