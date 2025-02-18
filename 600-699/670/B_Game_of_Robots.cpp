#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    int x=-1;
    k--;
    for(int i=0;i<n;i++){
        if(k<i+1){
            x=V[k];
        }
        else{
            k-=i+1;
        }
    }
    cout<<x;
}