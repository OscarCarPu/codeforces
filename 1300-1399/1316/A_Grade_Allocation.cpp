#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int max=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            max+=x;
        }
        cout<<min(max,m)<<"\n";
    }
}