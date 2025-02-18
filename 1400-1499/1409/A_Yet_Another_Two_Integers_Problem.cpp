#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--){
    int a,b,sol=1;
    cin >> a>>b;
    if(a<b){
      sol+=(b-a)/10;
      if((b-a)%10==0)sol--;
    }
    else{
      sol+=(a-b)/10;
      if((a-b)%10==0)sol--;
    }
    cout<<sol<<"\n";
  }
  return 0;
}