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
        int k,n;
        cin>>k>>n;
        int inte=0,left_disc=0,right_disc=0;
        for(int i=0;i<n;i++){
          char c;
          cin>>c;
          if(c=='2')inte++;
          else if(c=='0')left_disc++;
          else right_disc++;
        }
        for(int i=0;i<left_disc;i++){
          cout<<"-";
        }
        if(inte==k-right_disc-left_disc){
          while(inte--){
            cout<<"-";
          }
        }
        else if(inte*2>=k-right_disc-left_disc){
          int total=k-right_disc-left_disc;
          while(total--){
            cout<<"?";
          }
        }
        else{
          for(int i=0;i<inte;i++){
            cout<<"?";
          }
          for(int i=0;i<k-left_disc-right_disc-inte*2;i++){
            cout<<"+";
          }
          for(int i=0;i<inte;i++){
            cout<<"?";
          }
        }
        for(int i=k-right_disc;i<k;i++){
          cout<<"-";
        }
        cout<<"\n";
    }
}
