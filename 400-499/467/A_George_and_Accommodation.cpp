#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,cont=0;
  cin >> n;
  for(int a=0;a<n;a++){
    int q,p;
    cin>>q>>p;
    if(p>=q+2){
      cont++;
    }
  }
  cout<<cont;
}