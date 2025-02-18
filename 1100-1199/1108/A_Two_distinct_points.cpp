#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>c>>c>>b;
        if(a==b){
            b=c;
        }
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}