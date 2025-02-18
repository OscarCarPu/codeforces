#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
map<pair<int,int>,int> M;
set<int> S;
bool pal(int n){
    stringstream ss;
    ss<<n;
    string s=ss.str();
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1])return false;
    }
    return true;
}
int f(int n,int k){
    if(!M.count({n,k})){
        if(k>n or k==0){
            M[{n,k}]=0;
        }
        else if(n==k){
            if(S.count(k)==0)M[{n,k}]=0;
            else M[{n,k}]=1;
        }
        else{
            M[{n,k}]=f(n-1,k-1)+f(n-k,k);
            M[{n,k}]%=mod;
        }
    }
    return M[{n,k}];
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=1;i<=50000;i++){
        if(pal(i))S.insert(i);
    }
    while(t--){
        int n;
        cin>>n;
        int sol=0;
        for(int i=n;i>=1;i--){
            if(!pal(i))continue;
            sol+=f(n,i);
            sol%=mod;
        }
        cout<<sol<<"\n";
    }
}