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
        string s;
        cin>>s;
        int sol=0;
        for(int i=0;i<n;i++){
            map<char,int> M;
            set<char> S;
            int ma=0;
            for(int j=0;j<102 and j+i<n;j++){
                S.insert(s[i+j]);
                if(!M.count(s[i+j]))M[s[i+j]]=0;
                M[s[i+j]]++;
                ma=max(ma,M[s[i+j]]);
                if(ma<=S.size())sol++;
            }
            
        }
        cout<<sol<<"\n";
    }
}