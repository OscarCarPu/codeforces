#include <bits/stdc++.h>
using namespace std;
int main(){
  int p;
  cin >> p;
  bool easy=true;
  for(int a=0;a<p;a++){
    int b;
    cin >> b;
    if(b==1){
      easy=false;
    }
  }
  if(easy){
    cout<<"EASY";
  }
  else{
    cout<<"HARD";
  }
}