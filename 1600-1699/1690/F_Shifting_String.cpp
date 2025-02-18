#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
vi p;
vi B;
vector<string> aux;
string auxx;
string s;
void dfs(int u){
    if(B[u]==1)return;
    B[u]=1;
    auxx.push_back(s[u]);
    dfs(p[u]);
}
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int mcm(int a,int b){
    if(a<b)swap(a,b);
    return (a/gcd(a,b))*b;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        aux.clear();
        cin>>s;
        p=vi(n);
        for(int i=0;i<n;i++)cin>>p[i],p[i]--;
        B=vi(n,0);
        int sol=1;
        for(int i=0;i<n;i++){
            
            if(B[i]==0){
                auxx="";
                dfs(i);
                string auxxx=auxx;
                int c=0;
                while(true){
                    c++;
                    auxxx=auxxx.substr(1,auxx.size())+auxxx.substr(0,1);
                    if(auxxx==auxx)break;
                }
                sol=mcm(sol,c);
            }
        }
        cout<<sol<<"\n";
    }
}