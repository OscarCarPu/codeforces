#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi V(n);
        for(int i= 0;i<n;i++){
            cin>>V[i];
        }
        int sol=0;
        int f=1,t=1;
        for(int i=0;i<n;i++){
            int inv=0;
            for(int j=i+1;j<n;j++){
                if(V[i]>V[j]){
                    inv++;
                    if(inv>sol){
                        sol=inv;
                        f=i+1;
                        t=j+1;
                    }
                }
                else if(V[i]<V[j]){
                    inv--;
                }
            }
        }
        cout<<f<<" "<<t<<"\n";
    }
}