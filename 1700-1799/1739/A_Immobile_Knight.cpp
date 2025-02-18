#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define vb vector<bool>
const int mod=1e9+7;
struct edge{
    int u,v,w;
};
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int mcm(int a,int b){
    return (a*b)/(gcd(a,b));
}
int poW(int a,int p){
    if(p==0)return 1;
    if(p==1)return a;
    return poW(a*a,p/2)*(p%2==1?a:1);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>3 or m>3){
            cout<<"1 1\n";
        }
        else if(n>=2 and m>=2){
            cout<<"2 2\n";
        }
        else cout<<"1 1\n";
    }
}