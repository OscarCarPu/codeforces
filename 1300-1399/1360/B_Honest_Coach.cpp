#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin>>n;
    vector<int> V(n);
    for(auto& i : V){
      cin>>i;
    }
    sort(V.begin(), V.end());
    int mi=10000;
    for(int a=1;a<n;a++){
      if(mi>V[a]-V[a-1]){
        mi=V[a]-V[a-1];
      }
    }
    cout<<mi<<"\n";
  }
  return 0;
}