#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int pos=-1,sol=0,sol2;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        if((n/x)*x>=sol){
            sol=(n/x)*x;
            pos=i+1;
            sol2=n/x;
        }
    }
    cout<<pos<<" "<<sol2;
}