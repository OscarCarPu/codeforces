#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int N=1e5;
int st[N*4];
int n;
void build(int v=1,int l=0,int r=n-1){
    if(l==r){
        st[v]=1;
        return;
    }
    int m=(l+r)>>1;
    build(v*2,l,m);
    build(v*2+1,m+1,r);
    st[v]=st[v*2]+st[v*2+1];
}
void change(int p,int v=1,int l=0,int r=n-1){
    if(l==r){
        st[v]=0;
        return;
    }
    int m=(l+r)>>1;
    if(p<=m){
        change(p,v*2,l,m);
    }
    else change(p,v*2+1,m+1,r);
    st[v]=st[v*2]+st[v*2+1];
}
int query(int sl,int sr,int v=1,int l=0,int r=n-1){
    if(sr<sl)return 0;
    if(l==sl and r==sr){
        return st[v];
    }
    int m=(l+r)>>1;
    return query(sl,min(sr,m),v*2,l,m)+query(max(sl,m+1),sr,v*2+1,m+1,r);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1){
            int x;
            cin>>x;
            cout<<"1\n";
            continue;
        }
        build();
        vector<int> V(n),sol(n),p(n);
        int l,r;
        for(int i=0;i<n;i++){
            cin>>V[i];
            p[V[i]]=i;
        }
        l=p[0];
        sol[p[0]]=1;
        sol[p[1]]=1;
        r=p[1];
        change(p[0]);
        change(p[1]);
        if(l>r)swap(l,r);
        for(int i=2;i<n;i++){
            if(p[i]>l and p[i]<r){
                sol[p[i]]=query(l,r);
                change(p[i]);
            }
            else{
                l=min(l,p[i]);
                r=max(r,p[i]);
                sol[p[i]]=1;
                change(p[i]);
            }
        }
        int ans=1;
        for(int i=0;i<n;i++){
            ans*=sol[i];
            ans%=mod;
        }
        cout<<ans<<"\n";
    }
}