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
        for(int i=0;i<n;i++){
            cin>>V[i];
        }
        sort(V.begin(),V.end());
        int x=0;
        for(int i=0;i<n;i++){
            if(V[i]>0){
                x=V[i];
                break;
            }
        }
        bool pos=true;
        if(x==0)pos=false;
        int c=0;
        if(V[0]<=0)c++;
        for(int i=1;i<n;i++){
            if(V[i]>0){
                break;
            }
            else{
                c++;
            }
            if(abs(V[i]-V[i-1])<x)pos=false;
        }
        if(pos)c++;
        cout<<c<<"\n";
    }
}