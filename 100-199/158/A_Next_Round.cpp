#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<int>participants(n);
  for(int a=0;a<n;a++){
    cin>>participants[a];
  }
  int res=0;
  if(participants[(k-1)]>0){
    res=k;
    for(int a=k;a<n;a++){
      if(participants[a]==participants[(k-1)]){
        res++;
      }
      else{
        break;
      }
    }
  }
  else{
    for(int a=(k-2);a>=0;a--){
      if(participants[a]>0){
        res=a+1;
        break;
      }
    }
  }
  cout<<res;
}