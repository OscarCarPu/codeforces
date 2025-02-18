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
    int cnt=0;
    bool zer=true;
    for(char e : s){
        if(e=='0'){
            if(zer){
                cout<<0;
            }
            else{
                zer=true;
                cout<<cnt;
                cnt=0;
            }
        }
        else{
            zer=false;
            cnt++;
        }
    }
    cout<<cnt;
}