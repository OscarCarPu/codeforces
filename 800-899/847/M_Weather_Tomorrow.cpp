 #include <bits/stdc++.h>
 using namespace std;
 #define int long long
 signed main(){
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     int n;
     cin>>n;
     int bef,act;
     cin>>bef>>act;
     int d=act-bef;
     bef=act;
     int sol=d;
     for(int i=2;i<n;i++){
         cin>>act;
         if(act-bef!=d){
             sol=0;
         }
         bef=act;
     }
     cout<<bef+sol;
 }