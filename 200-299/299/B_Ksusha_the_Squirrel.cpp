#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int pos=0;
    while(pos<n-1){
        bool poss=false;
        for(int i=1;i<=k;i++){
            if(i+pos==n)break;
            if(s[i+pos]=='.'){
                pos+=i;
                poss=true;
                break;
            }
        }
        if(poss==false){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}