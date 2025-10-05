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
        int n,k;
        cin>>n>>k;
        k=n*n-k;
        if(k==1){
          cout<<"NO\n";
          continue;
        }
        cout<<"YES\n";
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            if(k==0){
              cout<<"D";
              continue;
            }
            k--;
            if(j==0 && k==0){
              cout<<"U";
              continue;
            }
            if(j==0){
              cout<<"R";
            }
            else{
              cout<<"L";
            }
          }
          cout<<"\n";
        }
        
        
    }
}
