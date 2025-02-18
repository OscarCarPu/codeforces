#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        map<int,int> M;
        bool sol=true;
        int num=-1;
        int n;
        int c=0;
        int d=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            M[x]++;
            if(M[x]==1)d++;
            c=max(M[x],c);
        }
        cout<<max(min(d-1,c),min(d,c-1))<<"\n";
    }
}