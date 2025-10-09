#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()

const int MOD = 1e9+7;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<char>> Board(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>Board[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(Board[i][j]=='B'){
                if(i>0 and Board[i-1][j]=='.')Board[i-1][j]='#';
                if(j>0 and Board[i][j-1]=='.')Board[i][j-1]='#';
                if(i<n-1 and Board[i+1][j]=='.')Board[i+1][j]='#';
                if(j<m-1 and Board[i][j+1]=='.')Board[i][j+1]='#';
            }
            if(Board[i][j]=='G')cnt++;
        }
    }
    vector<vector<bool>> vis(n,vector<bool>(m,false));
    queue<pii> q;
    if(Board[n-1][m-1]!='#')q.push({n-1,m-1});
    while(!q.empty()){
        auto [x,y] = q.front();q.pop();
        if(vis[x][y])continue;
        vis[x][y]=true;
        if(Board[x][y]=='G')cnt--;
        if(Board[x][y]=='B')cnt=-1;
        if(x>0 and vis[x-1][y]==false and Board[x-1][y]!='#')q.push({x-1,y});
        if(y>0 and vis[x][y-1]==false and Board[x][y-1]!='#')q.push({x,y-1});
        if(x<n-1 and vis[x+1][y]==false and Board[x+1][y]!='#')q.push({x+1,y});
        if(y<m-1 and vis[x][y+1]==false and Board[x][y+1]!='#')q.push({x,y+1});
    }
    if(cnt==0)cout<<"Yes\n";
    else cout<<"No\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)solve();
}
