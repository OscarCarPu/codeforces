#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);

  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    cout<<max(n,m)+1<<"\n";
  }
}