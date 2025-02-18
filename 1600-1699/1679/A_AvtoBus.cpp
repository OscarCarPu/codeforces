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
        if(n%2==1 or n==2)cout<<"-1\n";
        else{
            if(n%6==0){
                cout<<n/6<<" ";
            }
            else{
                int aux=n-4;
                if(aux%6==0){
                    cout<<aux/6+1;
                }
                else{
                    aux-=4;
                    cout<<aux/6+2;
                }
                cout<<" ";
            }
            if(n%4==0){
                cout<<n/4<<"\n";
            }
            else{
                int aux=n-6;
                cout<<aux/4+1<<"\n";
            }
            
        }
    }
}