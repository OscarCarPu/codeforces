#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,sol=-1;
        cin>>n;
        map<int,int> M;
        while(n--){
            int x;
            cin>>x;
            M[x]++;
            if(M[x]==3 and sol==-1)sol=x;
        }
        cout<<sol<<"\n";
    }
}