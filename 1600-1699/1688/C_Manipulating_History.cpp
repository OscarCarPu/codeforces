#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n=2*n+1;
        set<char> S;
        while(n--){
            string s;
            cin>>s;
            for(auto x : s){
                if(S.count(x))S.erase(x);
                else S.insert(x);
            }
        }
        cout<<*S.begin()<<"\n";
    }
}