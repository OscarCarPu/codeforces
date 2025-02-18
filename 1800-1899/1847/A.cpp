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
        vi V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        vi a;
        for(int i=1;i<n;i++){
            a.push_back(abs(V[i]-V[i-1]));
        }
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=0;i<n-k;i++){
            sum+=a[i];
            //cout<<a[i]<<" ";
        }
        cout<<sum<<"\n";
    }
}

