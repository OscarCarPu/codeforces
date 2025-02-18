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
        int m=-1;
        int c2=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0)c2++;
            if(m==-1)m=x;
            else if(__builtin_ctz(m)>__builtin_ctz(x))m=x;
        }
        if(c2==n){
            cout<<n-1+__builtin_ctz(m)<<"\n";
        }
        else cout<<c2<<"\n";
    }
}