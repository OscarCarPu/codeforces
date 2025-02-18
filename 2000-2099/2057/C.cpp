#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int l,r;
    cin>>l>>r;
    int bit=31;
    int sol = 0;
    while(bit>0){
      if((l & (1<<bit))!=(r & (1<<bit))){
        sol=bit;
        break;
      }
      bit--;
    }
    int a = (1<<bit);
    int b = (1<<bit)-1;
    for(bit=31;bit>=0;bit--){
      if((l & (1<<bit))==(r & (1<<bit))){
        if(!(l & (1<<bit)))continue;
        a+=(1<<bit);
        b+=(1<<bit);
      }
      else{
        break;
      }
    }
    int c = (r>a)?r:l;
    cout<<a<<" "<<b<<" "<<c<<"\n";
  }
}
