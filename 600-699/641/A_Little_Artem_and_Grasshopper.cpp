#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> L(n);
    for(int i=0;i<n;i++)cin>>L[i];
    int pos=0;
    vector<bool> B(n,false);
    B[0]=true;
    while(pos>=0 and pos<n){
        if(s[pos]=='>'){
            pos+=L[pos];
        }
        else{
            pos-=L[pos];
        }
        if(pos<0 or pos>=n)break;
        if(B[pos]){
            cout<<"IN";
            break;
        }
        B[pos]=true;
    }
    cout<<"FINITE";
}