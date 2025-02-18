#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int r[n],l[n];
    r[0]=0;
    for(int i=1;i<n;i++){
        r[i]=r[i-1]+max(0LL,a[i-1]-a[i]);
    }
    l[n-1]=0;
    for(int i=n-2;i>=0;i--){
        l[i]=l[i+1]+max(0LL,a[i+1]-a[i]);
    }
    while(m--){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        int sol=0;
        if(x<y){
            sol=r[y]-r[x];
        }
        else{
            sol=l[y]-l[x];
        }
        cout<<sol<<"\n";
    }
 }