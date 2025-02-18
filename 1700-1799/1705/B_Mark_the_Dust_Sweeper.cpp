#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool some=false;
        int sol=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i==n-1)continue;
            if(x>0)some=true;
            if(x==0 and some){
                sol++;
            }
            else{
                sol+=x;
            }
        }
        cout<<sol<<"\n";
    }
}