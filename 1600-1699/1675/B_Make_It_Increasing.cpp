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
        int sol=0;
        for(int i=n-2;i>=0;i--){
            while(V[i]>=V[i+1]){
                if(V[i]==0){
                    sol=-1;
                    break;
                }
                V[i]/=2;
                sol++;
            }
            if(sol==-1)break;
        }
        cout<<sol<<"\n";
    }
}