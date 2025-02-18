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
        vector<int>V(n);
        for(int i=0;i<n;i++)cin>>V[i];
        int a=n-1;
        int sol=0;
        for(int i=n-2;i>=0;i--){
            if(V[i]==V[n-1])a=min(i,a);
            else{
                if(a<=i)continue;
                a-=(n-a);
                sol++;
            }
        }
        cout<<sol<<"\n";
    }
}