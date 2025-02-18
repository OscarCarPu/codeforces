#include <bits/stdc++.h>
using namespace std;
#define int long long
int upDiv(int a,int b){
    return (a+b-1)/b;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,sum=0,M=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        M=max(M,x);
        sum+=x;
    }
    cout<<max(M,upDiv(sum+m,n))<<" "<<M+m;
}