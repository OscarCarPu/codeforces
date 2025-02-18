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
        int n;
        cin>>n;
        vi a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<a[0]<<"\n";
        }
        else{
            int ans1=0,ans2=0,ma=-LN;
            bool pos=false;
            for(int i=0;i<n;i++){
                ma=max(ma,a[i]);
                if(i%2==0){
                    ans1+=max(0LL,a[i]);
                    if(a[i]>0){
                        pos=true;
                    }
                }
                else{
                    ans2+=max(0LL,a[i]);
                    if(a[i]>0){
                        pos=true;
                    }
                }
            }
            if(!pos){
                cout<<ma<<"\n";
            }
            else cout<<max(ans1,ans2)<<"\n";
        }
    }
}

