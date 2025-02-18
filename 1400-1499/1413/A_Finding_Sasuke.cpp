#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n/2;i++){
            int a,b;
            cin>>a>>b;
            cout<<-1*b<<" "<<a<<" ";
        }
        cout<<"\n";
    }
}