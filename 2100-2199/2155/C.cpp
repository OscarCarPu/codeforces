#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        if(n==1){
          cout<<a[0]*2<<"\n";
          continue;
        }
        int sol=2,c=0,left=0;

        for(int i=0;i<n-1;i++){
          int nc = a[i+1]-a[i]+1-c;
          if(nc==1)left++;
          if(nc<0||nc>1){
            sol--;
            break;
          }
          c=nc;
        }
        if(sol==2 and a[0]!=n-left){
          sol--;
        }
        c=1,left=1;
        bool breaked=false;
        for(int i=0;i<n-1;i++){
          int nc = a[i+1]-a[i]+1-c;
          if(nc==1)left++;
          if(nc<0||nc>1){
            sol--;
            breaked=true;
            break;
          }
          c=nc;
        }
        if(a[0]!=n-left+1 and breaked==false){
          sol--;
        }
        cout<<sol<<"\n";
        
    }
}
