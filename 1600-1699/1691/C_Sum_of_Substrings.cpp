#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cost=0;
        for(char e : s){
            if(e=='1')cost+=11;
        }
        int c1=0,c10=0;
        for(int i=0;i<n;i++){
            if(s[i]!='1'){
                c1++;
            }
            else break;
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]!='1'){
                c10++;
            }
            else break;
        }
        if(c1==n){
            cout<<"0"<<"\n";
        }
        else{

            if(k>=c10){
                cost-=10;
                k-=c10;
            }
            if(k>=c1 and cost!=1){
                cost--;
            }
            cout<<cost<<"\n";
        }
    }
}