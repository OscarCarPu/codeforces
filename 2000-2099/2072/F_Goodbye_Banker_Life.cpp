#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

string solve(int n,int bit){
    if(n<(1LL<<bit)){
        return solve(n,bit-1);
    }
    if(n==(1LL<<bit)){
        string ans = "";
        for(int i=0;i<n;i++){
            ans+="1";
        }
        return ans;
    }
    int needed = n;
    n-=(1LL<<bit);
    string ans = solve(n,bit-1);
    needed-=ans.size()*2;
    string sol = ans;
    for(int i=0;i<needed;i++){
        sol+="0";
    }
    sol+=ans;
    return sol;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s = solve(n,32);
        for(char c : s){
            if(c=='1')cout<<k<<" ";
            else cout<<"0 ";
        }
        cout<<"\n";
        
    }
}