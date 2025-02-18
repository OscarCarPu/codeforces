#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int x=1,y=1;
    vector<pair<int,int>> sol;
    sol.push_back({1,1});
    a--;
    b--;
    while(true){
        if(x>y and b>0){
            y++;
            b--;
            
        }
        else if(y<=x and a>0){
            x++;
            a--;
            
        }
        else if(a>0){
            x++;
            a--;
            
        }
        else if(b>0){
            y++;
            b--;
            
        }
        else break;
        sol.emplace_back(x,y);
    }
    cout<<sol.size()<<endl;
    for(auto i : sol)cout<<i.first<<" "<<i.second<<"\n";
}