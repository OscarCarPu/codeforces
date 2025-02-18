#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V(n);
    for(int i=0;i<n;i++)cin>>V[i];
    sort(V.begin(),V.end());
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int high=n-1;
        int low=0;
        int res=-1;
        while(high>=low){
            int mid=(high+low)/2;
            if(V[mid]<=x){
                low=mid+1;
                res=mid;
            }
            else high=mid-1;
        }
        cout<<res+1<<"\n";
    }
}