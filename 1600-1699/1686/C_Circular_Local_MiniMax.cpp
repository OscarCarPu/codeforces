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
        sort(V.begin(),V.end());
        if(n%2){
            cout<<"NO\n";
            continue;
        }
        int j=0;
        vector<int> S(n);
        for(int i=0;i<n/2;i++){
            S[j++]=V[i];
            S[j++]=V[n/2+i];
        }
        bool sol=true;
        if(!(S[0]<S[1] and S[0]<S[n-1]))sol=false;
        if(!(S[n-1]>S[n-2] and S[n-1]>S[0]))sol=false;
        for(int i=1;i<n-1;i++){
            if(!(S[i]<S[i-1] and S[i]<S[i+1]) and !(S[i]>S[i-1] and S[i]>S[i+1]))sol=false;
        }
        if(sol){
            cout<<"YES\n";
            for(int i : S)cout<<i<<" ";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
    }
}