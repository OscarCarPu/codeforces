#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int sum=0;
    int msum=LLONG_MAX;
    int sol=-1;
    vector<int> V(n);
    for(int i=0;i<k;i++){
        cin>>V[i];
        sum+=V[i];
    }
    msum=sum;
    sol=0;
    for(int i=k;i<n;i++){
        cin>>V[i];
        sum+=V[i];
        sum-=V[i-k];
        if(sum<msum){
            msum=sum;
            sol=i-k+1;
        }
    }
    cout<<sol+1;
}