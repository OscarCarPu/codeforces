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
        int sol0=0,sol1=0;
        int pos0=0,pos1=0;
        for(int i=0;i<n;i++){
          char c;
          cin>>c;
          if(c=='b'){
            sol0+=i-pos0;
            pos0++;
          }
          else{
            sol1+=i-pos1;
            pos1++;
          }
        }
        cout<<min(sol0,sol1)<<"\n";
        
    }
}
