#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    bool sol=true;
    int t=0,f=0,h=0,c=0;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x==25)t++;
        if(x==50){
            if(t){
                t--;
            }
            else{
                sol=false;
            }
            f++;
        }
        if(x==100){
            h++;
            if(f){
                f--;
                if(t){
                    t--;
                }
                else sol=false;
            }
            else if(t>2){
                t-=3;
            }
            else sol=false;
        }
    }
    if(sol)cout<<"YES";
    else cout<<"NO";
}