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
        int l=0,r=n-1;
        int a=-1,b=-1;
        while(l<r){
            if(V[l]!=V[r]){
                a=V[l];
                b=V[r];
                break;
            }
            l++;
            r--;
        }
        if(a==-1){
            cout<<"YES\n";
            continue;
        }
        int can=0;
        l=0,r=n-1;
        while(l<r){
            while(l<n and V[l]==a)l++;
            while(r>0 and V[r]==a)r--;
            if(l>=r)break;
            if(V[l]!=V[r]){
                can++;
                break;
            }
            l++;
            r--;
        }
        l=0,r=n-1;
        while(l<r){
            while(l<n and V[l]==b)l++;
            while(r>0 and V[r]==b)r--;
            if(l>=r)break;
            if(V[l]!=V[r]){
                can++;
                break;
            }
            l++;
            r--;
        }
        if(can>1){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
}