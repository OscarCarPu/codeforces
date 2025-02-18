#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sol=1e9;
    string aux="ACTG";
    for(int i=3;i<n;i++){
        int cost=0;
        for(int j=3;j>=0;j--){
            cost+=min(min(abs('Z'-s[i-j])+abs(aux[3-j]-'A')+1,abs('A'-s[i-j])+abs('Z'-aux[3-j])+1),abs(aux[3-j]-s[i-j]));
        }
        sol=min(sol,cost);
    }
    cout<<sol;
}