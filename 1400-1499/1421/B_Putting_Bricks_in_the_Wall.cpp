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
        int c1,c2,c3,c4;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                char e;
                cin>>e;
                if(i==0 and j==1)c1=(e=='1');
                if(i==1 and j==0)c2=(e=='1');
                if(i==n-1 and j==n-2)c3=(e=='1');
                if(i==n-2 and j==n-1)c4=(e=='1');
            }
        }
        vector<pair<int,int>>sol;
        if(c1==c2){
            if(c3==c1){
                sol.emplace_back(n-1,n-2);
            }
            if(c4==c1){
                sol.emplace_back(n-2,n-1);
            }
        }
        else{
            if(c3==c4){
                if(c1==c3)sol.emplace_back(0,1);
                if(c2==c3)sol.emplace_back(1,0);
            }
            else{
                sol.emplace_back(0,1);
                if(c3==c2)sol.emplace_back(n-1,n-2);
                if(c4==c2)sol.emplace_back(n-2,n-1);
            }
        }
        cout<<sol.size()<<"\n";
        for(auto i : sol)cout<<i.first+1<<" "<<i.second+1<<"\n";
    }
}