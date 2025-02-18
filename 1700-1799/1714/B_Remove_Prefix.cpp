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
        for(int i=0;i<n;i++)cin>>V[i];
        reverse(V.begin(),V.end());
        set<int> S;
        int bef=0;
        int sol=-1;
        for(int i=0;i<n;i++){
            S.insert(V[i]);
            if(bef==S.size() and sol==-1){
                sol=n-i;
            }
            bef=S.size();
        }
        if(sol==-1)sol=0;
        cout<<sol<<endl;
    }
}