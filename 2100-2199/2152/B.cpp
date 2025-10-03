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
        int n;
        cin>>n;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int ansx=0,ansy=0;
        if (x1>x2)ansx=max(ansx,n-x2);
        if (x1<x2)ansx=max(ansx,x2);
        if (y1>y2)ansy=max(ansy,n-y2);
        if (y1<y2)ansy=max(ansy,y2);
        cout<<max(ansx,ansy)<<'\n';
        
    }
}