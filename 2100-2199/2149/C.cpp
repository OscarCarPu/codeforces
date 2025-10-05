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
        set<int> s;
        int cntk=0;
        while(n--){
          int x;
          cin>>x;
          if(x==k)cntk++;
          s.insert(x);
        }
        int sol =0;
        for(int i=0;i<k;i++){
          if(!s.contains(i)){
            sol++;
          }
        }
        cout<<max(cntk,sol)<<"\n";
    }
}
