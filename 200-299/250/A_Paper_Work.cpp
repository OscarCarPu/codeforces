#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int cont=0;
    vector<int> sol;
    int contd=0;
    while(n--){
        int x;
        cin>>x;
        cont++;
        if(x<0)contd++;
        if(contd==3){
            cont--;
            sol.push_back(cont);
            cont=1;
            contd=1;
        }
    }
    sol.push_back(cont);
    cout<<sol.size()<<"\n";
    for(int i : sol)cout<<i<<" ";
}