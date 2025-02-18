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
        vector<int> V(n);
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        int l=0,r=n-1;
        int res=0;
        int suml=V[0];
        int sumr=V[n-1];
        while(l<r){
            if(suml==sumr){
                res=(l+1)+(n-r);
                l++;
                r--;
                suml+=V[l];
                sumr+=V[r];
            }
            else if(suml<sumr){
                l++;
                suml+=V[l];
            }
            else{
                r--;
                sumr+=V[r];
            }
        }
        cout<<res<<"\n";
    }
}