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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++)cin>>b[i];
        int sol=0;
        for(int bit=30;bit>=0;bit--){
            sol|=(1L<<bit);
            map<int,int> aux;
            for(int x : a)aux[x&sol]++;
            for(int x : b)aux[(~x)&sol]--;
            bool can=true;
            for(auto it : aux)can&=it.second==0;
            if(!can)sol^=(1LL<<bit);
        }
        cout<<sol<<"\n";
    }
}