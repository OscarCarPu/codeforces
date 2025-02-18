#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> V;
    map<int,int> M;
    while(n--){
        int x;
        cin>>x;
        if(M.count(x)==0)V.push_back(x);
        M[x]++;
    }
    if(V.size()==2){
        if(M[V[0]]==M[V[1]]){
            cout<<"YES\n";
            cout<<V[0]<<" "<<V[1]<<"\n";
            return 0;
        }
    }
    cout<<"NO";
}