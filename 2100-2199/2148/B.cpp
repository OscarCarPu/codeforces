#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        for (int i=0;i<n;i++)cin>>x;
        for (int i=0;i<m;i++)cin>>y;
        cout<<n+m<<"\n";
        
    }
}
