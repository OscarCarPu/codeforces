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
        int sol=0;
        vector<int> h(n);
        for(int i=0;i<n;i++)cin>>h[i];
        if(n%2==0){
            vector<int> odds(n,0),evens(n,0);
            for(int i=1;i<n-1;i+=2){
                odds[i]+=max(max(h[i-1],h[i+1])+1-h[i],0LL);
                if(i>1)odds[i]+=odds[i-2];
            }
            for(int i=2;i<n-1;i+=2){
                evens[i]+=max(max(h[i-1],h[i+1])+1-h[i],0LL);
                evens[i]+=evens[i-2];
            }
            sol=min(odds[n-3],evens[n-2]);
            for(int i=1;i<n-4;i+=2){
                int cost=odds[i];
                    cost+=evens[n-2];
                    cost-=evens[i+1];

                sol=min(sol,cost);
            }
        }
        else{
            for(int i=1;i<n-1;i+=2){
                sol+=max(max(h[i-1],h[i+1])+1-h[i],0LL);
            }
        }
        cout<<sol<<"\n";
    }
}