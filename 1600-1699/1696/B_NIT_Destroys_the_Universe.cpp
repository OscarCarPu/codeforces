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
        int cont=0;
        bool turn=false;
        bool some=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0)turn=false;
            else{
                some=true;
                turn=true;
            }
            if(some and turn==false){
                cont++;
                some=false;
            }
        }
        if(some)cont++;
        cout<<min(2*1LL,cont)<<"\n";
    }
}