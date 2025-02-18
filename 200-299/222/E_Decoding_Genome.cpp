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
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a,p/2)*(p%2?a:1LL);
}

int poWM(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poWM(a*a%MOD,p/2)*(p%2?a:1LL)%MOD;
}

vvi B;

vvi multMatrix(vvi A,vvi B){
    vvi C(A.size(),vi(B[0].size(),0));
    for(int i=0;i<A.size();i++){
        for(int j=0;j<B[0].size();j++){
            for(int k=0;k<A[0].size();k++){
                C[i][j]+=A[i][k]*B[k][j];
                C[i][j]%=MOD;
            }
        }
    }
    return C;
}

vvi poWMatrix(vvi M,int p){;
    if(p==0){
        vvi I(M.size(),vi(M.size(),0));
        for(int i=0;i<M.size();i++)I[i][i]=1;
        return I;
    }
    if(p==1)return M; 
    M=poWMatrix(M,p/2);
    M=multMatrix(M,M);
    if(p%2==1)M=multMatrix(M,B);
    return M;
}

int upDiv(int a,int b){
    return (a+b-1)/b;
}

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int toN(char a){
    if(a>='a' && a<='z')return a-'a';
    return a-'A'+26;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int n,m,k;
        cin>>n>>m>>k;
        B=vvi(m,vi(m,1));
        for(int i=0;i<k;i++){
            char a,b;
            cin>>a>>b;
            B[toN(a)][toN(b)]=0;
        }
        vvi M=poWMatrix(B,n-1);
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                ans+=M[i][j];
                ans%=MOD;
            }
        }
        cout<<ans<<"\n";
}

