#include <bits/stdc++.h>
using namespace std;
#define int long long
struct f{
    int s,ob,cb;
};
const int N=1e6+1;
f st[N*4];
char a[N];
int n;
void build(int v=1,int l=0,int r=n-1){
    if(l==r){
        if(a[l]=='(')st[v].ob++;
        else st[v].cb++;
        return;
    }
    int m=(l+r)>>1;
    build(v*2,l,m);
    build(v*2+1,m+1,r);
    int aux=min(st[v*2].ob,st[v*2+1].cb);
    st[v].ob=st[v*2+1].ob+st[v*2].ob-aux;
    st[v].cb=st[v*2+1].cb+st[v*2].cb-aux;
    st[v].s=st[v*2].s+st[v*2+1].s+aux*2;
}
f query(int sl,int sr,int v=1,int l=0,int r=n-1){
    if(sr<sl){
        f a;
        a.ob=0;
        a.cb=0;
        a.s=0;
        return a;
    }
    if(l==sl and r==sr){
        return st[v];
    }
    int m=(l+r)>>1;
    f s1=query(sl,min(sr,m),v*2,l,m);
    f s2=query(max(sl,m+1),sr,v*2+1,m+1,r);
    f sol;
    int aux=min(s1.ob,s2.cb);
    sol.ob=s1.ob+s2.ob-aux;
    sol.cb=s1.cb+s2.cb-aux;
    sol.s=s1.s+s2.s+aux*2;
    return sol;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    n=s.length();
    for(int i=0;i<n;i++){
        a[i]=s[i];
    }
    build();
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        f sol=query(l,r);
        cout<<sol.s<<"\n";
    }
}