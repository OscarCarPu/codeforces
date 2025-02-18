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
        int n;
        cin>>n;
        vi V(n);
        int ma=0,idx=-1;
        for(int i=0;i<n;i++){
            cin>>V[i];
            if(V[i]>ma){
                ma=V[i];
                idx=i;
            }
        }
        swap(V[0],V[idx]);
        sort(V.begin()+1,V.end());
        if(V[0]!=V[1]){
            cout<<"YES\n";
            for(int i : V)cout<<i<<" ";
            cout<<endl;
        }
        else cout<<"NO\n";
    }
}

