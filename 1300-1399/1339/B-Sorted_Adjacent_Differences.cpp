#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi V(n);
        for(int i=0;i<n;i++)cin>>V[i];
        sort(V.begin(),V.end());
        vi sol(n);
        int x=0;
        if(n%2==1){
            sol[x++]=V[n/2];
            for(int i=1;i<=n/2;i++){
                sol[x++]=V[n/2+i];
                sol[x++]=V[n/2-i];
            }
        }
        else{
            int r=n/2;
            int l=n/2-1;
            while(r<n and l>=0){
                sol[x++]=V[r++];
                sol[x++]=V[l--];
            }
        }
        for(int i : sol)cout<<i<<" ";
        cout<<"\n";
    }
}