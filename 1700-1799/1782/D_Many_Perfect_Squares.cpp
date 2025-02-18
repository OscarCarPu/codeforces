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
bool sq(int a){
    int b=sqrt(a);
    return b*b==a;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    //cout<<sq(100)<<" "<<sq(10)<<" "<<sq(0)<<" "<<sq(2)<<" "<<sq(4)<<" "<<sq(8)<<endl;
    while(t--){
        int n;
        cin>>n;
        vi V(n);
        vi x;
        for(int i=0;i<n;i++)cin>>V[i];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                x.push_back(V[j]-V[i]);
            }
        }
        int sol=1;
        
    }
}

