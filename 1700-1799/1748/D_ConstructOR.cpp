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
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,d;
        cin>>a>>b>>d;
        int c=(a|b);
        int x=c%d;
        //cout<<c<<endl;
        bool can=false;
        for(int j=0;j<1e7;j++){
            if(((d*j)&c)==c){
                cout<<(d*j)<<"\n";
                can=true;
                break;
            }
        }
        if(!can)cout<<"-1\n";
    }
}