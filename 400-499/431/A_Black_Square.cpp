#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int a1,a2,a3,a4,sol=0;
  cin >> a1 >> a2 >> a3 >> a4;
  string s;
  cin >>s;
  for(auto& i : s){
    switch(i){
      case '1': sol+=a1;break;
      case '2': sol+=a2;break;
      case '3': sol+=a3;break;
      case '4': sol+=a4;break;
      defkoault: break;
    }
  }
  cout<<sol;
  return 0;
}