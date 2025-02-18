#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define mii map<int,int>

const int N=2e5+1;
const int LN=LLONG_MAX/10;

int st[N*4],stF[N*4],lazy[N*4];
vi V;
int n;
vector<pair<int,int>> D;
mii M;
void buildF(int v=1,int l=0,int r=n-1){
    if(l==r){
        stF[v]=LN;
        lazy[v]=LN;
    }
    else{
        int m=(l+r)/2;
        lazy[v]=LN;
        buildF(v*2,l,m);
        buildF(v*2+1,m+1,r);
        stF[v]=min(stF[v*2],stF[v*2+1]);
    }
}

void updateF(int sl,int sr,int val,int v=1,int l=0,int r=n-1){
    if(sl>sr)return;
    if(l==sl and r==sr){
        stF[v]=min(stF[v],val);
        lazy[v]=min(lazy[v],val);
    }
    else{
        int m=(l+r)/2;
        stF[v*2]=min(stF[v*2],lazy[v]);
        stF[v*2+1]=min(stF[v*2+1],lazy[v]);
        lazy[v*2]=min(lazy[v*2],lazy[v]);
        lazy[v*2+1]=min(lazy[v*2+1],lazy[v]);
        updateF(sl,min(sr,m),val,v*2,l,m);
        updateF(max(sl,m+1),sr,val,v*2+1,m+1,r);
        stF[v]=min(stF[v*2],stF[v*2+1]);
    }
}

int gidx=0,act;

void apply(int v=1,int l=0,int r=n-1){
    if(l==r){
        D[l].second=stF[v];
        if(stF[v]!=LN)act++;
    }
    else{
        int m=(l+r)/2;
        stF[v*2]=min(stF[v*2],lazy[v]);
        stF[v*2+1]=min(stF[v*2+1],lazy[v]);
        lazy[v*2]=min(lazy[v*2],lazy[v]);
        lazy[v*2+1]=min(lazy[v*2+1],lazy[v]);
        apply(v*2,l,m);
        apply(v*2+1,m+1,r);
    }
}

void build(int v=1,int l=0,int r=n-1){
    if(l==r){
        st[v]=V[l];
        return;
    }
    int m=(l+r)/2;
    build(v*2,l,m);
    build(v*2+1,m+1,r);
    st[v]=st[v*2]+st[v*2+1];
}

int query(int sl,int sr,int v=1,int l=0,int r=n-1){
    if(sl>sr)return 0;
    if(l==sl and r==sr)return st[v];
    int m=(l+r)/2;
    return query(sl,min(sr,m),v*2,l,m)+query(max(sl,m+1),sr,v*2+1,m+1,r);
}

void update(int p,int v=1,int l=0,int r=n-1){
    if(l==r){
        st[v]^=1;
        return;
    }
    int m=(l+r)/2;
    if(p<=m)update(p,v*2,l,m);
    else update(p,v*2+1,m+1,r);
    st[v]=st[v*2]+st[v*2+1];
}

bool func(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second)return a.first<b.first;
    return a.second<b.second;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,q;
    cin>>n>>m>>q;
    string s;
    cin>>s;
    int idx=0;
    act=0;
    D=vector<pair<int,int>>(n);
    for(int i=0;i<n;i++){
        D[i].first=i;
    }
    V=vi(n);
    buildF();
    while(m--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        updateF(l,r,idx++);
    }
    updateF(0,n-1,LN);
    apply();
    sort(D.begin(),D.end(),func);
    for(int i=0;i<n;i++){
        M[D[i].first]=i;
        V[i]=s[D[i].first]-'0';
       // cout<<D[i].first<<" "<<D[i].second<<"\n";
    }
   //    cout<<endl;
    build();
    while(q--){
        int x;
        cin>>x;
        x--;
        update(M[x]);
        int tot=query(0,n-1);
        int cub=min(tot,act);
        cout<<cub-query(0,cub-1)<<"\n";
    }
}