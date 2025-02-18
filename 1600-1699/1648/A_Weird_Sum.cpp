#include <bits/stdc++.h>
using namespace std;
#define int long double
struct fin{
    int s;
    int mx,my;
    int x,y;
};
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    map<int,fin> M;
    vector<vector<int>> G(n,vector<int>(m));
    int sol=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int c;
            cin>>c;
            G[i][j]=c;
            if(M.count(c)){
                int v=abs(i-M[c].mx)*M[c].s;
                
                sol+=v;
            }
            M[c].s++;
            M[c].x+=i;
            M[c].y+=j;
            M[c].mx=M[c].x/M[c].s;
            M[c].my=M[c].y/M[c].s;
            
        }
    }
    map<int,fin> M2;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            int c=G[i][j];
            if(M2.count(c)){
                int v=abs(j-M2[c].my)*M2[c].s;
                sol+=v;
            }
            M2[c].s++;
            M2[c].x+=i;
            M2[c].y+=j;
            M2[c].mx=M2[c].x/M2[c].s;
            M2[c].my=M2[c].y/M2[c].s;
            
        }
    }
    cout<<sol;
}