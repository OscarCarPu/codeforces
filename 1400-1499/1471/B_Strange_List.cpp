#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int sum=0;
        queue<pair<int,int>> Q;
        bool add=true;
        for(int i=0;i<n;i++){
            int nu;
            cin>>nu;
            sum+=nu;
            if(nu%x==0 and add){
                Q.push({nu/x,x});
            }
            else add=false;
        }
        while(Q.size()){
            int nu=Q.front().first;
            int time=Q.front().second;
            Q.pop();
            sum+=nu*time;
            if(nu%x==0 and add){
                Q.push({nu/x,x*time});
            }
            else add=false;
        }
        cout<<sum<<"\n";
    }
}