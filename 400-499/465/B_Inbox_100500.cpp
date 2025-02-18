#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int x=0;
    stack<int> S;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        if(y==0){
            if(x>0)S.push(x);
            x=0;
        }
        else x++;
    }
    if(x>0)S.push(x);
    int sol=-1;
    while(S.size()){
        sol+=(S.top()+1);
        S.pop();
    }
    cout<<max(0LL,sol);
}