#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n,m;
  cin>>n>>m;
  for(int a=0;a<n;a++){
    for(int b=0;b<m;b++){
      if(a%2==0)cout<<"#";
      else{
        if(((a+1)%4==0 and b==0) or ((a+1)%4!=0 and b==m-1)){
          cout<<"#";
        }
        else{
          cout<<".";
        }
      }
    }
    cout<<"\n";
  }
  return 0;
}