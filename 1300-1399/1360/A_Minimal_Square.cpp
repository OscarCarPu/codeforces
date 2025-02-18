#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--){
    int a,b;
    cin >> a>>b;
    int sol;
    if(a<b){
      sol=max(2*a,b);
    }
    else{
      sol=max(a,2*b);
    }
    cout<<sol*sol<<"\n";
  }
  return 0;
}