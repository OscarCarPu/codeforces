#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
const int N=1e5;
int str[N*4],stc[N*4];
void changer(int p,int val,int v=1,int l=0,int r=n-1){
    
    if(l==p and p==r){
        str[v]+=val;
        return;
    }
    int m=(l+r)/2;
    if(m<p){
        changer(p,val,v*2+1,m+1,r);
    }
    else changer(p,val,v*2,l,m);
    if(str[v*2]>0 and str[v*2+1]>0)str[v]=1;
    else str[v]=0;
}
void changec(int p,int val,int v=1,int l=0,int r=n-1){
    if(l==p and p==r){
        stc[v]+=val;
        return;
    }
    int m=(l+r)/2;
    if(m<p){
        changec(p,val,v*2+1,m+1,r);
    }
    else changec(p,val,v*2,l,m);
    if(stc[v*2]>0 and stc[v*2+1]>0)stc[v]=1;
    else stc[v]=0;
}
bool queryr(int sl,int sr,int v=1,int l=0,int r=n-1){
    if(sr<sl)return true;
    if(l==sl and r==sr){
        return str[v]>0;
    }
    int m=(l+r)/2;
    return queryr(sl,min(sr,m),v*2,l,m) and queryr(max(sl,m+1),sr,v*2+1,m+1,r);
    
}
bool queryc(int sl,int sr,int v=1,int l=0,int r=n-1){
    if(sr<sl)return true;
    if(l==sl and r==sr){
        return stc[v]>0;
    }
    int m=(l+r)/2;
    return queryc(sl,min(sr,m),v*2,l,m) and queryc(max(sl,m+1),sr,v*2+1,m+1,r);
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>n>>q;
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int x,y;
            cin>>x>>y;
            x--;
            y--;
            changec(x,1);
            changer(y,1);
        }
        else if(t==2){
            int x,y;
            cin>>x>>y;
            x--;y--;
            changec(x,-1);
            changer(y,-1);
        }
        else{
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            x1--;y1--;x2--;y2--;
            if(queryc(x1,x2) or queryr(y1,y2))cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}