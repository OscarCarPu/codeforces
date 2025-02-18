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
        int n;
        cin>>n;
        vi V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        int ref=(n+1)/2;
        int high=(n+1)/2;
        int low=1;
        int res=high+1;
        while(high>=low){
            int mid=(high+low)/2;
            int act=mid;
            int obj=(n+1)-act;
            bool can=false;
            for(int i=0;i<n;i++){
                if(V[i]==act)act++;
                if(act==obj+1)can=true;
            }
            if(can){
                res=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        if(n%2==0)res--;
        cout<<(n/2)-(ref-res)<<"\n";
    }
}

