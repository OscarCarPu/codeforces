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
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            string s;
            cin>>s;
            for(char e : s){
                if(e=='D'){
                    a[i]++;
                    a[i]%=10;
                }
                else{
                    a[i]--;
                    if(a[i]<0)a[i]=9;
                }
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}