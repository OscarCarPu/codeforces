#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> Names={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    int x=1;
    int v=0;
    int i=0;
    int n;
    cin>>n;
    while(v+x<n){
        v+=x;
        i++;
        if(i==5){
            i=0;
            x*=2;
        }
    }
    cout<<Names[i];
}