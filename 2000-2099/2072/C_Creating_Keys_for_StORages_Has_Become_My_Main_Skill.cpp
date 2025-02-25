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
        int n,x;
        cin>>n>>x;
        int ox = x;
        vi V = vi();
        for(int i= 0LL;i<n-1;i++){
            if((i-(i&ox))!=0LL){
                break;
            }
            V.push_back(i);
            x-=(x&i);
        }
        if(x){
            V.push_back(x);
        }
        else if((n-1)-((n-1)&ox)==0LL){
            V.push_back(n-1);
        }
        while(V.size()<n){
            V.push_back(0LL);
        }
        for(int i= 0;i<n;i++){
            cout<<V[i]<<" ";
        }
        cout<<"\n";

    }
}