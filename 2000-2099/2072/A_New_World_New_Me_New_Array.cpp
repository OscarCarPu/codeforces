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
        int n,k,p;
        cin>>n>>k>>p;
        k=abs(k);
        if(p*n<k){
            cout<<"-1\n";
        }
        else{
            cout<<(k+p-1)/p<<"\n";
        }
    }
}