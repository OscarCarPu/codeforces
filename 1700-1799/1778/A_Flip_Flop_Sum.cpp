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
        int n;
        cin>>n;
        bool tog=false;
        bool o=false;
        int bef;
        cin>>bef;
        if(bef==-1)o=true;
        int su=bef;
        for(int i=1;i<n;i++){
            int act;
            
            cin>>act;
            su+=act;
            if(act==-1 and act==bef)tog=true;
            if(act==-1)o=true;
            bef=act;
        }
        if(tog)cout<<su+4<<"\n";
        else if(o)cout<<su<<"\n";
        else cout<<su-4<<"\n";
    }
}

