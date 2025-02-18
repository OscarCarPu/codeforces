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
        int x;
        cin>>x;
        int act=5;
        int a=0,b=0;
        while(x){
            //cout<<a<<" "<<b<<endl;
            a+=min(x,act/2-1);
            x-=min(x,act/2-1);
            b+=min(x,act/2);
            x-=min(x,act/2);
            b+=min(x,(act+1)/2);
            x-=min(x,(act+1)/2);
            a+=min(x,(act+1)/2+1);
            x-=min(x,(act+1)/2+1);
            act+=8;
        }
        cout<<a<<" "<<b<<endl;
    }
}

