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
        int sol=0;
        for(int i=0;i<n;i++)cin>>V[i];
        for(int i=0;i<n-1;i++){
            if(V[i]>V[i+1])sol++,i++;
        }
        cout<<sol<<"\n";
    }
}