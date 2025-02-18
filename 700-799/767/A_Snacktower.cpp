#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<bool> B(n,false);
    int i=n-1;
    while(n--){
        int x;
        cin>>x;
        x--;
        B[x]=true;
        while(i>=0 and B[i]){
            cout<<i+1<<" ";
            i--;
        }
        cout<<endl;
    }
}