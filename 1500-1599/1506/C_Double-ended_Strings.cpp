#include <bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int sol=0;
        for(int len=1;len<=min(a.length(),b.length());len++){
            for(int i=0;i+len<=a.length();i++){
                for(int j=0;j+len<=b.length();j++){
                    if(a.substr(i,len)==b.substr(j,len)){
                        sol=max(sol,len);
                    }
                }
            }
        }
        cout<<a.length()+b.length()-2*sol<<"\n";
    }
}