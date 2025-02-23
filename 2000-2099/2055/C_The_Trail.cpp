#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vvi V = vvi(n,vi(m));
        vi sumRow = vi(n,0);
        vi sumCol = vi(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>V[i][j];
                sumRow[i]+=V[i][j];
                sumCol[j]+=V[i][j];
            }
        }
        int pi=0,pj=0;
        int sum = 0;
        for(char c : s){
            if(c=='D'){
                V[pi][pj]=-1*sumRow[pi];
                sumRow[pi]=0;
                sumCol[pj]+=V[pi][pj];
                pi++;
            }
            else{
                V[pi][pj]=-1*sumCol[pj];
                sumCol[pj]=0;
                sumRow[pi]+=V[pi][pj];
                pj++;
            }
        }
        if(s.back() == 'D'){
            V[pi][pj]=-1*sumRow[pi];
            sumRow[pi]=0;
            sumCol[pj]+=V[pi][pj];
            pi++;
        }
        else{
            V[pi][pj]=-1*sumCol[pj];
            sumCol[pj]=0;
            sumRow[pi]+=V[pi][pj];
            pj++;
        }
        for(vi r : V){
            for(int i : r){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
}