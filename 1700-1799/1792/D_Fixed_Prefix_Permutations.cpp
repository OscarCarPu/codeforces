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
#define vvb vector<vb>z
#define si set<int>
#define mii map<int,int>

const int mod=1e9+7;
const int N=2e5+1;
const int LN=LLONG_MAX/10;
bool comp(pii a,pii b){
    return a.first<b.first;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        vector<set<vi>> S(m);
        vvi N(n,vi(m));
        for(int i=0;i<n;i++){
            vpii aux;
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                aux.push_back({x,j+1});
                N[i][j]=x;
            }
            sort(aux.begin(),aux.end(),comp);
            vi auxx;
            for(int j=0;j<m;j++){
                auxx.push_back(aux[j].second);
                S[j].insert(auxx);
            }
        }
        for(int i=0;i<n;i++){
            vi aux;
            int sol=0;
            for(int j=0;j<m;j++){
                aux.push_back(N[i][j]);
                if(S[j].count(aux))sol++;
                else break;
            }
            cout<<sol<<" ";
        }
        cout<<"\n";

    }
}

