#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int,int> M;
    int n;
    cin>>n;
    int sol=0;
    while(n--){
        int x;
        cin>>x;
        M[x]++;
        if(M[x]==2){
            sol++;
            M[x]=0;
        }
    }
    cout<<sol/2;
}