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

const int mod=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int totalg;
        set<int> S;
        int ma=0;
        cin>>totalg;
        ma=totalg;
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            totalg=gcd(totalg,x);
            ma=max(ma,x);
        }
        cout<<ma/totalg<<"\n";

    }
    
}