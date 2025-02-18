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
        sort(V.rbegin(),V.rend());
        int odd=0;
        int even=0;
        for(int i=1;i<n;i++){
            if((V[0]-V[i])%2)odd++;
            
            even+=(V[0]-V[i])/2;
        }
            int dif=(even-odd+1)/3;
            dif=max(dif,0LL);
            odd+=2*dif;
            even-=dif;
        int sol;
        if(even>=odd){
            sol=even*2;
        }
        else sol=odd*2-1;
        even=odd=0;
        V[0]++;
        odd++;
        for(int i=1;i<n;i++){
            if((V[0]-V[i])%2)odd++;
            
            even+=(V[0]-V[i])/2;
        }
            dif=(even-odd+1)/3;
            dif=max(dif,0LL);
            odd+=2*dif;
            even-=dif;
        if(even>=odd){
            sol=min(sol,even*2);
        }
        else sol=min(sol,odd*2-1);
        
        cout<<sol<<"\n";
    }
}