#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int cont=0;
        while(a<=n and b<=n){
            cont++;
            if(a<b){
                a+=b;
            }
            else{
                b+=a;
            }
        }
        cout<<cont<<"\n";
    }
    return 0;
}