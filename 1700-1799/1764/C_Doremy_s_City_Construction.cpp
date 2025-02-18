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
int calc(int a,int b){
    return a*b;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi V(n);
        for(int i=0;i<n;i++)cin>>V[i];
        sort(V.begin(),V.end());
        int sol=n/2;
        int bef=V[0];
        for(int i=1;i<n;i++){
            if(V[i]!=bef){
                sol=max(sol,calc(i,n-i));
            }
            bef=V[i];
        }
        cout<<sol<<"\n";
    }
}