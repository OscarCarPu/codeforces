#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int sol=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(m<x){
                sol+=x-m;
                m=0;
            }
            else{
                m-=x;
            }
        }
        cout<<sol<<"\n";
    }
}