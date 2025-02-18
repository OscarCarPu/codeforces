#include <bits/stdc++.h>
using namespace std;
#define int long long
double dist(int x,int y){
    return sqrt((x*x)+(y*y));
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int r,d;
    cin>>r>>d;
    int cnt=0;
    int n;
    cin>>n;
    while(n--){
        int x,y,R;
        cin>>x>>y>>R;
        if(dist(x,y)+R<=r and dist(x,y)>=r-d+R)cnt++;
    }
    cout<<cnt;
}