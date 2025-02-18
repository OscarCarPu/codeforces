#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
const int NM=55;
int n,m;
string s[NM];
char cc[]={'R','W'};
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vi r(2),w(2);
        for(int i=0;i<n;i++){
            cin>>s[i];
            for(int j=0;j<m;j++){
                if(s[i][j]=='R'){
                    r[i+j&1]=1;
                }
                else if(s[i][j]=='W'){
                    w[i+j&1]=1;
                }
            }
        }
        int v=r[1] or w[0];
        int vv=r[0] or w[1];
        if(v and vv){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char c=cc[i+j+v&1];
                cout<<c;
                if(s[i][j]!='.')assert(s[i][j]==c);
            }
            cout<<"\n";
        }
    }
}