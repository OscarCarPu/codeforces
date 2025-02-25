#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

const int MOD =1e9+7;

int calc(int n,int p){
    vi V;
    while(n){
        V.push_back(n%p);
        n/=p;
    }
    int sol = 0;
    for(int i=0;i<V.size();i++){
        sol = (sol*p + V[i])%MOD;
    }
    return sol;
}

int mulMod(int a, int p){
    if(p==1)return a;
    int x = mulMod(a,p/2);
    x*=2;
    if(p%2)x+=a;
    x%=MOD;
    return x;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin >> n >> k;

        if(n==1){
            cout<<(k-1)%MOD<<"\n";
            continue;
        }
        
        int sol = 0;
        int sq = Math.floor(Math.sqrt(n));
        
        for(int i=2; i<=min(k,sq); i++){
            sol+=calc(n,i);
            sol%=MOD;
        }
        
        int I = (n-sq+2)*(n+sq+1)/2;
        int res = 
        
        
        if(k>n)sol += mulMod(n,k-n);
        sol%=MOD;
        
        cout<<sol<<"\n";
    }
    return 0;
}