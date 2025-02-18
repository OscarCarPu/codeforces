#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    map<int,int> M;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      M[x]++;
    }
    vector<int> V;
    map<int,int>::iterator it;
    for(it = M.begin();it!=M.end();it++){
      V.push_back(it->second);
    }
    sort(V.rbegin(),V.rend());
    while(V.size() > 1 and k>=V.back()){
      k-=V.back();
      V.pop_back();
    }
    cout<<V.size()<<"\n";
  }
}