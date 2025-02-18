#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string sol;
        int x=9;
        while(n>9){
            sol.push_back(char(x+'0'));
            n-=x;
            x--;
        }
        while(n!=0){
            if(x>=n){
                sol.push_back(char(n+'0'));
                n=0;
            }
            else{
                sol.push_back(char(x+'0'));
                n-=x;
            }
            x--;
        }
        reverse(sol.begin(),sol.end());
        cout<<sol<<"\n";
    }
}