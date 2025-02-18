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


int upDiv(int a,int b){
    return (a+b-1)/b;
}

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

void mult_matrix(vvi &a,vvi &b){
    vvi c(a.size(),vi(b[0].size(),0));
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b[0].size();j++){
            for(int k=0;k<a[0].size();k++){
                c[i][j]+=a[i][k]*b[k][j];
                c[i][j]%=MOD;
            }
        }
    }
    a=c;
}

void pow_matrix(vvi& a,int p){
    vvi b=a;
    while(p){
        if(p%2){
            mult_matrix(a,b);
        }
        mult_matrix(b,b);
        p/=2;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vvi a(m,vi(m,0));
    a[0][0]=1;
    a[0][m-1]=1;
    for(int i=1;i<m;i++){
        a[i][i-1]=1;
    }
    if(n<m)cout<<"1\n";
    else{
        pow_matrix(a,n-m);
        int sol=0;
        for(int i=0;i<m;i++){
            sol+=a[0][i];
            sol%=MOD;
        }
        cout<<sol<<"\n";
    }
}

