#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> V(n);
        for(int i=0;i<n;i++)cin >> V[i];
        sort(V.begin(), V.end());
        int s1=V[0]+V[1];
        int s2=V[n-1];
        int p1=1,p2=n-1;
        bool sol=false;
        while(p2>p1){
            if(s2>s1)sol=true;
                p1++;
                p2--;
                s1+=V[p1];
                s2+=V[p2];
        }
        if(sol)cout<<"YES\n";
        else cout<<"NO\n";
    }
}