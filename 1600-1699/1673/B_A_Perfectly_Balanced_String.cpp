#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> F;
int sum(int i,int j,int x){
    if(i==0)return F[x][j];
    else return F[x][j]-F[x][i-1];
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool sol=true;
        int n=s.length();
        vector<int> p(n,-1);
        vector<int> l(40,-1);
        set<int> Exist;
        F=vector<vector<int>>(40,vector<int>(n,0));
        for(int i=0;i<n;i++){
            int e=s[i]-'a';
            p[i]=l[e];
            l[e]=i;
            F[e][i]++;
            Exist.insert(e);
            if(i>0){
                for(int j=0;j<40;j++){
                    F[j][i]+=F[j][i-1];
                }
            }
        }
        for(int i=0;i<n;i++){
            if(p[i]!=-1){
                for(int j : Exist){
                    if(sum(p[i],i,j)==0)sol=false;
                }
            }
        }
        if(sol)cout<<"YES\n";
        else cout<<"NO\n";
    }
}