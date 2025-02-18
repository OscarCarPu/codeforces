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
const int N=1e6+1;
const int LN=LLONG_MAX/10;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int l=0,r=0;
    vi cont(N,0);
    int sl=0,sr=0;
    vi V(n);
    int act=0;
    for(int i=0;i<n;i++)cin>>V[i];
    cont[V[0]]=1;
    act=1;
    while(l<n){
        while(r<n-1){
            if(act==k and cont[V[r+1]]==0)break;
            r++;
            cont[V[r]]++;
            if(cont[V[r]]==1)act++;
            if(sr-sl<r-l)sr=r,sl=l;
            
        }
        cont[V[l]]--;
        if(cont[V[l]]==0)act--;
        l++;
    }
    cout<<sl+1<<" "<<sr+1<<endl;
}
