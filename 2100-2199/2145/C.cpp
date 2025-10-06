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
        int cnta=0,cntb=0;
        string s;
        cin>>s;
        for(char c : s){
          if(c=='a')cnta++;
          else cntb++;
        }
        if(cnta==cntb){
          cout<<"0\n";
          continue;
        }
        int diff=cnta-cntb;
        map<int,int> pos;
        pos[0]=0;
        int sol=n;
        int cnt=0;
        for(int i=0;i<n;i++){
          if(s[i]=='a')cnt++;
          else cnt--;
          if(pos.count(cnt-diff))sol=min(sol,i+1-pos[cnt-diff]);

          pos[cnt] = i+1;
        }

    if(sol==n)sol=-1;
    cout<<sol<<"\n";
    }

}
