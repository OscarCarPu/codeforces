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

const int mod=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vvi G(n,vi(n,-1));
        si S;
        si used;
        int ned=n*n-1;
        int num=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ned==0){
                    while(used.count(num)){num++;}
                    //cout<<num<<endl;
                    G[i][j]=num;
                    num++;
                    continue;
                }
                if(i==0 and j==0){
                    G[i][j]=1;
                    used.insert(1);
                    continue;
                }
                if(i){
                    if(G[i-1][j]+ned<=n*n and !used.count(G[i-1][j]+ned)){
                        G[i][j]=(G[i-1][j]+ned);
                        used.insert(G[i][j]);
                        if(i)S.insert(abs(G[i][j]-G[i-1][j]));
                        if(j)S.insert(abs(G[i][j]-G[i][j-1]));
                        while(S.count(ned) and ned>0){
                            ned--;
                        }
                        continue;
                    }
                    else if(G[i-1][j]-ned>=1 and !used.count(G[i-1][j]-ned)){
                        G[i][j]=(G[i-1][j]-ned);
                        used.insert(G[i][j]);
                        if(i)S.insert(abs(G[i][j]-G[i-1][j]));
                        if(j)S.insert(abs(G[i][j]-G[i][j-1]));
                        while(S.count(ned) and ned>0){
                            ned--;
                        }
                        continue;
                    }
                }
                if(j){
                    if(G[i][j-1]+ned<=n*n and !used.count(G[i][j-1]+ned)){
                        G[i][j]=(G[i][j-1]+ned);
                        used.insert(G[i][j]);
                        if(i)S.insert(abs(G[i][j]-G[i-1][j]));
                        if(j)S.insert(abs(G[i][j]-G[i][j-1]));
                        while(S.count(ned) and ned>0){
                            ned--;
                        }
                        continue;
                    }
                    if(G[i][j-1]-ned>=1 and !used.count(G[i][j-1]-ned)){
                        G[i][j]=G[i][j-1]-ned;
                        used.insert(G[i][j]);
                        if(i)S.insert(abs(G[i][j]-G[i-1][j]));
                        if(j)S.insert(abs(G[i][j]-G[i][j-1]));
                        while(S.count(ned) and ned>0){
                            ned--;
                        }
                        continue;
                    }
                }
                while(used.count(num)){num++;}
                    //cout<<num<<endl;
                    G[i][j]=num;
                    used.insert(num);
                    num++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<G[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}

