#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
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
        int x;
        for(int i=0;i<32;i++){
            if((1LL<<i)&n){
                x=(1LL<<i);
                break;
            }
        }
        if(__builtin_popcount(n)==1){
            for(int i=0;i<32;i++){
            if(!((1LL<<i)&n)){
                x+=(1LL<<i);
                break;
            }
            }
        }
        cout<<x<<"\n";
    }
}