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

vi primos;

void initPrimos(){
    vb aux_primos(N,true);
    for(int i=2;i<N;i++){
        if(aux_primos[i]){
            primos.push_back(i);
            for(int j=i*i;j<N;j+=i){
                aux_primos[j]=false;
            }
        }
    }
}

int poW(int a,int p){
    if(p<0)return 0;
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a,p/2)*(p%2?a:1LL);
}

int poWM(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poWM(a*a%MOD,p/2)*(p%2?a:1LL)%MOD;
}


int upDiv(int a,int b){
    return (a+b-1)/b;
}

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    cout<<4*3*poW(4,n-3)*2+4*poW(4,n-4)*3*3*(n-3);
}

