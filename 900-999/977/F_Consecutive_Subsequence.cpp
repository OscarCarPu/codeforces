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
int fact[N],frev[N],s[N],l[N];
bool P[N];
vi primes;
vvi G;
vb B;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vi V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    mii M;
    vi P(n,1);
    for(int i=0;i<n;i++){
        M[V[i]]=i;
        if(M.count(V[i]-1)){
            P[i]=max(P[i],P[M[V[i]-1]]+1);
        }
    }
    int sol=0;
    int aux=-1;
    M.clear();
    for(int i=0;i<n;i++){
        if(P[i]>sol){
            sol=P[i];
            aux=V[i];
        }
    }
    cout<<sol<<"\n";
    aux=aux-sol+1;
    for(int i=0;i<n;i++){
        if(V[i]==aux and sol>0){
            cout<<i+1<<" ";
            sol--;
            aux++;
        }
    }
}
3 2 1 4 5
1 2 3 4 5