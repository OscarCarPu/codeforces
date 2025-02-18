#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int>V(n);
       for(int i=0;i<n;i++)cin>>V[i];
       sort(V.begin(),V.end());
       int cnt=1;
       int sol=0;
       for(int i=1;i<n;i++){
           if(V[i]!=V[i-1]){
           sol+=min(cnt,2*1LL);
           cnt=1;
       }else{
           cnt++;
           }
       }
       sol+=min(cnt,2*1LL);
       if(sol==1){
           cout<<sol<<"\n";
       }
       else{
           if(sol%2)cout<<sol/2+1<<"\n";
           else cout<<sol/2<<"\n";
       }
    }
}