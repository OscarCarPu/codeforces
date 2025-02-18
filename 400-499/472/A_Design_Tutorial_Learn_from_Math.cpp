#include <bits/stdc++.h>
using namespace std;
bool primo(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0)return true;
  }
  return false;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  if(n%2==0 and primo(n/2)){
    cout<<n/2<<" "<<n/2;
    return 0;
  }
  for(int a=4;a<=n/2;a++){
    if(primo(n-a) and primo(a) ){
      cout<<a<<" "<<(n-a);
      break;
    }
  }
  return 0;
}