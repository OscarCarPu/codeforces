#include <bits/stdc++.h>

using namespace std;

#define int long long
#define vi vector<int>

const int N = 2e6+1;
const int INF = 1e9+7;

int n,k;
vi V;
pair<pair<int,int>,pair<int,int>> st[N];
int solst[N];

void update(int v,int l,int r,int pos, int val){
  if(l==r){
    V[l]=val;
    st[v]=make_pair(make_pair(V[l]-l,V[l]-l),make_pair(V[l]+l,V[l]+l));
    return;
  }
  int m = (l+r)/2;
  if (pos<=m)update(v*2,l,m,pos,val);
  else update(v*2+1,m+1,r,pos,val);
  solst[v] = max({solst[v*2],solst[v*2+1],st[v*2].second.second-st[v*2+1].first.second,st[v*2+1].second.first-st[v*2].first.first});
  st[v] = {
    {
      min(st[v*2].first.first,st[v*2+1].first.first),
      max(st[v*2].second.first,st[v*2+1].second.first)
    },
    {
      min(st[v*2].first.second,st[v*2+1].first.second),
      max(st[v*2].second.second,st[v*2+1].second.second)
    }
  };
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    cin>>n>>k;
    V=vi(n);
    for(int &i: V)cin>>i;
    for(int i=0;i<n*4;i++){
      st[i]=make_pair(make_pair(INF,INF),make_pair(-INF,-INF));
      solst[i]=0;
    }
    for(int i=0;i<n;i++){
      update(0,0,n-1,i,V[i]);
    }
    cout<<solst[0]<<"\n";
    while(k--){
      int pos,val;
      cin>>pos>>val;
      update(0,0,n-1,pos-1,val);
      cout<<solst[0]<<"\n";
    }
  }
}