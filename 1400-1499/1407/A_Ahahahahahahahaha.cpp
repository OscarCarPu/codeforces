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
        int c0=0,c1=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1)c1++;
            else c0++;
        }
        if(c0>=c1){
            cout<<n/2<<"\n";
            for(int i=0;i<n/2;i++)cout<<"0 ";
        }
        else{
            if(n/2%2){
                cout<<n/2+1<<"\n";
                for(int i=0;i<n/2+1;i++)cout<<"1 ";
            }
            else{
                cout<<n/2<<"\n";
                for(int i=0;i<n/2;i++)cout<<"1 ";
            }
        }
        cout<<"\n";
    }
}