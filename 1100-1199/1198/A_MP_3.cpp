#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,I;
    cin>>n>>I;
    I=(I*8)/n;
    if(I<20)I=1<<I;
    else I=1<<20;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    sort(V.begin(),V.end());
    int l=0,r=0,ans=LLONG_MAX,num=1;
    while(r<n){
        while(num>I){
            l++;
            if(V[l]!=V[l-1])num--;
        }
        ans=min(ans,n-(r-l+1));
        r++;
        if(V[r]!=V[r-1])num++;
    }
    cout<<ans;
}