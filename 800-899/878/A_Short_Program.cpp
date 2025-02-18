#include <bits/stdc++.h>
using namespace std;
#define int long long 
int poW(int a,int p){
    if(p==0)return 1LL;
    if(p==1)return a;
    return poW(a*a,p/2)*(p%2?a:1LL);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<bool> a(10,true),x(10,false),o(10,false);
    while(n--){
        char e;
        cin>>e;
        int t;
        cin>>t;
        int bit=9;
        while(t>0 or bit>=0){
            int b=poW(2,bit);
            if(t>=b){
                t-=b;
                if(e=='|'){
                    o[bit]=true;
                    x[bit]=false;
                    a[bit]=true;
                }
                if(e=='^'){
                    if(o[bit]){
                        a[bit]=false;
                        o[bit]=false;
                    }
                    else if(a[bit]==false){
                        a[bit]=true;
                        o[bit]=true;
                    }
                    else{
                        if(x[bit]){
                            x[bit]=false;
                        }
                        else x[bit]=true;
                    }
                }
            }
            else{
                if(e=='&'){
                    a[bit]=false;
                    o[bit]=false;
                    x[bit]=false;
                }
            }
            bit--;
        }

        
    }
    int A=0,X=0,O=0;
        for(int i=0;i<10;i++){
            if(a[i])A+=poW(2,i);
            if(o[i])O+=poW(2,i);
            if(x[i])X+=poW(2,i);
        }
        cout<<"3\n& "<<A<<"\n| "<<O<<"\n^ "<<X;
}