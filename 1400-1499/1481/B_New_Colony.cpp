#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> H(n);
        int x=0;
        for(int i=0;i<n;i++){
            cin>>H[i];
        }
        int sol;
        while(true){
            x++;
            int p=-1;
            for(int j=0;j<n-1;j++){
                if(H[j]<H[j+1]){
                    p=j+1;
                    break;
                }
            }
            H[p-1]++;
            if(x==k or p==-1){
                sol=p;
                break;
            }
        }
        cout<<sol<<"\n";
    }
    
}