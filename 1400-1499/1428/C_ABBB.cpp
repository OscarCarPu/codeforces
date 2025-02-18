#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0;
        int sol=0;
        int n=s.length();
        for(char e : s){
            if(e=='A'){
                a++;
            }
            else{
                if(a)a--;
                else a++;
            }
        }
        cout<<a<<"\n";
    }
}