#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a,b,c;
        cin>>a>>b>>c;
        bool A,B,C;
        bool pos=true;
        int cnt=0;
        A=B=C=false;
        while(A==false or B==false or C==false){
            cnt++;
            if(cnt==100){
                pos=false;
                break;
            }
            if(x==1){
                x=a;
                A=true;
            }
            else if(x==2){
                x=b;
                B=true;
            }
            else if(x==3){
                x=c;
                C=true;
            }
            else{
                pos=false;
                break;
            }
        }
        if(pos)cout<<"YES\n";
        else cout<<"NO\n";
    }
 }