#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
const int N=1e6;
int a[N];
struct vag{
    int m, t;
};
vag st[N*4];
int n;
void build(int v=1,int l=0,int r=n-1){
    if(l==r){
        st[v].m=a[l];
        st[v].t=1;
        return;
    }
    int m=(l+r)>>1;
    build(v*2,l,m);
    build(v*2+1,m+1,r);
    st[v].m=min(st[v*2].m,st[v*2+1].m);
    st[v].t=st[v*2].t;
    if(st[v*2].m>st[v*2+1].m){
        st[v].t+=st[v*2+1].t;
    }
}
void change(int p,int val,int v=1,int l=0,int r=n-1){
    if(l==p and l==r){
        a[l]-=val;
        st[v].m=a[l];
        st[v].t=1;
        return;
    }
    int m=(l+r)>>1;
    if(p<=m){
        change(p,val,v*2,l,m);
    }
    else{
        change(p,val,v*2+1,m+1,r);
    }
    st[v].m=min(st[v*2].m,st[v*2+1].m);
    st[v].t=st[v*2].t;
    if(st[v*2].m>st[v*2+1].m){
        st[v].t+=st[v*2+1].t;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>n>>q;
        for(int i=0;i<n;i++)cin>>a[i];
        build();
        while(q--){
            int p,val;
            cin>>p>>val;
            p--;
            change(p,val);
            cout<<st[1].t<<" ";
        }
        cout<<"\n";
    }
}