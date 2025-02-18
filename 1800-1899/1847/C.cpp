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

vi V;
int n;

int max_xor(){
    int maxx=0,mask=0;
    si se;
    for(int i=30;i>=0;i--){
        mask |= (1LL<<i);
        for(int i=0;i<=n;i++){
            se.insert(V[i]&mask);
        }
        int newMax=maxx | (1LL<<i);
        for(auto it: se){
            if(se.count(newMax^it)){
                maxx=newMax;
                break;
            }
        }
        se.clear();
    }   
    return maxx;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        V=vi (n+1);
        V[0]=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            V[i]=V[i-1];
            V[i]^=x;
        }
        cout<<max_xor()<<"\n";
    }
}

