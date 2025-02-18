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
const int N=1e4+1;
const int LN=LLONG_MAX/10;
vi p;
bool B[N];
void initp(){
    for(int i=2;i<N;i++){
        if(!B[i]){
            p.push_back(i);
            for(int j=i*i;j<N;j+=i){
                B[j]=true;
            }
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    initp();
    while(t--){
        int n;
        cin>>n;
        map<int,int> M;
        int sol=0,cnt=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            for(int j : p){
                while(x%j==0){
                    x/=j;
                    M[j]++;
                }
            }
            if(x>1)M[x]++;
        }
        for(auto x : M){
            sol+=x.second/2;
            cnt+=x.second%2;
        }
        sol+=cnt/3;
        cout<<sol<<"\n";
    }
}

