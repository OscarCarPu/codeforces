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
        int k;
        cin>>k;
        vector<pii> V;
        int a=1,b=1,act=1;
        V.push_back({a,b});
        bool turn=true;
        while(k){
            if(k>=act){
                k-=act;
                if(turn)a++;
                else b++;
                V.push_back({a,b});
                act++;
            }
            else{
                turn^=1;
                if(turn)a++;
                else b++;
                V.push_back({a,b});
                act=2;
                k--;
            }
        }
        cout<<V.size()<<"\n";
        for(auto [x,y]:V){
            cout<<x<<" "<<y<<"\n";
        }
    }
}